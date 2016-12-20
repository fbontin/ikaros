//  Created by Grupp 16 on 2016-11-30.
//  Copyright © 2016 Lund University. All rights reserved.
//
//
//      SpeedRegulator.h		This file is a part of the IKAROS project
//
//
//    Copyright (C) 2015 Christian Balkenius
///
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#ifndef SPEEDREGULATOR
#define SPEEDREGULATOR

#include "IKAROS.h"

class SpeedRegulator: public Module
{
public:
    static Module * Create(Parameter * p) { return new SpeedRegulator(p); }
    
    float *		goal_position;
    float *     feedback_position;
    float *     state;
    float *     trigger;
    
    float *     output_speed;
    float *     is_throwing;
    
    bool        throwing_sequence;
    
    
				SpeedRegulator(Parameter * p) : Module(p) {};
    virtual		~SpeedRegulator() {};
    
    void		Init();
    void		Tick();
};

#endif
