// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CDC.hpp"
#include "CDialogBar.hpp"
#include "CPoint.hpp"
#include "CPreviewDC.hpp"
#include "CPrintInfo.hpp"
#include "CPrintPreviewState.hpp"
#include "CScrollView.hpp"
#include "CView.hpp"
#include "HICON__.hpp"
#include "IOleInPlaceUIWindow.hpp"


START_ATF_NAMESPACE
    struct  CPreviewView : CScrollView
    {
        struct PAGE_INFO
        {
            CRect rectScreen;
            CSize sizeUnscaled;
            CSize sizeScaleRatio;
            CSize sizeZoomOutRatio;
        };
        CView *m_pOrigView;
        CView *m_pPrintView;
        CPreviewDC *m_pPreviewDC;
        CDC m_dcPrint;
        IOleInPlaceUIWindow *m_pIPUIWindow;
        CPrintPreviewState *m_pPreviewState;
        CDialogBar *m_pToolBar;
        PAGE_INFO *m_pPageInfo;
        PAGE_INFO m_pageInfoArray[2];
        int m_bPageNumDisplayed;
        unsigned int m_nZoomOutPages;
        unsigned int m_nZoomState;
        unsigned int m_nMaxPages;
        unsigned int m_nCurrentPage;
        unsigned int m_nPages;
        int m_nSecondPageOffset;
        HICON__ *m_hMagnifyCursor;
        CSize m_sizePrinterPPI;
        CPoint m_ptCenterPoint;
        CPrintInfo *m_pPreviewInfo;
    };
END_ATF_NAMESPACE