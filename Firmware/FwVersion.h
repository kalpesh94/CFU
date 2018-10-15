/*++
    This file is part of Component Firmware Update (CFU), licensed under
	the MIT License (MIT).

	Copyright (c) Microsoft Corporation. All rights reserved.

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.

Module Name:

    FwVersion.h

Abstract:

    Version definitions used in component firmware update protocol example.

Environment:

    Firmware driver.
--*/
#pragma once
//****************************************************************************
//
//                               INCLUDES
//
//****************************************************************************


//****************************************************************************
//
//                                  DEFINES
//
//****************************************************************************
    
#define FW_VERSION_MAJOR_SHIFT          24U
#define FW_VERSION_MAJOR_MASK           0xFFU

#define FW_VERSION_MINOR_SHIFT          8U
#define FW_VERSION_MINOR_MASK           0xFFFFU

#define FW_VERSION_BUILD_SHIFT          0U
#define FW_VERSION_BUILD_MASK           0xFFU

#define FW_VERSION_TEST_SIGNED          0x00
#define FW_VERSION_PRODUCTION_SIGNED    0x01

//****************************************************************************
//
//                                  TYPEDEFS
//
//****************************************************************************

//****************************************************************************
//
//                          GLOBAL VARIABLE EXTERNS
///
//****************************************************************************

//****************************************************************************
//
//                          GLOBAL FUNCTION EXTERNS
//
//****************************************************************************
