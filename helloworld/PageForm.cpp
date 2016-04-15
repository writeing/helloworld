// PageForm.cpp : 实现文件
//

#include "stdafx.h"
#include "helloworld.h"
#include "PageForm.h"
#include "afxdialogex.h"


// CPageForm 对话框

IMPLEMENT_DYNAMIC(CPageForm, CPropertyPage)

CPageForm::CPageForm()
	: CPropertyPage(CPageForm::IDD)
{

}

CPageForm::~CPageForm()
{
}

void CPageForm::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPageForm, CPropertyPage)
END_MESSAGE_MAP()


// CPageForm 消息处理程序


BOOL CPageForm::OnSetActive()
{
	// TODO: 在此添加专用代码和/或调用基类
	CPropertySheet * psheet = (CPropertySheet*)GetParent();
	psheet->SetWizardButtons(PSWIZB_NEXT);
	return CPropertyPage::OnSetActive();
}
