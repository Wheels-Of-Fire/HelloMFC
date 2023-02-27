
#include<afxwin.h>
#include"HelloMFC.h"


CMyApp myApp;

BOOL CMyApp::InitInstance()
{
	m_pMainWnd = new CMainWindow;
	m_pMainWnd->ShowWindow(m_nCmdShow);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}

	BEGIN_MESSAGE_MAP (CMainWindow, CFrameWnd )
		ON_WM_PAINT ()
		END_MESSAGE_MAP ()

	CMainWindow::CMainWindow()
	{
		Create(NULL, _T("The Hello App"));
	}

	void CMainWindow::OnPaint()
	{
		CPaintDC dc (this);


		CRect rect;
		GetClientRect(&rect);

		CFont font;
		font.CreatePointFont(720, _T("Arial"));
		dc.SelectObject(&font);

		dc.SetTextColor(RGB(255, 0, 0));
		dc.DrawText(_T("Hello MFC"), -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);

		POINT aPoint1[4] = { 120, 100, 120, 200, 250, 150, 500, 40 };
		POINT aPoint2[4] = { 120, 100, 50, 350, 250, 200, 500, 40 };
		dc.PolyBezier(aPoint1, 4);
		dc.PolyBezier(aPoint2, 4);
	}





