// 数字图像处理View.h : interface of the CMyView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VIEW_H__401B5504_46DE_4BCB_A076_ADFB34832D62__INCLUDED_)
#define AFX_VIEW_H__401B5504_46DE_4BCB_A076_ADFB34832D62__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyView : public CScrollView
{
protected: // create from serialization only
	CMyView();
	DECLARE_DYNCREATE(CMyView)

// Attributes
public:
	CMyDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyView)
	afx_msg void OnGray();
	afx_msg void OnUpdateGray(CCmdUI* pCmdUI);
	afx_msg void OnHistogram();
	afx_msg void OnUpdateHistogram(CCmdUI* pCmdUI);
	afx_msg void OnEqualize();
	afx_msg void OnUpdateEqualize(CCmdUI* pCmdUI);
	afx_msg void OnFourier();
	afx_msg void OnUpdateFourier(CCmdUI* pCmdUI);
	afx_msg void OnIfourier();
	afx_msg void OnUpdateIfourier(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 数字图像处理View.cpp
inline CMyDoc* CMyView::GetDocument()
   { return (CMyDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIEW_H__401B5504_46DE_4BCB_A076_ADFB34832D62__INCLUDED_)
