// PageForm.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "helloworld.h"
#include "PageForm.h"
#include "afxdialogex.h"


// CPageForm �Ի���

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


// CPageForm ��Ϣ�������


BOOL CPageForm::OnSetActive()
{
	// TODO: �ڴ����ר�ô����/����û���
	CPropertySheet * psheet = (CPropertySheet*)GetParent();
	psheet->SetWizardButtons(PSWIZB_NEXT);
	return CPropertyPage::OnSetActive();
}
