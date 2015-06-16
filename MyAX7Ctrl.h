#pragma once

// MyAX7Ctrl.h : CMyAX7Ctrl ActiveX 控件类的声明。


// CMyAX7Ctrl : 有关实现的信息，请参阅 MyAX7Ctrl.cpp。

class CMyAX7Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CMyAX7Ctrl)

// 构造函数
public:
	CMyAX7Ctrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CMyAX7Ctrl();

	DECLARE_OLECREATE_EX(CMyAX7Ctrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CMyAX7Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMyAX7Ctrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CMyAX7Ctrl)		// 类型名称和杂项状态

	// 子类控件支持
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
	};
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
private:
	HGLRC m_RC;
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

