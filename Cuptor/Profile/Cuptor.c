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

#include "ewlocale.h"
#include "_CoreGroup.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_CuptorApplication.h"
#include "_CuptorCuptorBase.h"
#include "_CuptorCuptorBaseClock.h"
#include "_CuptorCuptorEditClock.h"
#include "_CuptorCuptorMain.h"
#include "_CuptorCuptorOff.h"
#include "_CuptorGlobalsClass.h"
#include "_EffectsColorEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "Cuptor.h"
#include "Effects.h"
#include "Poze.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000020, /* ratio 112.50 % */
  0xB8001500, 0x80086452, 0x00E00030, 0x0D2003A0, 0xDC003780, 0x60489800, 0x131D1160,
  0x080C4E33, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 272 }};
static const XColor _Const0001 = { 0x32, 0x32, 0x32, 0xFF };
static const XRect _Const0002 = {{ 36, 43 }, { 86, 93 }};
static const XStringRes _Const0003 = { _StringsDefault0, 0x0002 };
static const XRect _Const0004 = {{ 61, 111 }, { 111, 161 }};
static const XRect _Const0005 = {{ 111, 194 }, { 161, 244 }};
static const XRect _Const0006 = {{ 226, 194 }, { 276, 244 }};
static const XRect _Const0007 = {{ 341, 194 }, { 391, 244 }};
static const XRect _Const0008 = {{ 405, 111 }, { 455, 161 }};
static const XRect _Const0009 = {{ 405, 43 }, { 455, 93 }};
static const XRect _Const000A = {{ 11, 111 }, { 61, 161 }};
static const XRect _Const000B = {{ 111, 18 }, { 391, 178 }};
static const XColor _Const000C = { 0x55, 0x55, 0x55, 0xFF };
static const XRect _Const000D = {{ 261, 18 }, { 391, 178 }};
static const XRect _Const000E = {{ 111, 18 }, { 241, 178 }};
static const XRect _Const000F = {{ 241, 18 }, { 261, 178 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x000C };
static const XPoint _Const0011 = { 0, 160 };
static const XColor _Const0012 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0013 = { 165, 98 };
static const XPoint _Const0014 = { 330, 98 };
static const XPoint _Const0015 = { 111, 18 };
static const XPoint _Const0016 = { 391, 18 };
static const XPoint _Const0017 = { 391, 178 };
static const XPoint _Const0018 = { 111, 178 };

/* Initializer for the class 'Cuptor::Application' */
void CuptorApplication__Init( CuptorApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( CuptorApplication );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( CuptorApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  _this->GlobalVariables = EwGetAutoObject( &CuptorGlobals, CuptorGlobalsClass );

  /* Call the user defined constructor */
  CuptorApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Cuptor::Application' */
void CuptorApplication__ReInit( CuptorApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Cuptor::Application' */
void CuptorApplication__Done( CuptorApplication _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreRoot );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void CuptorApplication_Init( CuptorApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( CuptorCuptorOff, 
  0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Cuptor::Application' */
EW_DEFINE_CLASS_VARIANTS( CuptorApplication )
EW_END_OF_CLASS_VARIANTS( CuptorApplication )

/* Virtual Method Table (VMT) for the class : 'Cuptor::Application' */
EW_DEFINE_CLASS( CuptorApplication, CoreRoot, GlobalVariables, _None, _None, _None, 
                 _None, _None, "Cuptor::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( CuptorApplication )

/* User defined auto object: 'Cuptor::PushButtonMinus' */
EW_DEFINE_AUTOOBJECT( CuptorPushButtonMinus, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'Cuptor::PushButtonMinus' */
void CuptorPushButtonMinus__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &Pozeminus, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &Pozeminus, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &Pozeminus, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &Pozeminus, 
  ResourcesBitmap ));
}

/* Table with links to derived variants of the auto object : 'Cuptor::PushButtonMinus' */
EW_DEFINE_AUTOOBJECT_VARIANTS( CuptorPushButtonMinus )
EW_END_OF_AUTOOBJECT_VARIANTS( CuptorPushButtonMinus )

/* User defined auto object: 'Cuptor::PushButtonPlus' */
EW_DEFINE_AUTOOBJECT( CuptorPushButtonPlus, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'Cuptor::PushButtonPlus' */
void CuptorPushButtonPlus__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &Pozeplus, ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &Pozeplus, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &Pozeplus, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &Pozeplus, 
  ResourcesBitmap ));
}

/* Table with links to derived variants of the auto object : 'Cuptor::PushButtonPlus' */
EW_DEFINE_AUTOOBJECT_VARIANTS( CuptorPushButtonPlus )
EW_END_OF_AUTOOBJECT_VARIANTS( CuptorPushButtonPlus )

/* User defined auto object: 'Cuptor::PushButtonMeniu' */
EW_DEFINE_AUTOOBJECT( CuptorPushButtonMeniu, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'Cuptor::PushButtonMeniu' */
void CuptorPushButtonMeniu__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &Pozemeniu, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &Pozemeniu, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &Pozemeniu, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &Pozemeniu, 
  ResourcesBitmap ));
}

/* Table with links to derived variants of the auto object : 'Cuptor::PushButtonMeniu' */
EW_DEFINE_AUTOOBJECT_VARIANTS( CuptorPushButtonMeniu )
EW_END_OF_AUTOOBJECT_VARIANTS( CuptorPushButtonMeniu )

/* User defined auto object: 'Cuptor::PushButtonTimp' */
EW_DEFINE_AUTOOBJECT( CuptorPushButtonTimp, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'Cuptor::PushButtonTimp' */
void CuptorPushButtonTimp__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &Pozetimp, ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &Pozetimp, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &Pozetimp, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &Pozetimp, 
  ResourcesBitmap ));
}

