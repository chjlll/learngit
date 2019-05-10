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
    // 保存分页数据
    m_oReportPages = reportPages;
}

void TBQPreviewReport::buildReport()
{
    // 构造报表信息
    buildReportSetting();

    // 构造分页信息
    buildReportPage();

    // 生成输出文件
    outputFile();
}

const TBQReportPages & TBQPreviewReport::reportPages() const
{
    return m_oReportPages;
}
