#pragma once
#include <string>
#include "LogLevel.h"

class LogReader {
public:
    static void Read(const std::string& path, LogLevel level);
};
