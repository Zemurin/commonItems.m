// airline_ticket.cpp
module airline_ticket;

double AirlineTicket::calculatePriceInDollars() const
{

	return m_numberOfMiles * 0.1;
}

std::string AirlineTicket::getPassengerName() const
{ // E0147

	return m_passengerName; // E0020
}

void AirlineTicket::setPassengerName(std::string name)
{ // E0147

	m_passengerName = name; // E0020
}

int AirlineTicket::getNumberOfMiles() const
{

	return m_numberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles)
{

	m_numberOfMiles = miles;
}

bool AirlineTicket::hasEliteSuperRewardsStatus() const
{

	return m_hasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status)
{

	m_hasEliteSuperRewardsStatus = status;
}


/* module Log;
import std.core;
#include <ctime>


Log::Log(const LogLevel level): logLevel(level)
{
	static auto logFileCreated = false;
	if (!logFileCreated)
	{
		std::ofstream logFile("log.txt", std::ofstream::trunc);
		logFileCreated = true;
		logFile.close();
	}
}


Log::~Log()
{
	logMessageStream << std::endl;
	const auto logMessage = logMessageStream.str();
	WriteToFile(logLevel, logMessage);
}


static const std::map<LogLevel, std::string> logLevelStrings = {{LogLevel::Error, "   [ERROR] "},
	 {LogLevel::Warning, " [WARNING] "},
	 {LogLevel::Info, "    [INFO] "},
	 {LogLevel::Debug, "   [DEBUG]     "},
	 {LogLevel::Progress, "[PROGRESS] "}};

void Log::WriteToFile(const LogLevel level, const std::string& logMessage)
{
	std::ofstream logFile("log.txt", std::ofstream::app);
	WriteTheTime(logFile);
	logFile << logLevelStrings.find(level)->second;
	logFile << logMessage;
	std::cout << logLevelStrings.find(level)->second;
	std::cout << logMessage; // write to the console for the sake of tests
}


void Log::WriteTheTime(std::ostream& logFile)
{
	time_t rawTime;
	time(&rawTime);

	tm timeInfo{};
	#if (defined(WIN32) || defined(_WIN32) || defined(__WIN32__))
	localtime_s(&timeInfo, &rawTime);
	#else
	localtime_r(&rawTime, &timeInfo); // POSIX
	#endif
	

	char timeBuffer[64];
	const auto bytesWritten = strftime(timeBuffer, sizeof timeBuffer, "%Y-%m-%d %H:%M:%S ", &timeInfo);
	if (bytesWritten != 0)
	{
		logFile << timeBuffer;
	}
}
*/