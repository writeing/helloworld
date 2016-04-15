#pragma once

// CAddSheet
#include "PageForm.h"
class CAddSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CAddSheet)
	CPageForm m_page;
public:
	CAddSheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CAddSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	virtual ~CAddSheet();

protected:
	DECLARE_MESSAGE_MAP()
};