/* Table with links to derived variants of the auto object : 'Cuptor::PushButtonTimp' */
EW_DEFINE_AUTOOBJECT_VARIANTS( CuptorPushButtonTimp )
EW_END_OF_AUTOOBJECT_VARIANTS( CuptorPushButtonTimp )

/* User defined auto object: 'Cuptor::PushButtonTemp' */
EW_DEFINE_AUTOOBJECT( CuptorPushButtonTemp, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'Cuptor::PushButtonTemp' */
void CuptorPushButtonTemp__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &Pozetemp, ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &Pozetemp, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &Pozetemp, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &Pozetemp, 
  ResourcesBitmap ));
}

/* Table with links to derived variants of the auto object : 'Cuptor::PushButtonTemp' */
EW_DEFINE_AUTOOBJECT_VARIANTS( CuptorPushButtonTemp )
EW_END_OF_AUTOOBJECT_VARIANTS( CuptorPushButtonTemp )

/* User defined auto object: 'Cuptor::PushButtonPlay' */
EW_DEFINE_AUTOOBJECT( CuptorPushButtonPlay, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'Cuptor::PushButtonPlay' */
void CuptorPushButtonPlay__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &Pozeplay, ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &Pozeplay, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &Pozeplay, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &Pozeplay, 
  ResourcesBitmap ));
}

/* Table with links to derived variants of the auto object : 'Cuptor::PushButtonPlay' */
EW_DEFINE_AUTOOBJECT_VARIANTS( CuptorPushButtonPlay )
EW_END_OF_AUTOOBJECT_VARIANTS( CuptorPushButtonPlay )

/* User defined auto object: 'Cuptor::PushButtonStop' */
EW_DEFINE_AUTOOBJECT( CuptorPushButtonStop, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'Cuptor::PushButtonStop' */
void CuptorPushButtonStop__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &Pozestop, ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &Pozestop, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &Pozestop, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &Pozestop, 
  ResourcesBitmap ));
}

/* Table with links to derived variants of the auto object : 'Cuptor::PushButtonStop' */
EW_DEFINE_AUTOOBJECT_VARIANTS( CuptorPushButtonStop )
EW_END_OF_AUTOOBJECT_VARIANTS( CuptorPushButtonStop )

