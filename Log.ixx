// airline_ticket.ixx
export module airline_ticket;
import<string>;

export class AirlineTicket
{
  public:
	double calculatePriceInDollars() const;

	std::string getPassengerName() const;
	void setPassengerName(std::string name);

	int getNumberOfMiles() const;
	void setNumberOfMiles(int miles);

	bool hasEliteSuperRewardsStatus() const;
	void setHasEliteSuperRewardsStatus(bool status);

  private:
	std::string m_passengerName{"Unknown Passenger"};
	int m_numberOfMiles{0};
	bool m_hasEliteSuperRewardsStatus{false};
};

/*
export module Log;
import<sstream>;
import<string>;



export enum class LogLevel
{
	Error,
	Warning,
	Info,
	Debug,
	Progress
};



export class Log
{
	public:
		explicit Log(LogLevel);
		~Log();
		Log(const Log&) = delete;
		Log operator=(const Log&) = delete;
		Log(Log&&) = delete;
		Log operator=(Log&&) = delete;

		template<class T>	Log& operator<<(T t)
		{
			logMessageStream << t;
			return *this;
		}

	private:
		static void WriteToFile(LogLevel, const std::string& logMessage);
		static void WriteTheTime(std::ostream& logFile);

		LogLevel logLevel;
		std::ostringstream logMessageStream;
};


using LOG = Log;
*/