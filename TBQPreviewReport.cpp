#include "StdAfx.h"
#include "TBQPreviewReport.h"

TBQPreviewReport::TBQPreviewReport(const QString &fileName)
    : m_strFileName(fileName)
{
}

TBQPreviewReport::~TBQPreviewReport()
{
}

void TBQPreviewReport::setReport(const TBQReportPages &reportPages)
{
    // �����ҳ����
    m_oReportPages = reportPages;
}

void xx
{
	
}
