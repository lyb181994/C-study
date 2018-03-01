
// MFCsystemDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCsystem.h"
#include "MFCsystemDlg.h"
#include "afxdialogex.h"
#include <stdlib.h>


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CMFCsystemDlg �Ի���



CMFCsystemDlg::CMFCsystemDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFCsystemDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCsystemDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCsystemDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCsystemDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCsystemDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCsystemDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCsystemDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCsystemDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCsystemDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCsystemDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCsystemDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCsystemDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCsystemDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCsystemDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCsystemDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCsystemDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCsystemDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCsystemDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCsystemDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCsystemDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCsystemDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCsystemDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CMFCsystemDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON23, &CMFCsystemDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON22, &CMFCsystemDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON32, &CMFCsystemDlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON39, &CMFCsystemDlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON43, &CMFCsystemDlg::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON52, &CMFCsystemDlg::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON85, &CMFCsystemDlg::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON28, &CMFCsystemDlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON61, &CMFCsystemDlg::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON63, &CMFCsystemDlg::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON90, &CMFCsystemDlg::OnBnClickedButton90)
	ON_BN_CLICKED(IDC_BUTTON91, &CMFCsystemDlg::OnBnClickedButton91)
	ON_BN_CLICKED(IDC_BUTTON92, &CMFCsystemDlg::OnBnClickedButton92)
	ON_BN_CLICKED(IDC_BUTTON95, &CMFCsystemDlg::OnBnClickedButton95)
	ON_BN_CLICKED(IDC_BUTTON45, &CMFCsystemDlg::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON62, &CMFCsystemDlg::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON31, &CMFCsystemDlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON74, &CMFCsystemDlg::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON41, &CMFCsystemDlg::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON42, &CMFCsystemDlg::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON33, &CMFCsystemDlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON66, &CMFCsystemDlg::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON83, &CMFCsystemDlg::OnBnClickedButton83)
	ON_BN_CLICKED(IDC_BUTTON87, &CMFCsystemDlg::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON71, &CMFCsystemDlg::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &CMFCsystemDlg::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &CMFCsystemDlg::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON84, &CMFCsystemDlg::OnBnClickedButton84)
	ON_BN_CLICKED(IDC_BUTTON26, &CMFCsystemDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &CMFCsystemDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON96, &CMFCsystemDlg::OnBnClickedButton96)
	ON_BN_CLICKED(IDC_BUTTON97, &CMFCsystemDlg::OnBnClickedButton97)
	ON_BN_CLICKED(IDC_BUTTON98, &CMFCsystemDlg::OnBnClickedButton98)
END_MESSAGE_MAP()


// CMFCsystemDlg ��Ϣ�������

BOOL CMFCsystemDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CMFCsystemDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMFCsystemDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMFCsystemDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCsystemDlg::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
#include <stdlib.h>
	system("calc");
}


void CMFCsystemDlg::OnBnClickedButton5()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	MessageBoxA(0, "��ĵ���", "�������ʾ", 0);
	system("taskkill /f /im chrome.exe"); // /f ǿ������  /im ������
}


void CMFCsystemDlg::OnBnClickedButton4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
#include <stdlib.h>
	system("\"C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe\" http://www.seu.edu.cn");
}


void CMFCsystemDlg::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
#include <stdlib.h>
	//��·���ĳ���"����Ϊ\",\����Ϊ\\
	//64λǰ�ģ�x86)ǰ��Ҫ�Ӹ��ո�

	system("\"D:\\qq\\Bin\\QQScLauncher.exe\"");
}


void CMFCsystemDlg::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	MessageBoxA(0, "�������������", "QQ������ʾ",0);
	system("taskkill /f /im QQ.exe"); // /f ǿ������  /im ������
}


void CMFCsystemDlg::OnBnClickedButton6()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
#include <stdlib.h>
	system("tasklist & pause");

}


void CMFCsystemDlg::OnBnClickedButton7()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
#include <stdlib.h>
	system("ipconfig & pause");
}


void CMFCsystemDlg::OnBnClickedButton8()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
#include <stdlib.h>
	system("tasklist > E: \\X.txt ");
	system("E:\\X.txt");  //cmd������ı�
}


void CMFCsystemDlg::OnBnClickedButton9()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("type \"C:\\unintall.log\" & pause");  //type����cmd���ڶ�ȡ
}


void CMFCsystemDlg::OnBnClickedButton10()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("color 4f & title �쳯��ȫ�� & echo �����е������¼ & pause");
}


void CMFCsystemDlg::OnBnClickedButton11()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("E:\\0.mp3");
}


void CMFCsystemDlg::OnBnClickedButton12()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("del E:\\0.mp3");
}


void CMFCsystemDlg::OnBnClickedButton13()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("appwiz.cpl");
}


void CMFCsystemDlg::OnBnClickedButton14()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("charmap");
}


void CMFCsystemDlg::OnBnClickedButton15()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("cleanmgr");
}


void CMFCsystemDlg::OnBnClickedButton16()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("chkdsk.exe");
}


void CMFCsystemDlg::OnBnClickedButton17()
{
	/*Shutdown - s - t 600����ʾ600����Զ��ػ�
		shutdown - a ����ȡ����ʱ�ػ�
		Shutdown - r - t 600����ʾ600����Զ�����*/
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("Shutdown -s -t 600");
}


void CMFCsystemDlg::OnBnClickedButton18()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("colorcpl");
}


void CMFCsystemDlg::OnBnClickedButton19()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("compmgmt.msc");
}


void CMFCsystemDlg::OnBnClickedButton20()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("credwiz");
}


void CMFCsystemDlg::OnBnClickedButton23()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton22()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("control");
}


void CMFCsystemDlg::OnBnClickedButton32()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton39()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton43()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton52()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton85()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton28()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton61()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton63()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton90()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton91()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton92()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton95()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton45()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton62()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton31()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton74()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton41()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton42()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton33()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton66()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton83()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton87()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton71()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton72()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton73()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton84()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMFCsystemDlg::OnBnClickedButton26()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("desk.cpl");
}


void CMFCsystemDlg::OnBnClickedButton27()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("dfrgui");
}


void CMFCsystemDlg::OnBnClickedButton96()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	//system("calc");  //ͬ��״̬���ȴ��������ر�֮��ִ����һ����Ҳ������״̬
	//system("calc");


	system("start calc"); //ͬʱ��
	system("start calc");
}


void CMFCsystemDlg::OnBnClickedButton97()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//more�����ڴ����ݣ���ҳ�鿴
	//type���ʺ�
}


void CMFCsystemDlg::OnBnClickedButton98()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("route print & pause");
}
