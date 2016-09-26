#include "Throw.h"

using namespace ikaros;

void
Throw::Init()
{
    input1		=	GetInputArray("INPUT");
    input2    = GetInputArray("INPUT");
    input3    = GetInputArray("INPUT");
    output		=	GetOutputArray("OUTPUT");
    size		=	GetOutputSize("OUTPUT");
}

void
Throw::Tick()
{
    
}

static InitClass init("Throw", &Throw::Create, "Source/Modules/UserModules/Throw/");
