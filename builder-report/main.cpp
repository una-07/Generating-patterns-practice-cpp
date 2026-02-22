#include "TextReportBuilder.h"
#include "HtmlReportBuilder.h"
#include "ReportDirector.h"
#include <iostream>

int main() {
    ReportStyle style{"white", "black", 12};
    ReportDirector director;

    TextReportBuilder textBuilder;
    director.ConstructReport(textBuilder, style);
    Report textReport = textBuilder.GetReport();
    textReport.Export();

    HtmlReportBuilder htmlBuilder;
    director.ConstructReport(htmlBuilder, style);
    Report htmlReport = htmlBuilder.GetReport();
    htmlReport.Export();

    return 0;
}