/* User defined auto object: 'Cuptor::PushButtonPower' */
EW_DEFINE_AUTOOBJECT( CuptorPushButtonPower, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'Cuptor::PushButtonPower' */
void CuptorPushButtonPower__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &Pozepower, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &Pozepower, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &Pozepower, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &Pozepower, 
  ResourcesBitmap ));
}

/* Table with links to derived variants of the auto object : 'Cuptor::PushButtonPower' */
EW_DEFINE_AUTOOBJECT_VARIANTS( CuptorPushButtonPower )
EW_END_OF_AUTOOBJECT_VARIANTS( CuptorPushButtonPower )

/* Include a file containing the font resource : 'Cuptor::FontXXL' */
#include "_CuptorFontXXL.h"

/* Table with links to derived variants of the font resource : 'Cuptor::FontXXL' */
EW_RES_WITHOUT_VARIANTS( CuptorFontXXL )

/* Initializer for the class 'Cuptor::GlobalsClass' */
void CuptorGlobalsClass__Init( CuptorGlobalsClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( CuptorGlobalsClass );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( CuptorGlobalsClass );
}

/* Re-Initializer for the class 'Cuptor::GlobalsClass' */
void CuptorGlobalsClass__ReInit( CuptorGlobalsClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Cuptor::GlobalsClass' */
void CuptorGlobalsClass__Done( CuptorGlobalsClass _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Variants derived from the class : 'Cuptor::GlobalsClass' */
EW_DEFINE_CLASS_VARIANTS( CuptorGlobalsClass )
EW_END_OF_CLASS_VARIANTS( CuptorGlobalsClass )

/* Virtual Method Table (VMT) for the class : 'Cuptor::GlobalsClass' */
EW_DEFINE_CLASS( CuptorGlobalsClass, XObject, _None, _None, _None, _None, _None, 
                 _None, "Cuptor::GlobalsClass" )
EW_END_OF_CLASS( CuptorGlobalsClass )

/* User defined auto object: 'Cuptor::Globals' */
EW_DEFINE_AUTOOBJECT( CuptorGlobals, CuptorGlobalsClass )

/* Initializer for the auto object 'Cuptor::Globals' */
void CuptorGlobals__Init( CuptorGlobalsClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Cuptor::Globals' */
EW_DEFINE_AUTOOBJECT_VARIANTS( CuptorGlobals )
EW_END_OF_AUTOOBJECT_VARIANTS( CuptorGlobals )

/* Initializer for the class 'Cuptor::CuptorBase' */
void CuptorCuptorBase__Init( CuptorCuptorBase _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( CuptorCuptorBase );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->Power, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->Stop, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->Temp, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->Timp, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->Meniu, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->Minus, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->Plus, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->Play, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Display, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( CuptorCuptorBase );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Power, _Const0002 );
  WidgetSetPushButton_OnSetLabel( &_this->Power, EwLoadString( &_Const0003 ));
  CoreRectView__OnSetBounds( &_this->Stop, _Const0004 );
  WidgetSetPushButton_OnSetLabel( &_this->Stop, EwLoadString( &_Const0003 ));
  CoreRectView__OnSetBounds( &_this->Temp, _Const0005 );
  WidgetSetPushButton_OnSetLabel( &_this->Temp, EwLoadString( &_Const0003 ));
  CoreRectView__OnSetBounds( &_this->Timp, _Const0006 );
  WidgetSetPushButton_OnSetLabel( &_this->Timp, EwLoadString( &_Const0003 ));
  CoreRectView__OnSetBounds( &_this->Meniu, _Const0007 );
  WidgetSetPushButton_OnSetLabel( &_this->Meniu, EwLoadString( &_Const0003 ));
  CoreRectView__OnSetBounds( &_this->Minus, _Const0008 );
  WidgetSetPushButton_OnSetLabel( &_this->Minus, EwLoadString( &_Const0003 ));
  CoreRectView__OnSetBounds( &_this->Plus, _Const0009 );
  WidgetSetPushButton_OnSetLabel( &_this->Plus, EwLoadString( &_Const0003 ));
  CoreRectView__OnSetBounds( &_this->Play, _Const000A );
  WidgetSetPushButton_OnSetLabel( &_this->Play, EwLoadString( &_Const0003 ));
  CoreRectView__OnSetBounds( &_this->Display, _Const000B );
  ViewsRectangle_OnSetColor( &_this->Display, _Const000C );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Power ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Stop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Temp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Timp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Meniu ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Minus ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Plus ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Play ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Display ), 0 );
  _this->Power.OnPress = EwNewSlot( _this, CuptorCuptorBase_onPower );
  WidgetSetPushButton_OnSetAppearance( &_this->Power, EwGetAutoObject( &CuptorPushButtonPower, 
  WidgetSetPushButtonConfig ));
  WidgetSetPushButton_OnSetAppearance( &_this->Stop, EwGetAutoObject( &CuptorPushButtonStop, 
  WidgetSetPushButtonConfig ));
  _this->Temp.OnPress = EwNewSlot( _this, CuptorCuptorBase_onOpenTemperature );
  WidgetSetPushButton_OnSetAppearance( &_this->Temp, EwGetAutoObject( &CuptorPushButtonTemp, 
  WidgetSetPushButtonConfig ));
  _this->Timp.OnPress = EwNewSlot( _this, CuptorCuptorBase_onOpenTime );
  WidgetSetPushButton_OnSetAppearance( &_this->Timp, EwGetAutoObject( &CuptorPushButtonTimp, 
  WidgetSetPushButtonConfig ));
  _this->Meniu.OnPress = EwNewSlot( _this, CuptorCuptorBase_onOpenMeniu );
  WidgetSetPushButton_OnSetAppearance( &_this->Meniu, EwGetAutoObject( &CuptorPushButtonMeniu, 
  WidgetSetPushButtonConfig ));
  WidgetSetPushButton_OnSetAppearance( &_this->Minus, EwGetAutoObject( &CuptorPushButtonMinus, 
  WidgetSetPushButtonConfig ));
  WidgetSetPushButton_OnSetAppearance( &_this->Plus, EwGetAutoObject( &CuptorPushButtonPlus, 
  WidgetSetPushButtonConfig ));
  WidgetSetPushButton_OnSetAppearance( &_this->Play, EwGetAutoObject( &CuptorPushButtonPlay, 
  WidgetSetPushButtonConfig ));
}

