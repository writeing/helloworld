#pragma once


// CPageForm 对话框

class CPageForm : public CPropertyPage
{
	DECLARE_DYNAMIC(CPageForm)

public:
	CPageForm();
	virtual ~CPageForm();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnSetActive();
};
