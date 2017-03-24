#pragma once
#include "InputAndCommunication\ExternalComunicationController.h"

class State
{
public:
	State();
	~State();
private:
	ExternalComunicationController _comunicationController;
};