/* Re-Initializer for the class 'Cuptor::CuptorBase' */
void CuptorCuptorBase__ReInit( CuptorCuptorBase _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  WidgetSetPushButton__ReInit( &_this->Power );
  WidgetSetPushButton__ReInit( &_this->Stop );
  WidgetSetPushButton__ReInit( &_this->Temp );
  WidgetSetPushButton__ReInit( &_this->Timp );
  WidgetSetPushButton__ReInit( &_this->Meniu );
  WidgetSetPushButton__ReInit( &_this->Minus );
  WidgetSetPushButton__ReInit( &_this->Plus );
  WidgetSetPushButton__ReInit( &_this->Play );
  ViewsRectangle__ReInit( &_this->Display );
}

/* Finalizer method for the class 'Cuptor::CuptorBase' */
void CuptorCuptorBase__Done( CuptorCuptorBase _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  WidgetSetPushButton__Done( &_this->Power );
  WidgetSetPushButton__Done( &_this->Stop );
  WidgetSetPushButton__Done( &_this->Temp );
  WidgetSetPushButton__Done( &_this->Timp );
  WidgetSetPushButton__Done( &_this->Meniu );
  WidgetSetPushButton__Done( &_this->Minus );
  WidgetSetPushButton__Done( &_this->Plus );
  WidgetSetPushButton__Done( &_this->Play );
  ViewsRectangle__Done( &_this->Display );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Cuptor::CuptorBase.onOpenTemperature()' */
void CuptorCuptorBase_onOpenTemperature( CuptorCuptorBase _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Cuptor::CuptorBase.onOpenTime()' */
void CuptorCuptorBase_onOpenTime( CuptorCuptorBase _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Cuptor::CuptorBase.onPower()' */
void CuptorCuptorBase_onPower( CuptorCuptorBase _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &CuptorGlobals, CuptorGlobalsClass )->IsOn )
  {
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( CuptorCuptorOff, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }
  else
  {
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( CuptorCuptorMain, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }

  EwGetAutoObject( &CuptorGlobals, CuptorGlobalsClass )->IsOn = (XBool)!EwGetAutoObject( 
  &CuptorGlobals, CuptorGlobalsClass )->IsOn;
}

/* 'C' function for method : 'Cuptor::CuptorBase.onOpenMeniu()' */
void CuptorCuptorBase_onOpenMeniu( CuptorCuptorBase _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Cuptor::CuptorBase.onClock()' */
void CuptorCuptorBase_onClock( CuptorCuptorBase _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* Wrapper function for the virtual method : 'Cuptor::CuptorBase.onClock()' */
void CuptorCuptorBase__onClock( void* _this, XObject sender )
{
  ((CuptorCuptorBase)_this)->_VMT->onClock((CuptorCuptorBase)_this, sender );
}

/* Variants derived from the class : 'Cuptor::CuptorBase' */
EW_DEFINE_CLASS_VARIANTS( CuptorCuptorBase )
EW_END_OF_CLASS_VARIANTS( CuptorCuptorBase )

/* Virtual Method Table (VMT) for the class : 'Cuptor::CuptorBase' */
EW_DEFINE_CLASS( CuptorCuptorBase, CoreGroup, Background, Background, Background, 
                 Background, _None, _None, "Cuptor::CuptorBase" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
  CuptorCuptorBase_onClock,
EW_END_OF_CLASS( CuptorCuptorBase )

/* Initializer for the class 'Cuptor::CuptorMain' */
void CuptorCuptorMain__Init( CuptorCuptorMain _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CuptorCuptorBaseClock__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( CuptorCuptorMain );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Minutes, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Hours, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Dots, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( CuptorCuptorMain );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Minutes, _Const000D );
  ViewsText_OnSetAlignment( &_this->Minutes, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Minutes, EwNewStringInt( EwGetAutoObject( &CuptorGlobals, 
  CuptorGlobalsClass )->ClockMin, 0, 10 ));
  CoreRectView__OnSetBounds( &_this->Hours, _Const000E );
  ViewsText_OnSetAlignment( &_this->Hours, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Hours, EwNewStringInt( EwGetAutoObject( &CuptorGlobals, 
  CuptorGlobalsClass )->ClockHour, 0, 10 ));
  CoreRectView__OnSetBounds( &_this->Dots, _Const000F );
  ViewsText_OnSetString( &_this->Dots, EwLoadString( &_Const0010 ));
  CoreGroup__Add( _this, ((CoreView)&_this->Minutes ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Hours ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Dots ), 0 );
  ViewsText_OnSetFont( &_this->Minutes, EwLoadResource( &CuptorFontXXL, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Hours, EwLoadResource( &CuptorFontXXL, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Dots, EwLoadResource( &CuptorFontXXL, ResourcesFont ));
}

/* Re-Initializer for the class 'Cuptor::CuptorMain' */
void CuptorCuptorMain__ReInit( CuptorCuptorMain _this )
{
  /* At first re-initialize the super class ... */
  CuptorCuptorBaseClock__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Minutes );
  ViewsText__ReInit( &_this->Hours );
  ViewsText__ReInit( &_this->Dots );
}

/* Finalizer method for the class 'Cuptor::CuptorMain' */
void CuptorCuptorMain__Done( CuptorCuptorMain _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CuptorCuptorBaseClock );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Minutes );
  ViewsText__Done( &_this->Hours );
  ViewsText__Done( &_this->Dots );

  /* Don't forget to deinitialize the super class ... */
  CuptorCuptorBaseClock__Done( &_this->_Super );
}

/* 'C' function for method : 'Cuptor::CuptorMain.onClock()' */
void CuptorCuptorMain_onClock( CuptorCuptorMain _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super5.Owner, ((CoreGroup)EwNewObject( CuptorCuptorEditClock, 
  0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Cuptor::CuptorMain' */
EW_DEFINE_CLASS_VARIANTS( CuptorCuptorMain )
EW_END_OF_CLASS_VARIANTS( CuptorCuptorMain )

/* Virtual Method Table (VMT) for the class : 'Cuptor::CuptorMain' */
EW_DEFINE_CLASS( CuptorCuptorMain, CuptorCuptorBaseClock, Minutes, Minutes, Minutes, 
                 Minutes, _None, _None, "Cuptor::CuptorMain" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
  CuptorCuptorMain_onClock,
EW_END_OF_CLASS( CuptorCuptorMain )

/* Initializer for the class 'Cuptor::CuptorOff' */
void CuptorCuptorOff__Init( CuptorCuptorOff _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CuptorCuptorBase__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( CuptorCuptorOff );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( CuptorCuptorOff );

  /* ... and initialize objects, variables, properties, etc. */
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.Stop, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.Temp, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.Timp, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.Meniu, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.Minus, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.Plus, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Super1.Play, 0 );
}

/* Re-Initializer for the class 'Cuptor::CuptorOff' */
void CuptorCuptorOff__ReInit( CuptorCuptorOff _this )
{
  /* At first re-initialize the super class ... */
  CuptorCuptorBase__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Cuptor::CuptorOff' */
void CuptorCuptorOff__Done( CuptorCuptorOff _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CuptorCuptorBase );

  /* Don't forget to deinitialize the super class ... */
  CuptorCuptorBase__Done( &_this->_Super );
}

/* Variants derived from the class : 'Cuptor::CuptorOff' */
EW_DEFINE_CLASS_VARIANTS( CuptorCuptorOff )
EW_END_OF_CLASS_VARIANTS( CuptorCuptorOff )

/* Virtual Method Table (VMT) for the class : 'Cuptor::CuptorOff' */
EW_DEFINE_CLASS( CuptorCuptorOff, CuptorCuptorBase, _None, _None, _None, _None, 
                 _None, _None, "Cuptor::CuptorOff" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
  CuptorCuptorBase_onClock,
EW_END_OF_CLASS( CuptorCuptorOff )

/* Initializer for the class 'Cuptor::CuptorEditClock' */
void CuptorCuptorEditClock__Init( CuptorCuptorEditClock _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CuptorCuptorBaseClock__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( CuptorCuptorEditClock );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Dots, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->MinutesList, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->HoursList, &_this->_XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideHours, &_this->_XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideMinutes, &_this->_XObject, 0 );
  EffectsColorEffect__Init( &_this->ColorEffect, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( CuptorCuptorEditClock );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Dots, _Const000F );
  ViewsText_OnSetString( &_this->Dots, EwLoadString( &_Const0010 ));
  CoreRectView__OnSetBounds( &_this->MinutesList, _Const000D );
  CoreGroup_OnSetAlphaBlended((CoreGroup)&_this->MinutesList, 0 );
  CoreVerticalList_OnSetEndless( &_this->MinutesList, 1 );
  CoreVerticalList_OnSetItemHeight( &_this->MinutesList, 160 );
  CoreVerticalList_OnSetNoOfItems( &_this->MinutesList, 60 );
  CoreRectView__OnSetBounds( &_this->HoursList, _Const000E );
  CoreGroup_OnSetAlphaBlended((CoreGroup)&_this->HoursList, 0 );
  CoreVerticalList_OnSetEndless( &_this->HoursList, 1 );
  CoreVerticalList_OnSetItemHeight( &_this->HoursList, 160 );
  CoreVerticalList_OnSetNoOfItems( &_this->HoursList, 24 );
  CoreRectView__OnSetBounds( &_this->SlideHours, _Const000E );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideHours, _Const0011 );
  _this->SlideHours.SlideHorz = 0;
  CoreRectView__OnSetBounds( &_this->SlideMinutes, _Const000D );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideMinutes, _Const0011 );
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->ColorEffect, 0 );
  _this->ColorEffect.Super1.Symmetric = 1;
  EffectsEffect_OnSetOscillations((EffectsEffect)&_this->ColorEffect, 3 );
  EffectsEffect_OnSetTimingCustom1((EffectsEffect)&_this->ColorEffect, 0.000000f );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->ColorEffect, EffectsTimingBack_InOut );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->ColorEffect, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->Dots ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MinutesList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HoursList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideHours ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideMinutes ), 0 );
  ViewsText_OnSetFont( &_this->Dots, EwLoadResource( &CuptorFontXXL, ResourcesFont ));
  _this->MinutesList.OnUpdate = EwNewSlot( _this, CuptorCuptorEditClock_OnUpdateMin );
  _this->MinutesList.OnLoadItem = EwNewSlot( _this, CuptorCuptorEditClock_OnLoadMinutes );
  CoreVerticalList_OnSetSlideHandler( &_this->MinutesList, &_this->SlideMinutes );
  _this->HoursList.OnUpdate = EwNewSlot( _this, CuptorCuptorEditClock_OnUpdateHour );
  _this->HoursList.OnLoadItem = EwNewSlot( _this, CuptorCuptorEditClock_OnLoadHour );
  CoreVerticalList_OnSetSlideHandler( &_this->HoursList, &_this->SlideHours );
  _this->ColorEffect.Outlet = EwNewRef( &_this->Dots, ViewsText_OnGetColor, ViewsText_OnSetColor );
}

/* Re-Initializer for the class 'Cuptor::CuptorEditClock' */
void CuptorCuptorEditClock__ReInit( CuptorCuptorEditClock _this )
{
  /* At first re-initialize the super class ... */
  CuptorCuptorBaseClock__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Dots );
  CoreVerticalList__ReInit( &_this->MinutesList );
  CoreVerticalList__ReInit( &_this->HoursList );
  CoreSlideTouchHandler__ReInit( &_this->SlideHours );
  CoreSlideTouchHandler__ReInit( &_this->SlideMinutes );
  EffectsColorEffect__ReInit( &_this->ColorEffect );
}

