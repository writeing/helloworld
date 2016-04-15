// Page.cpp : 实现文件
//

#include "stdafx.h"
#include "helloworld.h"
#include "Page.h"
#include "afxdialogex.h"


// CPage 对话框

IMPLEMENT_DYNAMIC(CPage, CPropertyPage)

CPage::CPage()
	: CPropertyPage(CPage::IDD)
{

}

CPage::~CPage()
{
}

void CPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPage, CPropertyPage)
END_MESSAGE_MAP()


// CPage 消息处理程序


BOOL CPage::OnSetActive()
{
	// TODO: 在此添加专用代码和/或调用基类
	CPropertyPage * ppage = (CPropertyPage*)GetParent();
	//ppage->OnXButtonDown(PSWIZB_NEXT);
	
	return CPropertyPage::OnSetActive();
}
