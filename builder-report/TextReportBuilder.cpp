#include "TextReportBuilder.h"

void TextReportBuilder::SetHeader(const std::string& header) {
    report.SetHeader(header);
    report.SetFormat("TEXT");
}

void TextReportBuilder::AddSection(const std::string& title, const std::string& content) {
    report.AddSection(title + ": " + content);
}

void TextReportBuilder::SetFooter(const std::string& footer) {
    report.SetFooter(footer);
}

void TextReportBuilder::SetStyle(const ReportStyle&) {
}

Report TextReportBuilder::GetReport() {
    return report;
}
