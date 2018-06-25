// Excel_automationDlg.h : ��� ����
//
#pragma once
#include "XLEzAutomation.h"

// CExcel_automationDlg ��ȭ ����
class CExcel_automationDlg : public CDialog
{
// �����Դϴ�.
public:
	CExcel_automationDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

	

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_EXCEL_AUTOMATION_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


	


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedFileLoad();

	CXLEzAutomation *m_pXL;

};