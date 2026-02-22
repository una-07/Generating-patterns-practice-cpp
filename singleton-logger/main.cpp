#include "Logger.h"
#include "LogReader.h"
#include <thread>

void Worker(int id) {
    auto logger = Logger::GetInstance();
    logger->Log("Thread " + std::to_string(id), LogLevel::INFO);
}

int main() {
    std::thread t1(Worker, 1);
    std::thread t2(Worker, 2);

    t1.join();
    t2.join();

    LogReader::Read("app.log", LogLevel::WARNING);
    return 0;
}