/* Finalizer method for the class 'Cuptor::CuptorEditClock' */
void CuptorCuptorEditClock__Done( CuptorCuptorEditClock _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CuptorCuptorBaseClock );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Dots );
  CoreVerticalList__Done( &_this->MinutesList );
  CoreVerticalList__Done( &_this->HoursList );
  CoreSlideTouchHandler__Done( &_this->SlideHours );
  CoreSlideTouchHandler__Done( &_this->SlideMinutes );
  EffectsColorEffect__Done( &_this->ColorEffect );

  /* Don't forget to deinitialize the super class ... */
  CuptorCuptorBaseClock__Done( &_this->_Super );
}

/* 'C' function for method : 'Cuptor::CuptorEditClock.onClock()' */
void CuptorCuptorEditClock_onClock( CuptorCuptorEditClock _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super5.Owner, ((CoreGroup)EwNewObject( CuptorCuptorMain, 
  0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* This method is called by 'VerticalList2' every time the list loads or updates 
   an item. */
void CuptorCuptorEditClock_OnLoadMinutes( CuptorCuptorEditClock _this, XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->MinutesList.Item;
  itemView = EwCastObject( _this->MinutesList.View, ViewsText );
  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &CuptorFontXXL, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0012 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  EwGetRectW( _this->MinutesList.Super2.Bounds ), _this->MinutesList.ItemHeight )));
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void CuptorCuptorEditClock_OnLoadHour( CuptorCuptorEditClock _this, XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->HoursList.Item;
  itemView = EwCastObject( _this->HoursList.View, ViewsText );
  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &CuptorFontXXL, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const0012 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  EwGetRectW( _this->HoursList.Super2.Bounds ), _this->HoursList.ItemHeight )));
}

