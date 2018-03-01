
// MFCsystemDlg.h : 头文件
//

#pragma once


// CMFCsystemDlg 对话框
class CMFCsystemDlg : public CDialogEx
{
// 构造
public:
	CMFCsystemDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MFCSYSTEM_DIALOG };

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
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton43();
	afx_msg void OnBnClickedButton52();
	afx_msg void OnBnClickedButton85();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton63();
	afx_msg void OnBnClickedButton90();
	afx_msg void OnBnClickedButton91();
	afx_msg void OnBnClickedButton92();
	afx_msg void OnBnClickedButton95();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton62();
	afx_msg void OnBnClickedButton31();
	afx_msg void OnBnClickedButton74();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedButton83();
	afx_msg void OnBnClickedButton87();
	afx_msg void OnBnClickedButton71();
	afx_msg void OnBnClickedButton72();
	afx_msg void OnBnClickedButton73();
	afx_msg void OnBnClickedButton84();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton96();
	afx_msg void OnBnClickedButton97();
	afx_msg void OnBnClickedButton98();
};
