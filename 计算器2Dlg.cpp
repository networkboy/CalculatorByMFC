// ¼ÆËãÆ÷2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
#include "¼ÆËãÆ÷2.h"
#include "¼ÆËãÆ÷2Dlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()


};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy2Dlg dialog

CMy2Dlg::CMy2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMy2Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMy2Dlg)
	m_1 = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMy2Dlg)
	DDX_Text(pDX, IDC_EDIT1, m_1);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMy2Dlg, CDialog)
	//{{AFX_MSG_MAP(CMy2Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON16, OnButton16)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11)
	ON_BN_CLICKED(IDC_BUTTON15, OnButton15)
	ON_BN_CLICKED(IDC_BUTTON12, OnButton12)
	ON_BN_CLICKED(IDC_BUTTON13, OnButton13)
	ON_BN_CLICKED(IDC_BUTTON14, OnButton14)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	ON_BN_CLICKED(IDC_BUTTON17, OnButton17)
	ON_BN_CLICKED(IDC_BUTTON18, OnButton18)
	ON_BN_CLICKED(IDC_BUTTON19, OnButton19)
	ON_BN_CLICKED(IDC_BUTTON20, OnButton20)
	ON_BN_CLICKED(IDC_BUTTON22, OnButton22)
	ON_BN_CLICKED(IDC_BUTTON21, OnButton21)
	ON_BN_CLICKED(IDC_BUTTON23, OnButton23)
	ON_BN_CLICKED(IDC_BUTTON24, OnButton24)
	ON_BN_CLICKED(IDC_BUTTON28, OnButton28)
	ON_BN_CLICKED(IDC_BUTTON27, OnButton27)
	ON_BN_CLICKED(IDC_BUTTON26, OnButton26)
	ON_BN_CLICKED(IDC_BUTTON25, OnButton25)
	ON_BN_CLICKED(IDC_BUTTON29, OnButton29)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy2Dlg message handlers

BOOL CMy2Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);
    GetDlgItem(IDC_BUTTON2)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON3)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON4)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON5)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON6)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON7)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON8)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON9)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON17)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON23)->EnableWindow(FALSE);
    GetDlgItem(IDC_BUTTON24)->EnableWindow(FALSE);
    GetDlgItem(IDC_BUTTON28)->EnableWindow(FALSE);
    GetDlgItem(IDC_BUTTON27)->EnableWindow(FALSE);
    GetDlgItem(IDC_BUTTON26)->EnableWindow(FALSE);
    GetDlgItem(IDC_BUTTON25)->EnableWindow(FALSE);
	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMy2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMy2Dlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMy2Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMy2Dlg::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}


char sign;
CString m_strnum1;
CString m_strnum2;
CString m_strnum3;
CString m_strnum4;
CString m_strnum5;
CString m_strnum6;
CString m_strnum7;
CString m_strnum8='10';
CString m_strnum9='10';
CString m_strnum10='10';
long double m_num1;
long double m_num2;
long double m_num3;
long double m_num4;
long double m_result;
char m_result1[100000000000000];
char m_result2[100000000000000];
int q=0;
int ii=0;
int w=0;
int ccc=0;
int p=0;
int i=0;
int ww=0;
int cc=0;
int www=0;
int wwww=0;
int zz=0;
double qq=0;
double qqq=0;
void CMy2Dlg::OnButton1() 
{   
	i++;
    qq++;
    qqq++;
	ww++;
	cc=0;
	if (w>0||zz>0)
	{   w=0;
	    zz=0;
		m_1='1';
		ii=1;
        UpdateData(false);

	}
	else if (ccc>0)
	{   ccc=0;
	m_1='1';
	UpdateData(false);
	
	}

	else
	{	m_1+='1';
	UpdateData(false);
	}
	
	
}

void CMy2Dlg::OnButton2() 
{   cc=0;
	i++;
    qq++;
    qqq++;
    ww++;;
    if (w>0||zz>0)
	{   w=0;
	    zz=0;
	   m_1='2';
	    ii=1;
	UpdateData(false);


	}
	else if (ccc>0)
	{   ccc=0;
	m_1='2';
	UpdateData(false);
	
	}

	
	else
	{	m_1+='2';
	UpdateData(false);
	}
	
}

