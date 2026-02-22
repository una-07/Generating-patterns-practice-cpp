#include "ReportDirector.h"

void ReportDirector::ConstructReport(IReportBuilder& builder, const ReportStyle& style) {
    builder.SetStyle(style);
    builder.SetHeader("Monthly Report");
    builder.AddSection("Sales", "Sales increased by 20%");
    builder.AddSection("Users", "New users registered");
    builder.SetFooter("Company Confidential");
}
