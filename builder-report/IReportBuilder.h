#pragma once
#include <string>
#include "Report.h"
#include "ReportStyle.h"

class IReportBuilder {
public:
    virtual void SetHeader(const std::string& header) = 0;
    virtual void AddSection(const std::string& title, const std::string& content) = 0;
    virtual void SetFooter(const std::string& footer) = 0;
    virtual void SetStyle(const ReportStyle& style) = 0;
    virtual Report GetReport() = 0;
    virtual ~IReportBuilder() = default;
};