void CMy2Dlg::OnButton3() 
{   cc=0;
	i++;
    qq++;
    qqq++;
    ww++;
	if (w>0||zz>0)
	{   w=0;
	    zz=0;
	    m_1='3';
        ii=1;
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='3';
	UpdateData(false);
	
	}

	
	
	else
	{	m_1+='3';
	UpdateData(false);
	}
	
}

void CMy2Dlg::OnButton4() 
{   cc=0;
    i++;
	qq++;
    qqq++;
    ww++;
	if (w>0||zz>0)
	{   w=0;
	    zz=0;
	    m_1='4';
        ii=1;
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='4';
	UpdateData(false);
	
	}

	
	
	else
	{	m_1+='4';
	UpdateData(false);
	}
	
}

void CMy2Dlg::OnButton5() 
{   cc=0;
	i++;
    qq++;
    qqq++;
    ww++;
	if (w>0||zz>0)
	{   w=0;
	    zz=0;
        ii=1;
	   m_1='5';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='5';
	UpdateData(false);
	
	}

	
	
	else
	{	m_1+='5';
	UpdateData(false);
	}
	
	
}

void CMy2Dlg::OnButton6() 
{   cc=0;
	i++;
    qq++;
    qqq++;
    ww++;
	if (w>0||zz>0)
	{   w=0;
	    zz=0;
        ii=1;
     	m_1='6';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='6';
	UpdateData(false);
	
	}

	
	else
	{	m_1+='6';
	UpdateData(false);
	}
	
}

void CMy2Dlg::OnButton7() 
{   cc=0;
	i++;
    qq++;
    qqq++;
    ww++;
	if (w>0||zz>0)
	{   w=0;
	    zz=0;
        ii=1;
	m_1='7';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='7';
	UpdateData(false);
	
	}

	
	else
	{	m_1+='7';
	UpdateData(false);
	}
	
}

void CMy2Dlg::OnButton8() 
{   cc=0;
	i++;
    qq++;
    qqq++;
    ww++;
	if (w>0||zz>0)
	{   w=0;
	    zz=0;
        ii=1;
	    m_1='8';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='8';
	UpdateData(false);
	
	}

	
	else
	{	m_1+='8';
	UpdateData(false);
	}
	
	
}

void CMy2Dlg::OnButton9() 
{   cc=0;
    i++;
    qq++;
    qqq++;
    ww++;
	if (w>0||zz>0)
	{   w=0;
	    zz=0;
     	m_1='9';
        ii=1;
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='9';
	UpdateData(false);
	
	}

	
	else
	{	m_1+='9';
	UpdateData(false);
	}
	
}

void CMy2Dlg::OnButton16() 
{   
	cc=0;
    //i++;
    qq++;
    qqq++;
	if (w>0||zz>0)
	{   w=0;
	    zz=0;
	    m_1='0';
       ii=1;
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='0';
	UpdateData(false);
	
	}

	else if(ww==0)	
	{	
		m_1+='0';
        m_1.Delete(m_1.GetLength()-1, 1); 
	UpdateData(false);

	}
	else
	{	
		m_1+='0';
		UpdateData(false);
		
	}
	
}

void CMy2Dlg::OnButton11() 
{                                                 
	// TODO: Add your control notification handler code here
    
    p=0;
    i=0;
	if(ii==1)
	{ 
	  ii=0;
	  w++;
    printfone();
	UpdateData(false);
	sign='+';
	m_strnum1=m_1;
	
	}
	else
	{   
	
		sign='+';
		m_strnum1=m_1;
		zz++;
		UpdateData(false);
	}
}

