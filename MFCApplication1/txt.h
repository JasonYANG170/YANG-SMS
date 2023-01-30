#pragma once
#include "afxdialogex.h"
#include"MFCApplication1Dlg.h"
#include"MFCApplication1.h"

// txt 对话框

class txt : public CDialogEx
{
	DECLARE_DYNAMIC(txt)

public:
	txt(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~txt();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit29();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
