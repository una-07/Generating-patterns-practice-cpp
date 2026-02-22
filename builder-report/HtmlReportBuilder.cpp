#include "HtmlReportBuilder.h"

void HtmlReportBuilder::SetHeader(const std::string& header) {
    report.SetHeader("<h1>" + header + "</h1>");
    report.SetFormat("HTML");
}

void HtmlReportBuilder::AddSection(const std::string& title, const std::string& content) {
    report.AddSection("<h2>" + title + "</h2><p>" + content + "</p>");
}

void HtmlReportBuilder::SetFooter(const std::string& footer) {
    report.SetFooter("<footer>" + footer + "</footer>");
}

void HtmlReportBuilder::SetStyle(const ReportStyle&) {
}

Report HtmlReportBuilder::GetReport() {
    return report;
}
