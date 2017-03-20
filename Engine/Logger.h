#pragma once
#include <vector>
#include <string>

#define Log(msg , severity) \
msg = time_t + " File: " + __FILE__  + " Linia: " + __LINE__ + " Function: " + __FUNCTION__ +"\n"; \
Logger::GetInstance()->LogMsg(msg, severity);\



static const char * EnumStrings[] = { "Warrning", "Debug", "Error" };

const char * getTextForEnum(int enumVal)
{
	return EnumStrings[enumVal];
}

enum Severity
{
	Warrning, Debug , Error
};

class Logger
{
public:

	static Logger& GetInstance();
	void LogMsg(std::string , Severity);
	~Logger();

private:
	void DumpListToFile();
	Logger();
	std::vector<std::string> _temporaryList;
};

