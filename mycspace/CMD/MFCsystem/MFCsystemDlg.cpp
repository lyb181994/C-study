
// MFCsystemDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCsystem.h"
#include "MFCsystemDlg.h"
#include "afxdialogex.h"
#include <stdlib.h>


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


// CMFCsystemDlg 对话框



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


// CMFCsystemDlg 消息处理程序

BOOL CMFCsystemDlg::OnInitDialog()
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCsystemDlg::OnPaint()
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
HCURSOR CMFCsystemDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCsystemDlg::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
#include <stdlib.h>
	system("calc");
}


void CMFCsystemDlg::OnBnClickedButton5()
{
	// TODO:  在此添加控件通知处理程序代码
	MessageBoxA(0, "你的电脑", "浏览器提示", 0);
	system("taskkill /f /im chrome.exe"); // /f 强制作用  /im 进程名
}


void CMFCsystemDlg::OnBnClickedButton4()
{
	// TODO:  在此添加控件通知处理程序代码
#include <stdlib.h>
	system("\"C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe\" http://www.seu.edu.cn");
}


void CMFCsystemDlg::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码
#include <stdlib.h>
	//带路径的程序"处理为\",\处理为\\
	//64位前的（x86)前面要加个空格

	system("\"D:\\qq\\Bin\\QQScLauncher.exe\"");
}


void CMFCsystemDlg::OnBnClickedButton3()
{
	// TODO:  在此添加控件通知处理程序代码
	MessageBoxA(0, "你正在聊天的是", "QQ友情提示",0);
	system("taskkill /f /im QQ.exe"); // /f 强制作用  /im 进程名
}


void CMFCsystemDlg::OnBnClickedButton6()
{
	// TODO:  在此添加控件通知处理程序代码
#include <stdlib.h>
	system("tasklist & pause");

}


void CMFCsystemDlg::OnBnClickedButton7()
{
	// TODO:  在此添加控件通知处理程序代码
#include <stdlib.h>
	system("ipconfig & pause");
}


void CMFCsystemDlg::OnBnClickedButton8()
{
	// TODO:  在此添加控件通知处理程序代码
#include <stdlib.h>
	system("tasklist > E: \\X.txt ");
	system("E:\\X.txt");  //cmd命令，打开文本
}


void CMFCsystemDlg::OnBnClickedButton9()
{
	// TODO:  在此添加控件通知处理程序代码
	system("type \"C:\\unintall.log\" & pause");  //type是在cmd窗口读取
}


void CMFCsystemDlg::OnBnClickedButton10()
{
	// TODO:  在此添加控件通知处理程序代码
	system("color 4f & title 天朝安全局 & echo 你所有的聊天记录 & pause");
}


void CMFCsystemDlg::OnBnClickedButton11()
{
	// TODO:  在此添加控件通知处理程序代码
	system("E:\\0.mp3");
}


void CMFCsystemDlg::OnBnClickedButton12()
{
	// TODO:  在此添加控件通知处理程序代码
	system("del E:\\0.mp3");
}


void CMFCsystemDlg::OnBnClickedButton13()
{
	// TODO:  在此添加控件通知处理程序代码
	system("appwiz.cpl");
}


void CMFCsystemDlg::OnBnClickedButton14()
{
	// TODO:  在此添加控件通知处理程序代码
	system("charmap");
}


void CMFCsystemDlg::OnBnClickedButton15()
{
	// TODO:  在此添加控件通知处理程序代码
	system("cleanmgr");
}


void CMFCsystemDlg::OnBnClickedButton16()
{
	// TODO:  在此添加控件通知处理程序代码
	system("chkdsk.exe");
}


void CMFCsystemDlg::OnBnClickedButton17()
{
	/*Shutdown - s - t 600：表示600秒后自动关机
		shutdown - a ：可取消定时关机
		Shutdown - r - t 600：表示600秒后自动重启*/
	// TODO:  在此添加控件通知处理程序代码
	system("Shutdown -s -t 600");
}


void CMFCsystemDlg::OnBnClickedButton18()
{
	// TODO:  在此添加控件通知处理程序代码
	system("colorcpl");
}


void CMFCsystemDlg::OnBnClickedButton19()
{
	// TODO:  在此添加控件通知处理程序代码
	system("compmgmt.msc");
}


void CMFCsystemDlg::OnBnClickedButton20()
{
	// TODO:  在此添加控件通知处理程序代码
	system("credwiz");
}


void CMFCsystemDlg::OnBnClickedButton23()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton22()
{
	// TODO:  在此添加控件通知处理程序代码
	system("control");
}


void CMFCsystemDlg::OnBnClickedButton32()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton39()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton43()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton52()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton85()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton28()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton61()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton63()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton90()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton91()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton92()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton95()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton45()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton62()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton31()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton74()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton41()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton42()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton33()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton66()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton83()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton87()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton71()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton72()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton73()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton84()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMFCsystemDlg::OnBnClickedButton26()
{
	// TODO:  在此添加控件通知处理程序代码
	system("desk.cpl");
}


void CMFCsystemDlg::OnBnClickedButton27()
{
	// TODO:  在此添加控件通知处理程序代码
	system("dfrgui");
}


void CMFCsystemDlg::OnBnClickedButton96()
{
	// TODO:  在此添加控件通知处理程序代码

	//system("calc");  //同步状态，等待这个程序关闭之后执行下一步，也叫阻塞状态
	//system("calc");


	system("start calc"); //同时打开
	system("start calc");
}


void CMFCsystemDlg::OnBnClickedButton97()
{
	// TODO:  在此添加控件通知处理程序代码
	//more适用于大数据，翻页查看
	//type不适合
}


void CMFCsystemDlg::OnBnClickedButton98()
{
	// TODO:  在此添加控件通知处理程序代码
	system("route print & pause");
}
