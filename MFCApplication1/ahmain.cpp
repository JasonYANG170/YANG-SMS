// ahmain.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "ahmain.h"
#include "pass1.h"
#define BUFSIZE 4096
#pragma warning(disable:4996)

// ahmain 对话框
CString daili3 ;
CString loc3;
CString i3=" -i ";
CString f3=" -f ";
CString run3="&smsboom.exe update&smsboom.exe run -t 64 -p "; 
CString win;
IMPLEMENT_DYNAMIC(ahmain, CDialogEx)

ahmain::ahmain(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, anjian1(FALSE)
{

}

ahmain::~ahmain()
{
}

void StartConsole()
{
	AllocConsole();//控制台调试窗口开启
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w+t", stdout);    // 申请写
	freopen("CONIN$", "r+t", stdin);   //开启中文控制台输出支持

}









void CloseConsole()
{
	FreeConsole(); // 释放控制台资源
}

void ahmain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

}


BEGIN_MESSAGE_MAP(ahmain, CDialogEx)

	ON_BN_CLICKED(IDC_CHECK1, &ahmain::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_BUTTON2, &ahmain::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON188, &ahmain::OnBnClickedButton188)
	ON_BN_CLICKED(IDOK, &ahmain::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT13, &ahmain::OnEnChangeEdit13)
	ON_EN_CHANGE(IDC_EDIT23, &ahmain::OnEnChangeEdit23)
	ON_BN_CLICKED(IDC_BUTTON3, &ahmain::OnBnClickedButton3)
	ON_BN_CLICKED(IDCANCEL, &ahmain::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON98, &ahmain::OnBnClickedButton98)
END_MESSAGE_MAP()


// ahmain 消息处理程序




void ahmain::OnBnClickedRadio1()
{
	anjian1 = 1;
	// TODO: 在此添加控件通知处理程序代码
}


void ahmain::OnBnClickedCheck1()
{
	if (BST_CHECKED == IsDlgButtonChecked(IDC_CHECK1))

	{
		daili3 = " -e";
	
			// 勾选
		HMODULE module = GetModuleHandle(0);
		char pFileName[MAX_PATH] = { 0 };
		GetModuleFileName(module, pFileName, MAX_PATH);
		CString csFullName(pFileName);
		loc3 = csFullName;

		CString tonken1 = "";
		GetDlgItem(IDC_EDIT13)->GetWindowTextA(tonken1);
		CString tonken2 = "";
		GetDlgItem(IDC_EDIT23)->GetWindowTextA(tonken2);
		CString tonken3 = "";
		GetDlgItem(IDC_EDIT3)->GetWindowTextA(tonken3);
		win = loc3 + run3 + tonken1 + f3 + tonken2 + i3 + tonken3 +daili3;

	} else

	{
		HMODULE module = GetModuleHandle(0);
		char pFileName[MAX_PATH] = { 0 };
		GetModuleFileName(module, pFileName, MAX_PATH);
		CString csFullName(pFileName);
		loc3 = csFullName;

		CString tonken1 = "";
		GetDlgItem(IDC_EDIT13)->GetWindowTextA(tonken1);
		CString tonken2 = "";
		GetDlgItem(IDC_EDIT23)->GetWindowTextA(tonken2);
		CString tonken3 = "";
		GetDlgItem(IDC_EDIT3)->GetWindowTextA(tonken3);
		win = loc3 + run3 + tonken1 + f3 + tonken2 + i3 + tonken3;
	}
	// TODO: 在此添加控件通知处理程序代码
}


void ahmain::OnBnClickedOk()
{


	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}





void ahmain::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox("注意：1.如果您不需要代理程序请先勾选<使用代理>再取消勾选，否则程序会报错。  2.点击确定后您需要关闭程序才可攻击", NULL, MB_OK);
	StartConsole();
	MessageBox("请关闭弹出的程序主界面后攻击才会继续", NULL, MB_OK);
	system(win);
	
	CloseConsole();

}


void ahmain::OnBnClickedButton188()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox("如无法弹出请先发起一次攻击后再配置", NULL, MB_OK);
	system(loc3 + " http_proxy.txt");
	system(loc3 + " socks4_proxy.txt");
	system(loc3 + " socks5_proxy.txt");

}


void ahmain::OnEnChangeEdit23()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void ahmain::OnEnChangeEdit13()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void ahmain::OnBnClickedButton3()
{
	//隐藏本对话框


	//显示子对话框

	// TODO: 在此添加控件通知处理程序代码
}


void ahmain::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


void ahmain::OnBnClickedButton98()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox("按下<确定>后，如弹出的控制台有python及版本号则您的环境可以发起攻击，如弹出Python下载界面请先下载后再发起攻击。", NULL, MB_OK);
	system("python");
	
}
