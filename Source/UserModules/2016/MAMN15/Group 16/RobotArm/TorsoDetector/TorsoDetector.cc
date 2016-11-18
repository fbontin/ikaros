
#include "TorsoDetector.h"
#include <cmath>
#include <vector>

using namespace ikaros;

void
TorsoDetector::Init()
{
    input	= GetInputMatrix("INPUT");
    size_x  = GetInputSizeX("INPUT");
    size_y  = GetInputSizeY("INPUT");

    distance= GetOutputArray("DISTANCE");
    angle   = GetOutputArray("ANGLE");
}



void
TorsoDetector::Tick()
{
    int closestX = 0;
    int closestY = 0;
    int closestDistance = 10000000;
    for(int j=0; j<size_y; j+=10) {
        for(int i=0; i<size_x; i+=10) {
            if (input[j][i] < closestDistance && input[j][i] > 500) { //The closest distance seems to be 450 mm
                closestX = i;
                closestY = j;
                closestDistance = input[j][i];
            }
        }
    }
    //vertical: 43 degrees, 480 pixels

    torsoY = closestY + 70; //7 degrees * 10 = 70 pixels
    //std::vector<int> points; //include maybe?
    bool throwIt = false;

    int lastDistance = input[0][torsoY];

    for(int i=1; i<size_x; i+=1) {
        currentDistance = input[i][torsoY];
        if (std::abs (lastDistance - currentDistance) >= 20 && std:abs (i - closestX) >= 60) {
            //points.push_back(i);
            throwIt = true;
            break;
        }
        lastDistance = currentDistance
    }



    *throwIt = throwIt;
    *distance = closestDistance;
    *angle = ((320 - closestX) / 10) + 180; //magic formula ;)
}

static InitClass init("TorsoDetector", &TorsoDetector::Create, "Source/UserModules/TorsoDetector/");
