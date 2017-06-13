#pragma once


// DlgAaaa 对话框

class DlgAaaa : public CDialogEx
{
	DECLARE_DYNAMIC(DlgAaaa)

public:
	DlgAaaa(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DlgAaaa();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
