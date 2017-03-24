#pragma once
#include "State.h"
class LoopController
{
public:
	LoopController();
	void run();
	~LoopController();
private:
	State* _currentState;
};

