#pragma once


// CPage �Ի���

class CPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CPage)

public:
	CPage();
	virtual ~CPage();

// �Ի�������
	enum { IDD = IDD_HELLOWORLD_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnSetActive();
};
