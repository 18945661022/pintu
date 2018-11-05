#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t844;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t390;
// UnityEngine.Camera[]
struct CameraU5BU5D_t125;

#include "mscorlib_System_Object.h"

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t843  : public Object_t
{
};
struct SendMouseEvents_t843_StaticFields{
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t844* ___m_LastHit_3;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t844* ___m_MouseDownHit_4;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t844* ___m_CurrentHit_5;
	// UnityEngine.RaycastHit2D[] UnityEngine.SendMouseEvents::m_MouseRayHits2D
	RaycastHit2DU5BU5D_t390* ___m_MouseRayHits2D_6;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t125* ___m_Cameras_7;
};