/* 'C' function for method : 'Cuptor::CuptorEditClock.OnUpdateHour()' */
void CuptorCuptorEditClock_OnUpdateHour( CuptorCuptorEditClock _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwGetAutoObject( &CuptorGlobals, CuptorGlobalsClass )->ClockHour = CoreVerticalList_GetItemAtPosition( 
  &_this->HoursList, _Const0013 );
}

/* 'C' function for method : 'Cuptor::CuptorEditClock.OnUpdateMin()' */
void CuptorCuptorEditClock_OnUpdateMin( CuptorCuptorEditClock _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwGetAutoObject( &CuptorGlobals, CuptorGlobalsClass )->ClockMin = CoreVerticalList_GetItemAtPosition( 
  &_this->MinutesList, _Const0014 );
}

/* Variants derived from the class : 'Cuptor::CuptorEditClock' */
EW_DEFINE_CLASS_VARIANTS( CuptorCuptorEditClock )
EW_END_OF_CLASS_VARIANTS( CuptorCuptorEditClock )

/* Virtual Method Table (VMT) for the class : 'Cuptor::CuptorEditClock' */
EW_DEFINE_CLASS( CuptorCuptorEditClock, CuptorCuptorBaseClock, Dots, Dots, Dots, 
                 Dots, _None, _None, "Cuptor::CuptorEditClock" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
  CuptorCuptorEditClock_onClock,
EW_END_OF_CLASS( CuptorCuptorEditClock )

/* Initializer for the class 'Cuptor::CuptorBaseClock' */
void CuptorCuptorBaseClock__Init( CuptorCuptorBaseClock _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CuptorCuptorBase__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( CuptorCuptorBaseClock );

  /* ... then construct all embedded objects */
  CoreSimpleTouchHandler__Init( &_this->ClockTouchHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( CuptorCuptorBaseClock );

  /* ... and initialize objects, variables, properties, etc. */
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->ClockTouchHandler, _Const0015 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->ClockTouchHandler, _Const0016 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->ClockTouchHandler, _Const0017 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->ClockTouchHandler, _Const0018 );
  CoreGroup__Add( _this, ((CoreView)&_this->ClockTouchHandler ), 0 );
  _this->ClockTouchHandler.OnPress = EwNewSlot( _this, CuptorCuptorBase__onClock );
}

/* Re-Initializer for the class 'Cuptor::CuptorBaseClock' */
void CuptorCuptorBaseClock__ReInit( CuptorCuptorBaseClock _this )
{
  /* At first re-initialize the super class ... */
  CuptorCuptorBase__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSimpleTouchHandler__ReInit( &_this->ClockTouchHandler );
}

/* Finalizer method for the class 'Cuptor::CuptorBaseClock' */
void CuptorCuptorBaseClock__Done( CuptorCuptorBaseClock _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CuptorCuptorBase );

  /* Finalize all embedded objects */
  CoreSimpleTouchHandler__Done( &_this->ClockTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CuptorCuptorBase__Done( &_this->_Super );
}

/* Variants derived from the class : 'Cuptor::CuptorBaseClock' */
EW_DEFINE_CLASS_VARIANTS( CuptorCuptorBaseClock )
EW_END_OF_CLASS_VARIANTS( CuptorCuptorBaseClock )

/* Virtual Method Table (VMT) for the class : 'Cuptor::CuptorBaseClock' */
EW_DEFINE_CLASS( CuptorCuptorBaseClock, CuptorCuptorBase, ClockTouchHandler, ClockTouchHandler, 
                 ClockTouchHandler, ClockTouchHandler, _None, _None, "Cuptor::CuptorBaseClock" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
  CuptorCuptorBase_onClock,
EW_END_OF_CLASS( CuptorCuptorBaseClock )

/* Embedded Wizard */