void CMy2Dlg::OnButton15() 
{
	// TODO: Add your control notification handler code here
    i=0;
	ccc=1;
	q=0;
    p=0;
	cc++;
	if (cc>=2)
	{
    m_strnum7=m_1;
	m_num1=atof(m_strnum7);
	m_num2=atof(m_strnum2);
    if(m_strnum3=='2')
    {
		
		
			WORD m_num1=0;
            WORD m_num2=0;
			int i=0;
			for( i=0 ; i<m_strnum7.GetLength() ; i++)
			{
				if(m_strnum7[i] == '1')
				{
					m_num1 += WORD(pow(2, (m_strnum7.GetLength() - 1 - i) ));
				}
			}
			for( i=0 ; i<m_strnum2.GetLength() ; i++)
			{
				if(m_strnum2[i]== '1')
				{
					m_num2 += WORD(pow(2, (m_strnum2.GetLength() - 1 - i) ));
				}
			}

	  if(sign=='+')
		  m_result=m_num1+m_num2;
	  if(sign=='-')
		  m_result=m_num1-m_num2;
	  if(sign=='*')
		  m_result=m_num1*m_num2;
	  if(sign=='/')
       m_result=m_num1/m_num2;
       m_result=atof(itoa(m_result,m_result1,2));
      m_1.Format("%g",m_result);
       UpdateData(false);

    }
	else if(m_strnum3=='8')
    {   
		WORD m_num1=0;
		WORD m_num2=0;
		int i=0;
		for( i=0 ; i<m_strnum7.GetLength() ; i++)
		{
			if(m_strnum7[i]!= '0')
			{
				m_num1+= (m_strnum1[i]-48)*WORD(pow(8, (m_strnum1.GetLength() - 1 - i) ));
			}
		}
		for( i=0 ; i<m_strnum2.GetLength() ; i++)
		{
			if(m_strnum2[i]!= '0')
			{
				m_num2+=(m_strnum2[i]-48)*WORD(pow(8, (m_strnum2.GetLength() - 1 - i) ));
			}
			}
		if(sign=='+')
			m_result=m_num1+m_num2;
		if(sign=='-')
			m_result=m_num1-m_num2;
		if(sign=='*')
			m_result=m_num1*m_num2;
		if(sign=='/')
			m_result=m_num1/m_num2;
		m_result=atof(itoa(m_result,m_result1,8));
		m_1.Format("%g",m_result);
		UpdateData(false);
		
    }
	else if(m_strnum3=='16')
    {   
		WORD m_num1=0;
		WORD m_num2=0;
		int i=0;
		for( i=0 ; i<m_strnum7.GetLength() ; i++)
		{  
  
			 if ((m_strnum7[i]>='a') && (m_strnum7[i]<='f'))     
			{
				m_num1*=16;
				m_num1+=m_strnum7[i]-'f'+15;
			}
			else if(m_strnum7[i]>='0'&&m_strnum7[i]<='9')
			{
				m_num1*=16;
				m_num1+=m_strnum7[i] - '0';
			}
 }
		for( i=0 ; i<m_strnum2.GetLength() ; i++)
		{ 
			
		if ((m_strnum2[i]>='a') && (m_strnum2[i]<='f'))     
			{
				m_num2*=16;
				m_num2+=m_strnum2[i]-'f'+15;
			}
			else if(m_strnum2[i]>='0'&&m_strnum2[i]<='9')
			{
				m_num2*=16;
				m_num2+=m_strnum1[i] - '0';
			}
 }
		if(sign=='+')
			m_result=m_num1+m_num2;
		if(sign=='-')
			m_result=m_num1-m_num2;
		if(sign=='*')
			m_result=m_num1*m_num2;
		if(sign=='/')
			m_result=m_num1/m_num2;
		itoa(m_result,m_result1,16);
		m_1.Format("%s",m_result1);
		UpdateData(false);
		
    }
	else if(m_strnum3=='10')
	{	if(sign=='+')
	m_result=m_num1+m_num2;
	if(sign=='-')
		m_result=m_num1-m_num2;
	if(sign=='*')
		m_result=m_num1*m_num2;
    if(sign=='/')
        m_result=m_num1/m_num2;
	m_1.Format("%g",m_result);
	if(sign=='\0')
	{     m_num2=atof(m_strnum2);
	m_1.Format("%g",m_num2);
	}
	UpdateData(false);
	}

	else
	{	if(sign=='+')
		m_result=m_num1+m_num2;
	if(sign=='-')
		m_result=m_num1-m_num2;
	if(sign=='*')
		m_result=m_num1*m_num2;
    if(sign=='/')
        m_result=m_num1/m_num2;
	m_1.Format("%g",m_result);
    if(sign=='\0')
	{     m_num2=atof(m_strnum2);
		m_1.Format("%g",m_num2);
	}
	UpdateData(false);
	}
	}
else
	printfone();

}




void CMy2Dlg::OnButton12() 
{   

    p=0;
    i=0;
	if(ii==1)
	{ ii=0; 
		w++;
		printfone();
		UpdateData(false);
		sign='-';
		m_strnum1=m_1;
		
	}
	else
	{   
		
		sign='-';
		m_strnum1=m_1;
		zz++;
		UpdateData(false);
	}
}

