#include <iostream>

enum WarningLevel {
	Error = 0,
	Warning,
	Info
};

#pragma region Logger
class Logger
{
public:
	void SetLevel(WarningLevel level);
	Logger();
	~Logger();

private:
	WarningLevel m_warningLevel{ Error };
};

Logger::Logger() {
	std::cout << "Logger Initialized.\n";
}

Logger::~Logger() {
	std::cout << "Logger Destroyed.\n";
}

void Logger::SetLevel(WarningLevel level) {
	this->m_warningLevel = level;
}
#pragma endregion

#pragma region DeLogger
class DeLogger : public Logger {
public:
	DeLogger();
	~DeLogger();
private:
};

DeLogger::DeLogger() {
	std::cout << "DeLogger.\n";
}

DeLogger::~DeLogger() {
	std::cout << "Destroyed DeLogger.\n";
}
#pragma endregion