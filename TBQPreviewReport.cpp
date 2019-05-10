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

void TBQPreviewReport::buildReport()
{
    // ���챨����Ϣ
    buildReportSetting();

    // �����ҳ��Ϣ
    buildReportPage();

    // ��������ļ�
    outputFile();
}

const TBQReportPages & TBQPreviewReport::reportPages() const
{
    return m_oReportPages;
}
