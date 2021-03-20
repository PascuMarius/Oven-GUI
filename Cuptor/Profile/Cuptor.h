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

#ifndef Cuptor_H
#define Cuptor_H

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

#include "_CuptorApplication.h"
#include "_CuptorCuptorBase.h"
#include "_CuptorCuptorBaseClock.h"
#include "_CuptorCuptorEditClock.h"
#include "_CuptorCuptorMain.h"
#include "_CuptorCuptorOff.h"
#include "_CuptorGlobalsClass.h"

/* Font resource : 'Cuptor::FontXXL' */
EW_DECLARE_FONT_RES( CuptorFontXXL )

/* Forward declaration of the class WidgetSet::PushButtonConfig */
#ifndef _WidgetSetPushButtonConfig_
  EW_DECLARE_CLASS( WidgetSetPushButtonConfig )
#define _WidgetSetPushButtonConfig_
#endif

/* User defined auto object: 'Cuptor::PushButtonMinus' */
EW_DECLARE_AUTOOBJECT( CuptorPushButtonMinus, WidgetSetPushButtonConfig )

/* User defined auto object: 'Cuptor::PushButtonPlus' */
EW_DECLARE_AUTOOBJECT( CuptorPushButtonPlus, WidgetSetPushButtonConfig )

/* User defined auto object: 'Cuptor::PushButtonMeniu' */
EW_DECLARE_AUTOOBJECT( CuptorPushButtonMeniu, WidgetSetPushButtonConfig )

/* User defined auto object: 'Cuptor::PushButtonTimp' */
EW_DECLARE_AUTOOBJECT( CuptorPushButtonTimp, WidgetSetPushButtonConfig )

/* User defined auto object: 'Cuptor::PushButtonTemp' */
EW_DECLARE_AUTOOBJECT( CuptorPushButtonTemp, WidgetSetPushButtonConfig )

/* User defined auto object: 'Cuptor::PushButtonPlay' */
EW_DECLARE_AUTOOBJECT( CuptorPushButtonPlay, WidgetSetPushButtonConfig )

/* User defined auto object: 'Cuptor::PushButtonStop' */
EW_DECLARE_AUTOOBJECT( CuptorPushButtonStop, WidgetSetPushButtonConfig )

/* User defined auto object: 'Cuptor::PushButtonPower' */
EW_DECLARE_AUTOOBJECT( CuptorPushButtonPower, WidgetSetPushButtonConfig )

/* User defined auto object: 'Cuptor::Globals' */
EW_DECLARE_AUTOOBJECT( CuptorGlobals, CuptorGlobalsClass )

#ifdef __cplusplus
  }
#endif

#endif /* Cuptor_H */

/* Embedded Wizard */
