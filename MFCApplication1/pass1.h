#pragma once
#include "afxdialogex.h"
#include"ahmain.h"


// pass1 对话框

class pass1 : public CDialogEx
{
	DECLARE_DYNAMIC(pass1)

public:
	pass1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~pass1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