void CMy2Dlg::OnButton13() 
{   
	p=0;
    i=0;
	if(ii==1)
	{   ii=0; 
		w++;
		printfone();
		UpdateData(false);
		sign='*';
		m_strnum1=m_1;
		
	}
	else
	{   
		
		sign='*';
		m_strnum1=m_1;
		zz++;
		UpdateData(false);
	}
}

void CMy2Dlg::OnButton14() 
{       
	p=0;
    i=0;
	if(ii==1)
	{ 
		ii=0; 
		w++;
		q++;
		printfone();
		UpdateData(false);
		sign='/';
		m_strnum1=m_1;
		
	}
	else
	{   
		
		sign='/';
		m_strnum1=m_1;
		zz++;
		UpdateData(false);
	}
}

void CMy2Dlg::OnButton10() 
{
	// TODO: Add your control notification handler code here
	   p=0;
	   www=0;
       ii=0;
       i=0;
       m_1=' ';
       m_1.Delete(m_1.GetLength()-1, 1);
	UpdateData(false);
}

void CMy2Dlg::OnButton17() 
{
	// TODO: Add your control notification handler code here
	p++;
    //qq=1;
    m_strnum3=m_1;
	if(p>=2)
    {
        m_1+='.';
        m_1.Delete(m_1.GetLength()-1, 1);
	
	}
	else if (i==0)
	{   p++;
		m_1='0';
		m_1+='.';
		qqq=2;
		ww++;
        
	}
   else
   {
	m_1+='.';
	qqq++;
	qq=1;
   }
	UpdateData(false);	
}

void CMy2Dlg::OnButton18() 
{   
    qq--;
    qqq--;
	if(qq==0) 
    p=0;
	if(qqq==0) 
    i=0;
	m_1.Delete(m_1.GetLength()-1, 1); 
	UpdateData(false);	
}

void CMy2Dlg::OnButton19() 
{   m_strnum2=m_1;
	m_num2=atof(m_strnum2);
    m_result=sqrt(m_num2);
    m_1.Format("%g",m_result);
    UpdateData(false);
}

void CMy2Dlg::OnButton20() 
{   GetDlgItem(IDC_BUTTON2)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON3)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON4)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON5)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON6)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON7)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON8)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON9)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON17)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON23)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON24)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON28)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON27)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON26)->EnableWindow(FALSE);
    GetDlgItem(IDC_BUTTON25)->EnableWindow(FALSE);
	m_strnum3='2';
    m_strnum10='2';
	ccc++;
    if (www>=0)
	{   
		
	  if (m_strnum8=='10')
	  {  
		  m_strnum4=m_1;
	      m_num4=atof(m_strnum4);
		  m_result=atof(itoa(m_num4,m_result1,2));
          m_1.Format("%g",m_result);
          m_result=0;
	   
	  }
	  else {
		  m_strnum4=m_1;
	      m_num4=atof(m_strnum4);
          if(m_strnum9=='8')
		  printf8_10();
          if(m_strnum9=='16')
          printf16_10();
		  printfone1();
	  }
        www--;
	}
    else
    {  
	if (m_strnum8=='10')
	{   m_num4=atof(m_strnum4);
		m_result=atof(itoa(m_num4,m_result1,2));
        m_1.Format("%g",m_result);
        m_result=0;
	}
	else {
        m_strnum4=m_1;
	    m_num4=atof(m_strnum4);
		if(m_strnum9=='8')
		printf8_10();
		if(m_strnum9=='16')
        printf16_10();
		printfone1();
	  }
	}
    m_strnum6=m_1;
    if( m_strnum6=='0')
	{	m_1=' ';
	m_1.Delete(m_1.GetLength()-1, 1);
	m_strnum8='2';
	www=0;
	}
    m_strnum9='2';
    UpdateData(false);

}

