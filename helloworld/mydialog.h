#pragma once


// mydialog �Ի���

class mydialog : public CDialogEx
{
	DECLARE_DYNAMIC(mydialog)

public:
	mydialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mydialog();

// �Ի�������
	enum { IDD = IDD_HELLOWORLD_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
