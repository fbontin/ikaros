#ifndef THROW
#define THROW

#include "IKAROS.h"

class Throw: public Module
{
public:
	static Module * Create(Parameter * p) { return new Throw(p); }

    float *		input1;
		float *		input2;
		float *		input3;
    float *		output;
    int			size;

		Throw(Parameter * p) : Module(p) {};
    virtual		~Throw() {};

    void		Init();
    void		Tick();
};

#endif
