/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 10.00
* Profile  : Profile
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef _CuptorCuptorEditClock_H
#define _CuptorCuptorEditClock_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x000A0000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x000A0000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreVerticalList.h"
#include "_CuptorCuptorBaseClock.h"
#include "_EffectsColorEffect.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Cuptor::CuptorEditClock */
#ifndef _CuptorCuptorEditClock_
  EW_DECLARE_CLASS( CuptorCuptorEditClock )
#define _CuptorCuptorEditClock_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* Deklaration of class : 'Cuptor::CuptorEditClock' */
EW_DEFINE_FIELDS( CuptorCuptorEditClock, CuptorCuptorBaseClock )
  EW_OBJECT  ( Dots,            ViewsText )
  EW_OBJECT  ( MinutesList,     CoreVerticalList )
  EW_OBJECT  ( HoursList,       CoreVerticalList )
  EW_OBJECT  ( SlideHours,      CoreSlideTouchHandler )
  EW_OBJECT  ( SlideMinutes,    CoreSlideTouchHandler )
  EW_OBJECT  ( ColorEffect,     EffectsColorEffect )
EW_END_OF_FIELDS( CuptorCuptorEditClock )

/* Virtual Method Table (VMT) for the class : 'Cuptor::CuptorEditClock' */
EW_DEFINE_METHODS( CuptorCuptorEditClock, CuptorCuptorBaseClock )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( onClock,           void )( CuptorCuptorEditClock _this, XObject sender )
EW_END_OF_METHODS( CuptorCuptorEditClock )

/* 'C' function for method : 'Cuptor::CuptorEditClock.onClock()' */
void CuptorCuptorEditClock_onClock( CuptorCuptorEditClock _this, XObject sender );

/* This method is called by 'VerticalList2' every time the list loads or updates 
   an item. */
void CuptorCuptorEditClock_OnLoadMinutes( CuptorCuptorEditClock _this, XObject sender );

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void CuptorCuptorEditClock_OnLoadHour( CuptorCuptorEditClock _this, XObject sender );

/* 'C' function for method : 'Cuptor::CuptorEditClock.OnUpdateHour()' */
void CuptorCuptorEditClock_OnUpdateHour( CuptorCuptorEditClock _this, XObject sender );

/* 'C' function for method : 'Cuptor::CuptorEditClock.OnUpdateMin()' */
void CuptorCuptorEditClock_OnUpdateMin( CuptorCuptorEditClock _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _CuptorCuptorEditClock_H */

/* Embedded Wizard */
