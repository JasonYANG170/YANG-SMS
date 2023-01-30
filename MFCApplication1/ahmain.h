#pragma once
#include "afxdialogex.h"
#include"pass1.h"


// ahmain 对话框

class ahmain : public CDialogEx
{
	DECLARE_DYNAMIC(ahmain)

public:
	ahmain(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ahmain();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeComboboxex1();
	afx_msg void OnBnClickedRadio1();
	BOOL anjian1;
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton1212();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton188();
	afx_msg void OnEnChangeEdit23();
	afx_msg void OnEnChangeEdit13();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton98();
};
