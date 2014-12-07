// ¼ÆËãÆ÷2Dlg.h : header file
//

#if !defined(AFX_2DLG_H__24921398_E560_4221_8F8A_99F33FE62C1C__INCLUDED_)
#define AFX_2DLG_H__24921398_E560_4221_8F8A_99F33FE62C1C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMy2Dlg dialog

class CMy2Dlg : public CDialog
{
// Construction
public:
	CMy2Dlg(CWnd* pParent = NULL);	// standard constructor

	void printfone(void);
    void printf2_10(void);
    void printf8_10(void);
    void printf16_10(void);
    void printfone1(void);
// Dialog Data
	//{{AFX_DATA(CMy2Dlg)
	enum { IDD = IDD_MY2_DIALOG };
	CString	m_1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMy2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChangeEdit1();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnButton16();
	afx_msg void OnButton11();
	afx_msg void OnButton15();
	afx_msg void OnButton12();
	afx_msg void OnButton13();
	afx_msg void OnButton14();
	afx_msg void OnButton10();
	afx_msg void OnButton17();
	afx_msg void OnButton18();
	afx_msg void OnButton19();
	afx_msg void OnButton20();
	afx_msg void OnButton22();
	afx_msg void OnButton21();
	afx_msg void OnButton23();
	afx_msg void OnButton24();
	afx_msg void OnButton28();
	afx_msg void OnButton27();
	afx_msg void OnButton26();
	afx_msg void OnButton25();
	afx_msg void OnButton29();
	afx_msg void OnOnButton20();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_2DLG_H__24921398_E560_4221_8F8A_99F33FE62C1C__INCLUDED_)
