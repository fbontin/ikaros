#include "ClosestObject.h"

using namespace ikaros;

void
ClosestObject::Init()
{
    input		=	GetInputMatrix("INPUT");
    size_x  = GetInputSizeX("INPUT");
    size_y  = GetInputSizeY("INPUT");

    distance	=	GetOutputArray("DISTANCE");
    x       = GetOutputArray("XPIXEL");
    y       = GetOutputArray("YPIXEL");
    angle   = GetOutputArray("ANGLE");
}



void
ClosestObject::Tick()
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
    /*int vertAngle = closestY

    for(int i=0; j < ???; i+=1){

    }*/

    *distance = closestDistance;
    *x = closestX;
    *y = closestY;
    *angle = ((320 - closestX) / 10) + 180; //magic fromula ;)
}

static InitClass init("ClosestObject", &ClosestObject::Create, "Source/UserModules/ClosestObject/");
