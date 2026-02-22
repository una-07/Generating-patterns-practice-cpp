#include "LogReader.h"
#include <fstream>
#include <iostream>

void LogReader::Read(const std::string& path, LogLevel level) {
    std::ifstream file(path);
    int lvl;
    std::string msg;

    while (file >> lvl) {
        std::getline(file, msg);
        if (lvl >= static_cast<int>(level)) {
            std::cout << lvl << msg << std::endl;
        }
    }
}
