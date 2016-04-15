#pragma once


// mydialog 对话框

class mydialog : public CDialogEx
{
	DECLARE_DYNAMIC(mydialog)

public:
	mydialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mydialog();

// 对话框数据
	enum { IDD = IDD_HELLOWORLD_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
