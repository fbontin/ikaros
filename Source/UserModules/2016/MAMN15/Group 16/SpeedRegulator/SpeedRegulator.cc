//
//  SpeedRegulator.cpp
//  ikaros
//
//  Created by Grupp 16 on 2016-11-30.
//  Copyright © 2016 Lund University. All rights reserved.
//

#include "SpeedRegulator.h"
#include <cmath>

using namespace ikaros;

void
SpeedRegulator::Init()
{
    
    goal_position       = GetInputArray("GOAL_POSITION");
    feedback_position   = GetInputArray("FEEDBACK_POSITION");
    state               = GetInputArray("STATE");
    trigger             = GetInputArray("TRIGGER");
    
    output_speed        = GetOutputArray("OUTPUT_SPEED");
    is_throwing         = GetOutputArray("IS_THROWING");
    
    throwing_sequence = false;
    
}






// NÅN JÄTTESTOR KOMMENTAR TYP-----------------------------

// TODO - Klickar man på tillbakavägen kastar Epi igen, hetsigt. får ej ske.







void
SpeedRegulator::Tick()
{

    float speed[6];
    bool internal_is_throwing = false;
    
    if (trigger[0]) {
        throwing_sequence = true;
        goal_position[0] = 42.0f; //random high value, first tick
    }
    
    if (throwing_sequence){
        
        if (goal_position[0] > -30.0f && feedback_position[0] < -25.0f) {
            internal_is_throwing = true;
        }
        
        if (goal_position[0] < -105.0f && feedback_position[0] < -105.0f) {
            throwing_sequence = false;
        }
        
        if (state[0] == 1.0f){
            float error = std::abs(goal_position[0] - feedback_position[0]);
            if (internal_is_throwing){
                
                // 0. Shoulder forward/backward
                speed[0] = 1 - std::pow(0.005f * error, 1.8f);
                
                // 1. Shoulder outwards
                speed[1] = 0.1f;
                
                // 2. Over arm spin
                speed[2] = 0.1f;
                
                // 3. Elbow
                speed[3] = speed[0];
                
                // 4. Under arm spin
                speed[4] = 0.1f;
                
                // 5. Hand
                if (feedback_position[0] >= -45) {
                    speed[5] = 0.9f;
                } else {
                    speed[5] = 0.1f;
                }
                
            } else {
                
                if (error > 60.0f) {
                    speed[0] = 0.7f - error * 0.007f;
                } else if (error > 30.0f) {
                    speed[0] = 0.3f;
                } else {
                    speed[0] = 0.1f + error * 0.007f;
                }
                for (int i = 1; i < 6; i++) {
                    speed[i] = speed[0];
                }
            }
            
            //All servos limits
            for (int i = 0; i < 6; i++) {
                if (speed[i] < 0.1f) {
                    speed[i] = 0.1f;
                } else if (speed[i] > 1.0f) {
                    speed[i] = 1.0f;
                }
            }
        }
        copy_array(output_speed, speed, 6);
        
        if (internal_is_throwing) {
            * is_throwing = 1.0f;
        } else {
            * is_throwing = 0.0f;
        }
    }
}

static InitClass init("SpeedRegulator", &SpeedRegulator::Create, "Source/UserModules/2016/MAMN15/Group 16/SpeedRegulator/");

