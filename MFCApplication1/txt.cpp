// txt.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include"MFCApplication1Dlg.h"
#include "txt.h"


// txt 对话框

IMPLEMENT_DYNAMIC(txt, CDialogEx)

txt::txt(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

txt::~txt()
{
}

void txt::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(txt, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &txt::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT29, &txt::OnEnChangeEdit29)
	ON_BN_CLICKED(IDOK, &txt::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &txt::OnBnClickedCancel)
END_MESSAGE_MAP()


// txt 消息处理程序


void txt::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void txt::OnEnChangeEdit29()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void txt::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	this->ShowWindow(SW_HIDE);
	CMFCApplication1Dlg dlg;
	dlg.DoModal();
	

}


void txt::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
