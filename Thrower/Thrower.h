#ifndef THROWER
#define THROWER

#include "IKAROS.h"

class Thrower: public Module
{
public:
	static Module * Create(Parameter * p) {
     return new Thrower(p);
  }

  float *		position1;
  float *		position2;
  float *   position3;
  float *		output;

	Thrower(Parameter * p) : Module(p) {};
  virtual		~Thrower() {};

  void		Init();
  void		Tick();
};

#endif
