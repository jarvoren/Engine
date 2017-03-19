// Engine.cpp : Defines the entry point for the console application.
//
#include "Source\Core\LoopController.h"


int main()
{
	LoopController* controller = new LoopController();
	controller->run();
    return 0;
}

