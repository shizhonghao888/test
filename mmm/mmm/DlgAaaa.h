#pragma once


// DlgAaaa �Ի���

class DlgAaaa : public CDialogEx
{
	DECLARE_DYNAMIC(DlgAaaa)

public:
	DlgAaaa(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DlgAaaa();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
