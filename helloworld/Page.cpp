// Page.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "helloworld.h"
#include "Page.h"
#include "afxdialogex.h"


// CPage �Ի���

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


// CPage ��Ϣ�������


BOOL CPage::OnSetActive()
{
	// TODO: �ڴ����ר�ô����/����û���
	CPropertyPage * ppage = (CPropertyPage*)GetParent();
	//ppage->OnXButtonDown(PSWIZB_NEXT);
	
	return CPropertyPage::OnSetActive();
}
