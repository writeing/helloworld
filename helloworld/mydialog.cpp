// mydialog.cpp : 实现文件
//

#include "stdafx.h"
#include "helloworld.h"
#include "mydialog.h"
#include "afxdialogex.h"


// mydialog 对话框

IMPLEMENT_DYNAMIC(mydialog, CDialogEx)

mydialog::mydialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(mydialog::IDD, pParent)
{

}

mydialog::~mydialog()
{
}

void mydialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(mydialog, CDialogEx)
END_MESSAGE_MAP()


// mydialog 消息处理程序
