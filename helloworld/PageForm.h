#pragma once


// CPageForm �Ի���

class CPageForm : public CPropertyPage
{
	DECLARE_DYNAMIC(CPageForm)

public:
	CPageForm();
	virtual ~CPageForm();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnSetActive();
};
