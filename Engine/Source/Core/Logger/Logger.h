#pragma once
#include <vector>
#include <string>
#include <time.h>
#include <sstream>

#define Log(message) LogS(message, Severity::Debug)

#define LogS(message , severity) \
std::ostringstream  messageStream;\
messageStream << "Time: " << std::to_string(time(0)) << " File: " << __FILE__ << " Linia: " << __LINE__ << " Function: " << __func__ << message << "\n";\
Logger::GetInstance().LogMsg(messageStream.str(), severity);

enum Severity
{
	Debug , Warrning, Error , Crittical
};

class Logger
{
public:
	static Logger& GetInstance();
	void LogMsg(std::string , Severity);
	~Logger();
	void DumpListToFile();

private:
	Logger();
	std::vector<std::string> _temporaryList;
};

