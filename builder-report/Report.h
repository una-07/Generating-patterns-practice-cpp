#pragma once
#include <string>
#include <vector>

class Report {
private:
    std::string header;
    std::vector<std::string> sections;
    std::string footer;
    std::string format;

public:
    void SetHeader(const std::string& h);
    void AddSection(const std::string& s);
    void SetFooter(const std::string& f);
    void SetFormat(const std::string& f);

    void Export() const;
};