void CMy2Dlg::OnButton22() 
{   GetDlgItem(IDC_BUTTON2)->EnableWindow(true);
GetDlgItem(IDC_BUTTON3)->EnableWindow(true);
GetDlgItem(IDC_BUTTON4)->EnableWindow(true);
GetDlgItem(IDC_BUTTON5)->EnableWindow(true);
GetDlgItem(IDC_BUTTON6)->EnableWindow(true);
GetDlgItem(IDC_BUTTON7)->EnableWindow(true);
GetDlgItem(IDC_BUTTON8)->EnableWindow(true);
GetDlgItem(IDC_BUTTON9)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON17)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON23)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON24)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON28)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON27)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON26)->EnableWindow(FALSE);
    GetDlgItem(IDC_BUTTON25)->EnableWindow(FALSE);
	m_strnum3='8';
    m_strnum10='8';
    ccc++;
	if (www>=0)
	{
		
		if (m_strnum8=='10')
		{   
			m_strnum4=m_1;
		    m_num4=atof(m_strnum4);
			m_result=atof(itoa(m_num4,m_result1,8));
			m_1.Format("%g",m_result);
            m_result=0;
			

		}
		else {
			m_strnum4=m_1;
	        m_num4=atof(m_strnum4);
			if(m_strnum9=='2')
				printf2_10();
			if(m_strnum9=='16')
               printf16_10();
			printfone1();
	  }
         www--;
	}
    else
    {
	   
		if (m_strnum8=='10')
		{    
			m_num4=atof(m_strnum4);
			m_result=atof(itoa(m_num4,m_result1,8));
			m_1.Format("%g",m_result);
            m_result=0;
		}
		else {
		
			m_strnum4=m_1;
		    m_num4=atof(m_strnum4);
			if(m_strnum9=='2')
				printf2_10();
			if(m_strnum9=='16')
				printf16_10();
		        printfone1();
	  }
	}
    m_strnum6=m_1;
    if( m_strnum6=='0')
	{	
		m_1=' ';
    m_1.Delete(m_1.GetLength()-1, 1);
    m_strnum8='8';
	www=0;
	}
    m_strnum9='8';
    UpdateData(false);
	
}

void CMy2Dlg::OnButton21() 
{   
	GetDlgItem(IDC_BUTTON2)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON3)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON4)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON5)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON6)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON7)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON8)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON9)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON17)->EnableWindow(FALSE);
    GetDlgItem(IDC_BUTTON23)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON24)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON28)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON27)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON26)->EnableWindow(true);
    GetDlgItem(IDC_BUTTON25)->EnableWindow(true);
	m_strnum3='16';
    m_strnum10='16';
    ccc++;
    if (www>=0)
	{   
		
		if (m_strnum8=='10')
		{  
			m_strnum4=m_1;
			m_num4=atof(m_strnum4);
			itoa(m_num4,m_result1,16);
		    m_1.Format("%s",m_result1);
			
		}
		else {
			m_strnum4=m_1;
			m_num4=atof(m_strnum4);
			if(m_strnum9=='8')
				printf8_10();
			if(m_strnum9=='2')
				printf2_10();
			printfone1();
		}
        www--;
	}
    else
    {  
		if (m_strnum8=='10')
		{   m_num4=atof(m_strnum4);
		    itoa(m_num4,m_result1,16);
			m_1.Format("%s",m_result1);
		}
		else {
			m_strnum4=m_1;
			m_num4=atof(m_strnum4);
			if(m_strnum9=='8')
				printf8_10();
			if(m_strnum9=='2')
				printf2_10();
			printfone1();
		}
	}
    m_strnum6=m_1;
    if( m_strnum6=='0')
	{	m_1=' ';
	m_1.Delete(m_1.GetLength()-1, 1);
	m_strnum8='16';
	www=0;
	}
    m_strnum9='16';
    UpdateData(false);
}

void CMy2Dlg::OnButton23() 
{   
	ww++;
	if (w>0)
	{   w=0;
	m_1='a';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='a';
	UpdateData(false);
	
	}

	
	else
	{	m_1+='a';
	UpdateData(false);
	}	
}

void CMy2Dlg::OnButton24() 
{   
	ww++;
	if (w>0)
	{   w=0;
	m_1='b';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='b';
	UpdateData(false);
	
	}

	else
	{	m_1+='b';
	UpdateData(false);
	}
	
}

void CMy2Dlg::OnButton28() 
{   
	ww++;
	if (w>0)
	{   w=0;
	m_1='c';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='c';
	UpdateData(false);
	
	}

	else
	{	m_1+='c';
	UpdateData(false);
	}	
}

void CMy2Dlg::OnButton27() 
{   
	ww++;
	if (w>0)
	{   w=0;
	m_1='d';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='d';
	UpdateData(false);
	
	}

	else
	{	m_1+='d';
	UpdateData(false);
	}	
}

