#pragma once
#include "IReportBuilder.h"
#include "ReportStyle.h"

class ReportDirector {
public:
    void ConstructReport(IReportBuilder& builder, const ReportStyle& style);
};
