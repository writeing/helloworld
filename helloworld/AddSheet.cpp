// AddSheet.cpp : 实现文件
//

#include "stdafx.h"
#include "helloworld.h"
#include "AddSheet.h"


// CAddSheet

IMPLEMENT_DYNAMIC(CAddSheet, CPropertySheet)

CAddSheet::CAddSheet(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
{
	AddPage(&m_page);
}

CAddSheet::CAddSheet(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{
	AddPage(&m_page);
}

CAddSheet::~CAddSheet()
{
}


BEGIN_MESSAGE_MAP(CAddSheet, CPropertySheet)
END_MESSAGE_MAP()


// CAddSheet 消息处理程序
