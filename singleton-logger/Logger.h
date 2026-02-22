#pragma once
#include <fstream>
#include <mutex>
#include <string>
#include "LogLevel.h"

class Logger {
private:
    static Logger* instance;
    static std::mutex instanceMutex;
    std::mutex writeMutex;

    std::ofstream file;
    LogLevel currentLevel;
    std::string filePath;

    Logger();
    void LoadConfig();

public:
    static Logger* GetInstance();

    void SetLogLevel(LogLevel level);
    void Log(const std::string& message, LogLevel level);
};
