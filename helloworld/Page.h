#pragma once


// CPage 对话框

class CPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CPage)

public:
	CPage();
	virtual ~CPage();

// 对话框数据
	enum { IDD = IDD_HELLOWORLD_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnSetActive();
};
