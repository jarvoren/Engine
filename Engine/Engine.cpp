// Engine.cpp : Defines the entry point for the console application.
//
#include "Source\Core\Logger\Logger.h"
#include "Source\Core\LoopController.h"


int main()
{
	try
	{
		LoopController* controller = new LoopController();
		controller->run();
		return 0;
	}
	catch (...)
	{
		Logger::GetInstance().DumpListToFile();
	}
}


