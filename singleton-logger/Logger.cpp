#include "Logger.h"
#include <iostream>
#include <fstream>

Logger* Logger::instance = nullptr;
std::mutex Logger::instanceMutex;

Logger::Logger() {
    LoadConfig();
    file.open(filePath, std::ios::app);
}

Logger* Logger::GetInstance() {
    std::lock_guard<std::mutex> lock(instanceMutex);
    if (!instance) {
        instance = new Logger();
    }
    return instance;
}

void Logger::SetLogLevel(LogLevel level) {
    currentLevel = level;
}

void Logger::Log(const std::string& message, LogLevel level) {
    if (level < currentLevel) return;

    std::lock_guard<std::mutex> lock(writeMutex);
    file << static_cast<int>(level) << ": " << message << std::endl;
}

void Logger::LoadConfig() {
    std::ifstream cfg("config.txt");
    int lvl;
    cfg >> filePath >> lvl;
    currentLevel = static_cast<LogLevel>(lvl);
}

