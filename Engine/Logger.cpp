#include "Logger.h"
#include <iostream>
#include <fstream>


Logger& Logger::GetInstance()
{
	static Logger instance;
	return instance;
}

void Logger::LogMsg(std::string msg, Severity severityLevel)
{
	msg = std::string(getTextForEnum(severityLevel)) + msg;
	_temporaryList.push_back(msg);
	if (_temporaryList.size > 100)
		DumpListToFile();

}

void Logger::DumpListToFile()
{
	try {
		std::ofstream fs;
		fs.open("log.txt");
		for (auto &msg : _temporaryList)
		{
			fs << msg;
		}
		fs.close();
	}
	catch () 
	{
	}

}

Logger::Logger()
{
}


Logger::~Logger()
{
}
