#pragma once


// DlgBbbb 对话框

class DlgBbbb : public CDialogEx
{
	DECLARE_DYNAMIC(DlgBbbb)

public:
	DlgBbbb(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DlgBbbb();

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
