
// helloworldDlg.h : 头文件
//

#pragma once


// ChelloworldDlg 对话框
class ChelloworldDlg : public CDialogEx
{
// 构造
public:
	ChelloworldDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_HELLOWORLD_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	double m_edit_summad;
	double e_edit_add;
	double e_edit_sum;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedInstructButton();
	afx_msg void OnBnClickedButton3();
	CString e_edit_filename;
};