void CMy2Dlg::OnButton26() 
{   
	ww++;
	if (w>0)
	{   w=0;
	m_1='f';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='f';
	UpdateData(false);
	
	}

	else
	{	m_1+='f';
	UpdateData(false);
	}
	
}

void CMy2Dlg::OnButton25() 
{   
	ww++;
	if (w>0)
	{   w=0;
	m_1='e';
	UpdateData(false);
	
	}
	else if (ccc>0)
	{   ccc=0;
	m_1='e';
	UpdateData(false);
	
	}

	else
	{	m_1+='e';
	UpdateData(false);
	}
	
}

void CMy2Dlg::OnButton29() 
{   
	GetDlgItem(IDC_BUTTON2)->EnableWindow(true);
GetDlgItem(IDC_BUTTON3)->EnableWindow(true);
GetDlgItem(IDC_BUTTON4)->EnableWindow(true);
GetDlgItem(IDC_BUTTON5)->EnableWindow(true);
GetDlgItem(IDC_BUTTON6)->EnableWindow(true);
GetDlgItem(IDC_BUTTON7)->EnableWindow(true);
GetDlgItem(IDC_BUTTON8)->EnableWindow(true);
GetDlgItem(IDC_BUTTON9)->EnableWindow(true);
GetDlgItem(IDC_BUTTON17)->EnableWindow(true);
GetDlgItem(IDC_BUTTON23)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON24)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON28)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON27)->EnableWindow(FALSE);
GetDlgItem(IDC_BUTTON26)->EnableWindow(FALSE);
    GetDlgItem(IDC_BUTTON25)->EnableWindow(FALSE);
	m_strnum3='10';
    ccc++;
	if (m_strnum10!='10')
	{     
		  m_strnum4=m_1;
	      m_num4=atof(m_strnum4);
		 if (m_strnum10=='2')
			 printf2_10();
		 else if (m_strnum10=='8')
			 printf8_10();
		 else if (m_strnum10=='16')
			 printf16_10();
             m_1.Format("%g",m_result);
             m_result=0;
	}
	m_strnum8='10';
    UpdateData(false);
     www=0;
	
}

