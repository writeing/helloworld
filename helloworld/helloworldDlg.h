
// helloworldDlg.h : ͷ�ļ�
//

#pragma once


// ChelloworldDlg �Ի���
class ChelloworldDlg : public CDialogEx
{
// ����
public:
	ChelloworldDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_HELLOWORLD_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
