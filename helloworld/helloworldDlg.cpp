
// helloworldDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "helloworld.h"
#include "helloworldDlg.h"
#include "afxdialogex.h"
#include "AddSheet.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// ChelloworldDlg 对话框



ChelloworldDlg::ChelloworldDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(ChelloworldDlg::IDD, pParent)
	, m_edit_summad(0)
	, e_edit_add(0)
	, e_edit_sum(0)
	, e_edit_filename(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void ChelloworldDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_edit_summad);
	DDX_Text(pDX, IDC_EDIT2, e_edit_add);
	DDX_Text(pDX, IDC_EDIT3, e_edit_sum);
	DDX_Text(pDX, IDC_EDIT_filename, e_edit_filename);
}

BEGIN_MESSAGE_MAP(ChelloworldDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &ChelloworldDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDCANCEL, &ChelloworldDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_INSTRUCT_BUTTON, &ChelloworldDlg::OnBnClickedInstructButton)
	ON_BN_CLICKED(IDC_BUTTON3, &ChelloworldDlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// ChelloworldDlg 消息处理程序

BOOL ChelloworldDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void ChelloworldDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void ChelloworldDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR ChelloworldDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void ChelloworldDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData();
	e_edit_sum = e_edit_add + m_edit_summad;
	UpdateData(false);

}


void ChelloworldDlg::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	
	INT_PTR nRes;
	CDialogEx cabout = CAboutDlg();
	cabout.Create(IDD_ABOUTBOX,this);	
	cabout.ShowWindow(SW_SHOW);
	//nRes = cabout.DoModal();
	CDialogEx::OnCancel();
}


void ChelloworldDlg::OnBnClickedInstructButton()
{
	CAddSheet sheet(_T(""));
	sheet.SetWizardMode();
	sheet.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}


void ChelloworldDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码

	CFileDialog cfd(true);
	cfd.DoModal();

	CString name = cfd.GetFileName();	
	UpdateData();
	e_edit_filename = name;
	UpdateData(false);
}
