// pass1.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "pass1.h"

#include "pch.h"
#include "framework.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"
#include"ahmain.h"



// pass1 对话框

IMPLEMENT_DYNAMIC(pass1, CDialogEx)

pass1::pass1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{

}

pass1::~pass1()
{
}

void pass1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(pass1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &pass1::OnBnClickedButton1)
END_MESSAGE_MAP()


// pass1 消息处理程序


void pass1::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString tonken = "";
	GetDlgItem(IDC_EDIT180)->GetWindowTextA(tonken);
	if (strlen(tonken) < 1) {
		MessageBox("错误");
		return;
	}
	if (strcmp(tonken, "69763") == 0)
	{
		MessageBox("成功");
		ahmain dlg;
			dlg.DoModal();
			CDialogEx::OnOK();
	}
	else {
		MessageBox("失败");

	}
}
