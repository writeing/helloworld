
// helloworld.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// ChelloworldApp:
// �йش����ʵ�֣������ helloworld.cpp
//

class ChelloworldApp : public CWinApp
{
public:
	ChelloworldApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern ChelloworldApp theApp;