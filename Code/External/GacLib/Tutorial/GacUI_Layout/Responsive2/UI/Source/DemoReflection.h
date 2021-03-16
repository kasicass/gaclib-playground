﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION

#include "Demo.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			DECL_TYPE_INFO(::demo::AccountButtonTemplate)
			DECL_TYPE_INFO(::demo::AccountButtonTemplateConstructor)
			DECL_TYPE_INFO(::demo::AccountButtonViewModel)
			DECL_TYPE_INFO(::demo::AccountItemTemplate)
			DECL_TYPE_INFO(::demo::AccountItemTemplateConstructor)
			DECL_TYPE_INFO(::demo::AccountMenuItemTemplate)
			DECL_TYPE_INFO(::demo::AccountMenuItemTemplateConstructor)
			DECL_TYPE_INFO(::demo::MainWindow)
			DECL_TYPE_INFO(::demo::MainWindowConstructor)
			DECL_TYPE_INFO(::demo::VideoItemTemplate)
			DECL_TYPE_INFO(::demo::VideoItemTemplateConstructor)
			DECL_TYPE_INFO(::demo::VideoViewModel)
#endif

			extern bool LoadDemoTypes();
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
