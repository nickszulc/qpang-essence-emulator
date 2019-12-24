#ifndef SHARED_LOGGER_HPP
#define SHARED_LOGGER_HPP

#include <string>
#include <memory>
#include "spdlog/spdlog.h"

class Logger {

public:
	void Logger::Init(std::string name)
	{
		try
		{
			//CreateDirectoryA("logs", NULL);
			boost::filesystem::create_directory("logs");
			spdlog::init_thread_pool(8192, 2);
			auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
			std::vector<spdlog::sink_ptr> sinks{ console_sink };
			_logger = std::make_shared<spdlog::logger>(name, sinks.begin(), sinks.end());

			_logger->set_level(spdlog::level::trace);
		}
		catch (const spdlog::spdlog_ex & ex)
		{
			std::cout << "Log init failed: " << ex.what() << std::endl;
		}
	}

	std::shared_ptr<spdlog::logger> Logger::Get()
	{
		return _logger;
	}
	static Logger* Instance()
	{
		static Logger logger;
		return &logger;
	}

	void Init(std::string name);
	std::shared_ptr<spdlog::logger> Get();
private:
	std::shared_ptr<spdlog::logger> _logger;
};

#define sLogger Logger::Instance()

#endif
