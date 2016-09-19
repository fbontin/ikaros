#include "Thrower.h"

using namespace ikaros;

void
Thrower::Init()
{
    position1		=	GetInputArray("POSITION1");	   // The input and outputs are treated as arrays internally
    position2		=	GetInputArray("POSITION2");
    position3   = GetInputArray("POSITION3");
    output		  =	GetOutputArray("OUTPUT");
}

void
Thrower::Tick()
{
    if position1 < 30 {
      position1 = 30;
    }
}

static InitClass init("Thrower", &Thrower::Create, "Thrower/");
