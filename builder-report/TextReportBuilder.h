#pragma once
#include "IReportBuilder.h"

class TextReportBuilder : public IReportBuilder {
private:
    Report report;

public:
    void SetHeader(const std::string& header) override;
    void AddSection(const std::string& title, const std::string& content) override;
    void SetFooter(const std::string& footer) override;
    void SetStyle(const ReportStyle& style) override;
    Report GetReport() override;
};