void CMy2Dlg::printfone(void)
{
    m_strnum2=m_1;
	m_num1=atof(m_strnum1);
	m_num2=atof(m_strnum2);
    if(m_strnum3=='2')
    {
		
		
			WORD m_num1=0;
            WORD m_num2=0;
			int i=0;
			for( i=0 ; i<m_strnum1.GetLength() ; i++)
			{
				if(m_strnum1[i] == '1')
				{
					m_num1 += WORD(pow(2, (m_strnum1.GetLength() - 1 - i) ));
				}
			}
			for( i=0 ; i<m_strnum2.GetLength() ; i++)
			{
				if(m_strnum2[i]== '1')
				{
					m_num2 += WORD(pow(2, (m_strnum2.GetLength() - 1 - i) ));
				}
			}

	  if(sign=='+')
		  m_result=m_num1+m_num2;
	  if(sign=='-')
		  m_result=m_num1-m_num2;
	  if(sign=='*')
		  m_result=m_num1*m_num2;
	  if(sign=='/')
       m_result=m_num1/m_num2;
       m_result=atof(itoa(m_result,m_result1,2));
      m_1.Format("%g",m_result);
       UpdateData(false);

    }
	else if(m_strnum3=='8')
    {   
		WORD m_num1=0;
		WORD m_num2=0;
		int i=0;
		for( i=0 ; i<m_strnum1.GetLength() ; i++)
		{
			if(m_strnum1[i]!= '0')
			{
				m_num1+= (m_strnum1[i]-48)*WORD(pow(8, (m_strnum1.GetLength() - 1 - i) ));
			}
		}
		for( i=0 ; i<m_strnum2.GetLength() ; i++)
		{
			if(m_strnum2[i]!= '0')
			{
				m_num2+=(m_strnum2[i]-48)*WORD(pow(8, (m_strnum2.GetLength() - 1 - i) ));
			}
			}
		if(sign=='+')
			m_result=m_num1+m_num2;
		if(sign=='-')
			m_result=m_num1-m_num2;
		if(sign=='*')
			m_result=m_num1*m_num2;
		if(sign=='/')
			m_result=m_num1/m_num2;
		m_result=atof(itoa(m_result,m_result1,8));
		m_1.Format("%g",m_result);
		UpdateData(false);
		
    }
	else if(m_strnum3=='16')
    {   
		WORD m_num1=0;
		WORD m_num2=0;
		int i=0;
		for( i=0 ; i<m_strnum1.GetLength() ; i++)
		{  
  
			 if ((m_strnum1[i]>='a') && (m_strnum1[i]<='f'))     
			{
				m_num1*=16;
				m_num1+=m_strnum1[i]-'f'+15;
			}
			else if(m_strnum1[i]>='0'&&m_strnum1[i]<='9')
			{
				m_num1*=16;
				m_num1+=m_strnum1[i] - '0';
			}
 }
		for( i=0 ; i<m_strnum2.GetLength() ; i++)
		{ 
			
		if ((m_strnum2[i]>='a') && (m_strnum2[i]<='f'))     
			{
				m_num2*=16;
				m_num2+=m_strnum2[i]-'f'+15;
			}
			else if(m_strnum2[i]>='0'&&m_strnum2[i]<='9')
			{
				m_num2*=16;
				m_num2+=m_strnum1[i] - '0';
			}
 }
		if(sign=='+')
			m_result=m_num1+m_num2;
		if(sign=='-')
			m_result=m_num1-m_num2;
		if(sign=='*')
			m_result=m_num1*m_num2;
		if(sign=='/')
			m_result=m_num1/m_num2;
		itoa(m_result,m_result1,16);
		m_1.Format("%s",m_result1);
		UpdateData(false);
		
    }
	else if(m_strnum3=='10')
	{	if(sign=='+')
	m_result=m_num1+m_num2;
	if(sign=='-')
		m_result=m_num1-m_num2;
	if(sign=='*')
		m_result=m_num1*m_num2;
    if(sign=='/')
        m_result=m_num1/m_num2;
	m_1.Format("%g",m_result);
	if(sign=='\0')
	{     m_num2=atof(m_strnum2);
	m_1.Format("%g",m_num2);
	}
	UpdateData(false);
	}

	else
	{	if(sign=='+')
		m_result=m_num1+m_num2;
	if(sign=='-')
		m_result=m_num1-m_num2;
	if(sign=='*')
		m_result=m_num1*m_num2;
    if(sign=='/')
        m_result=m_num1/m_num2;
	m_1.Format("%g",m_result);
    if(sign=='\0')
	{     m_num2=atof(m_strnum2);
		m_1.Format("%g",m_num2);
	}
	UpdateData(false);
	}
	}
void CMy2Dlg::printf2_10(void)
{   m_result=0;
	int i=0;
	for( i=0 ; i<m_strnum4.GetLength() ; i++)
	{
		if(m_strnum4[i] == '1')
		{
			m_result+= WORD(pow(2, (m_strnum4.GetLength() - 1 - i) ));
		}
			}
}
void CMy2Dlg::printf8_10(void)
{  	m_result=0;
	int i=0;
	for( i=0 ; i<m_strnum4.GetLength() ; i++)
	{
		if(m_strnum4[i]!= '0')
		{
			m_result+= (m_strnum4[i]-48)*WORD(pow(8, (m_strnum4.GetLength() - 1 - i) ));
		}
		}

}
void CMy2Dlg::printfone1(void)
{
	  if (m_strnum10=='2')
	  {    
		m_result=atof(itoa(m_result,m_result1,2));
		m_1.Format("%g",m_result);
        m_result=0;
		}
		else if (m_strnum10=='8')
		{    
			m_result=atof(itoa(m_result,m_result1,8));
			m_1.Format("%g",m_result);
            m_result=0;
		}
		else if(m_strnum10=='16')
		{   
			itoa(m_result,m_result1,16);
			m_1.Format("%s",m_result1);
            m_result=0;
		}
		else;
       
		
		
	    
}

void CMy2Dlg::printf16_10(void)
{   m_result=0;
	int i=0;
	for( i=0 ; i<m_strnum4.GetLength() ; i++)
	{  
		
		if ((m_strnum4[i]>='a') && (m_strnum4[i]<='f'))     
		{
		    m_result*=16;
			m_result+=m_strnum4[i]-'f'+15;
		}
		else if(m_strnum4[i]>='0'&&m_strnum4[i]<='9')
		{
			m_result*=16;
			m_result+=m_strnum4[i] - '0';
		}
		

 }
	
}