
// MFCsystem.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCsystemApp: 
// �йش����ʵ�֣������ MFCsystem.cpp
//

class CMFCsystemApp : public CWinApp
{
public:
	CMFCsystemApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCsystemApp theApp;