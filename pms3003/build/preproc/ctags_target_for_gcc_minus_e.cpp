# 1 "D:\\arduino_prg\\IOT\\pms3003\\build\\sketch\\pms3003.ino.cpp"
# 1 "D:\\arduino_prg\\IOT\\pms3003//"
# 1 "<command-line>"
# 1 "D:\\arduino_prg\\IOT\\pms3003\\build\\sketch\\pms3003.ino.cpp"
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stdint.h" 1 3 4
# 9 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stdint.h" 3 4
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 1 3 4
/*
 *  $Id$
 */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */





extern "C" {


/* Macro to test version of GCC.  Returns 0 for non-GCC or too old GCC. */
# 37 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 3 4
/* Version with trailing underscores for BSD compatibility. */


/* RTEMS adheres to POSIX -- 1003.1b with some features from annexes.  */
# 93 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 3 4
/* XMK loosely adheres to POSIX -- 1003.1 */
# 207 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 3 4
/* Per the permission given in POSIX.1-2008 section 2.2.1, define
 * _POSIX_C_SOURCE if _XOPEN_SOURCE is defined and _POSIX_C_SOURCE is not.
 * (_XOPEN_SOURCE indicates that XSI extensions are desired by an application.)
 * This permission is first granted in 2008, but use it for older ones, also.
 * Allow for _XOPEN_SOURCE to be empty (from the earliest form of it, before it
 * was required to have specific values).
 */
# 227 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 3 4
}
# 9 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 2 3 4

/*
 * Guess on types by examining *_MIN / *_MAX defines.
 */

/* GCC >= 3.3.0 has __<val>__ implicitly defined. */
# 23 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
extern "C" {



typedef signed char __int8_t;
typedef unsigned char __uint8_t;
# 37 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef short int __int16_t;
typedef short unsigned int __uint16_t;
# 55 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long int __int32_t;
typedef long unsigned int __uint32_t;
# 77 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long long int __int64_t;
typedef long long unsigned int __uint64_t;
# 104 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef signed char __int_least8_t;
typedef unsigned char __uint_least8_t;
# 126 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef short int __int_least16_t;
typedef short unsigned int __uint_least16_t;
# 144 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long int __int_least32_t;
typedef long unsigned int __uint_least32_t;
# 158 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long long int __int_least64_t;
typedef long long unsigned int __uint_least64_t;
# 168 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef int __intptr_t;
typedef unsigned int __uintptr_t;
# 181 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
}
# 13 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 2 3 4


extern "C" {



/* gcc > 3.2 implicitly defines the values we are interested */






/* Check if "long long" is 64bit wide */
/* Modern GCCs provide __LONG_LONG_MAX__, SUSv3 wants LLONG_MAX */





/* Check if "long" is 64bit or 32bit wide */







typedef __int8_t int8_t ;
typedef __uint8_t uint8_t ;




typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int16_t int16_t ;
typedef __uint16_t uint16_t ;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int32_t int32_t ;
typedef __uint32_t uint32_t ;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int64_t int64_t ;
typedef __uint64_t uint64_t ;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;



/*
 * Fastest minimum-width integer types
 *
 * Assume int to be the fastest type for all types with a width 
 * less than __INT_MAX__ rsp. INT_MAX
 */

  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 105 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 115 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 125 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;







/*
 * Fall back to [u]int_least<N>_t for [u]int_fast<N>_t types
 * not having been defined, yet.
 * Leave undefined, if [u]int_least<N>_t should not be available.
 */
# 171 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
/* Greatest-width integer types */
/* Modern GCCs provide __INTMAX_TYPE__ */

  typedef long long int intmax_t;






/* Modern GCCs provide __UINTMAX_TYPE__ */

  typedef long long unsigned int uintmax_t;






typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;
# 215 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
/* Limits of Specified-Width Integer Types */
# 407 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
/* This must match size_t in stddef.h, currently long unsigned int */






/* This must match sig_atomic_t in <signal.h> (currently int) */



/* This must match ptrdiff_t  in <stddef.h> (currently long int) */
# 433 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
/* wint_t is unsigned int on almost all GCC targets.  */
# 445 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
/** Macros for minimum-width integer constant expressions */
# 498 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
/** Macros for greatest-width integer constant expression */
# 514 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdint.h" 3 4
}
# 10 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stdint.h" 2 3 4
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 1 3
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\ieeefp.h" 1 3



/* This file can define macros to choose variations of the IEEE float
   format:

   _FLT_LARGEST_EXPONENT_IS_NORMAL

	Defined if the float format uses the largest exponent for finite
	numbers rather than NaN and infinity representations.  Such a
	format cannot represent NaNs or infinities at all, but it's FLT_MAX
	is twice the IEEE value.

   _FLT_NO_DENORMALS

	Defined if the float format does not support IEEE denormals.  Every
	float with a zero exponent is taken to be a zero representation.
 
   ??? At the moment, there are no equivalent macros above for doubles and
   the macros are not fully supported by --enable-newlib-hw-fp.

   __IEEE_BIG_ENDIAN

        Defined if the float format is big endian.  This is mutually exclusive
        with __IEEE_LITTLE_ENDIAN.

   __IEEE_LITTLE_ENDIAN
 
        Defined if the float format is little endian.  This is mutually exclusive
        with __IEEE_BIG_ENDIAN.

   Note that one of __IEEE_BIG_ENDIAN or __IEEE_LITTLE_ENDIAN must be specified for a
   platform or error will occur.

   __IEEE_BYTES_LITTLE_ENDIAN

        This flag is used in conjunction with __IEEE_BIG_ENDIAN to describe a situation 
	whereby multiple words of an IEEE floating point are in big endian order, but the
	words themselves are little endian with respect to the bytes.

   _DOUBLE_IS_32BITS 

        This is used on platforms that support double by using the 32-bit IEEE
        float type.

   _FLOAT_ARG

        This represents what type a float arg is passed as.  It is used when the type is
        not promoted to double.
	
*/


/* ARM traditionally used big-endian words; and within those words the
   byte ordering was big or little endian depending upon the target.
   Modern floating-point formats are naturally ordered; in this case
   __VFP_FP__ will be defined, even if soft-float.  */
# 217 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\ieeefp.h" 3
/* necv70 was __IEEE_LITTLE_ENDIAN. */
# 11 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\newlib.h" 1 3
/* newlib.h.  Generated from newlib.hin by configure.  */
/* newlib.hin.  Manually edited from the output of autoheader to
   remove all PACKAGE_ macros which will collide with any user
   package using newlib header files and having its own package name,
   version, etc...  */




/* EL/IX level */
/* #undef _ELIX_LEVEL */

/* Newlib version */


/* C99 formats support (such as %a, %zu, ...) in IO functions like
 * printf/scanf enabled */
/* #undef _WANT_IO_C99_FORMATS */

/* long long type support in IO functions like printf/scanf enabled */


/* Register application finalization function using atexit. */


/* long double type support in IO functions like printf/scanf enabled */
/* #undef _WANT_IO_LONG_DOUBLE */

/* Positional argument support in printf functions enabled.  */
/* #undef _WANT_IO_POS_ARGS */

/* Optional reentrant struct support.  Used mostly on platforms with
   very restricted storage.  */
/* #undef _WANT_REENT_SMALL */

/* Multibyte supported */
/* #undef _MB_CAPABLE */

/* MB_LEN_MAX */


/* ICONV enabled */
/* #undef _ICONV_ENABLED */

/* Enable ICONV external CCS files loading capabilities */
/* #undef _ICONV_ENABLE_EXTERNAL_CCS */

/* Define if the linker supports .preinit_array/.init_array/.fini_array
 * sections.  */


/* True if atexit() may dynamically allocate space for cleanup
   functions.  */


/* True if long double supported.  */


/* Define if compiler supports -fno-tree-loop-distribute-patterns. */


/* True if long double supported and it is equal to double.  */


/* Define if ivo supported in streamio.  */


/* Define if fseek functions support seek optimization.  */


/* Define if wide char orientation is supported.  */


/* Define if unbuffered stream file optimization is supported.  */


/* Define if lite version of exit supported.  */
/* #undef _LITE_EXIT */

/* Define if declare atexit data as global.  */
/* #undef _REENT_GLOBAL_ATEXIT */

/*
 * Iconv encodings enabled ("to" direction)
 */
/* #undef _ICONV_TO_ENCODING_BIG5 */
/* #undef _ICONV_TO_ENCODING_CP775 */
/* #undef _ICONV_TO_ENCODING_CP850 */
/* #undef _ICONV_TO_ENCODING_CP852 */
/* #undef _ICONV_TO_ENCODING_CP855 */
/* #undef _ICONV_TO_ENCODING_CP866 */
/* #undef _ICONV_TO_ENCODING_EUC_JP */
/* #undef _ICONV_TO_ENCODING_EUC_TW */
/* #undef _ICONV_TO_ENCODING_EUC_KR */
/* #undef _ICONV_TO_ENCODING_ISO_8859_1 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_10 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_11 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_13 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_14 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_15 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_2 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_3 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_4 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_5 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_6 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_7 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_8 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_9 */
/* #undef _ICONV_TO_ENCODING_ISO_IR_111 */
/* #undef _ICONV_TO_ENCODING_KOI8_R */
/* #undef _ICONV_TO_ENCODING_KOI8_RU */
/* #undef _ICONV_TO_ENCODING_KOI8_U */
/* #undef _ICONV_TO_ENCODING_KOI8_UNI */
/* #undef _ICONV_TO_ENCODING_UCS_2 */
/* #undef _ICONV_TO_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_2BE */
/* #undef _ICONV_TO_ENCODING_UCS_2LE */
/* #undef _ICONV_TO_ENCODING_UCS_4 */
/* #undef _ICONV_TO_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_4BE */
/* #undef _ICONV_TO_ENCODING_UCS_4LE */
/* #undef _ICONV_TO_ENCODING_US_ASCII */
/* #undef _ICONV_TO_ENCODING_UTF_16 */
/* #undef _ICONV_TO_ENCODING_UTF_16BE */
/* #undef _ICONV_TO_ENCODING_UTF_16LE */
/* #undef _ICONV_TO_ENCODING_UTF_8 */
/* #undef _ICONV_TO_ENCODING_WIN_1250 */
/* #undef _ICONV_TO_ENCODING_WIN_1251 */
/* #undef _ICONV_TO_ENCODING_WIN_1252 */
/* #undef _ICONV_TO_ENCODING_WIN_1253 */
/* #undef _ICONV_TO_ENCODING_WIN_1254 */
/* #undef _ICONV_TO_ENCODING_WIN_1255 */
/* #undef _ICONV_TO_ENCODING_WIN_1256 */
/* #undef _ICONV_TO_ENCODING_WIN_1257 */
/* #undef _ICONV_TO_ENCODING_WIN_1258 */

/*
 * Iconv encodings enabled ("from" direction)
 */
/* #undef _ICONV_FROM_ENCODING_BIG5 */
/* #undef _ICONV_FROM_ENCODING_CP775 */
/* #undef _ICONV_FROM_ENCODING_CP850 */
/* #undef _ICONV_FROM_ENCODING_CP852 */
/* #undef _ICONV_FROM_ENCODING_CP855 */
/* #undef _ICONV_FROM_ENCODING_CP866 */
/* #undef _ICONV_FROM_ENCODING_EUC_JP */
/* #undef _ICONV_FROM_ENCODING_EUC_TW */
/* #undef _ICONV_FROM_ENCODING_EUC_KR */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_1 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_10 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_11 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_13 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_14 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_15 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_2 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_3 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_4 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_5 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_6 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_7 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_8 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_9 */
/* #undef _ICONV_FROM_ENCODING_ISO_IR_111 */
/* #undef _ICONV_FROM_ENCODING_KOI8_R */
/* #undef _ICONV_FROM_ENCODING_KOI8_RU */
/* #undef _ICONV_FROM_ENCODING_KOI8_U */
/* #undef _ICONV_FROM_ENCODING_KOI8_UNI */
/* #undef _ICONV_FROM_ENCODING_UCS_2 */
/* #undef _ICONV_FROM_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_2BE */
/* #undef _ICONV_FROM_ENCODING_UCS_2LE */
/* #undef _ICONV_FROM_ENCODING_UCS_4 */
/* #undef _ICONV_FROM_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_4BE */
/* #undef _ICONV_FROM_ENCODING_UCS_4LE */
/* #undef _ICONV_FROM_ENCODING_US_ASCII */
/* #undef _ICONV_FROM_ENCODING_UTF_16 */
/* #undef _ICONV_FROM_ENCODING_UTF_16BE */
/* #undef _ICONV_FROM_ENCODING_UTF_16LE */
/* #undef _ICONV_FROM_ENCODING_UTF_8 */
/* #undef _ICONV_FROM_ENCODING_WIN_1250 */
/* #undef _ICONV_FROM_ENCODING_WIN_1251 */
/* #undef _ICONV_FROM_ENCODING_WIN_1252 */
/* #undef _ICONV_FROM_ENCODING_WIN_1253 */
/* #undef _ICONV_FROM_ENCODING_WIN_1254 */
/* #undef _ICONV_FROM_ENCODING_WIN_1255 */
/* #undef _ICONV_FROM_ENCODING_WIN_1256 */
/* #undef _ICONV_FROM_ENCODING_WIN_1257 */
/* #undef _ICONV_FROM_ENCODING_WIN_1258 */
# 16 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\config.h" 1 3



# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\ieeefp.h" 1 3
# 5 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\config.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 6 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\config.h" 2 3





/* exceptions first */







/* 16 bit integer machines */
# 112 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\config.h" 3
/* For the PowerPC eabi, force the _impure_ptr to be in .sdata */
# 122 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\config.h" 3
/* Configure small REENT structure for Xilinx MicroBlaze platforms */
# 184 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\config.h" 3
/* This block should be kept in sync with GCC's limits.h.  The point
   of having these definitions here is to not include limits.h, which
   would pollute the user namespace, while still using types of the
   the correct widths when deciding how to define __int32_t and
   __int64_t.  */
# 209 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\config.h" 3
/* End of block that should be kept in sync with GCC's limits.h.  */
# 247 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\config.h" 3
/* Define return type of read/write routines.  In POSIX, the return type
   for read()/write() is "ssize_t" but legacy newlib code has been using
   "int" for some time.  If not specified, "int" is defaulted.  */



/* Define `count' parameter of read/write routines.  In POSIX, the `count'
   parameter is "size_t" but legacy newlib code has been using "int" for some
   time.  If not specified, "int" is defaulted.  */
# 266 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\config.h" 3
/* See if small reent asked for at configuration time and
   is not chosen by the platform by default.  */






/* If _MB_EXTENDED_CHARSETS_ALL is set, we want all of the extended
   charsets.  The extended charsets add a few functions and a couple
   of tables of a few K each. */
# 17 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 2 3

/* First try to figure out whether we really are in an ANSI C environment.  */
/* FIXME: This probably needs some work.  Perhaps sys/config.h can be
   prevailed upon to give us a clue.  */





/*  ISO C++.  */
# 102 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 3
/* Support gcc's __attribute__ facility.  */







/*  The traditional meaning of 'extern inline' for GCC is not
  to emit the function body unless the address is explicitly
  taken.  However this behaviour is changing to match the C99
  standard, which uses 'extern inline' to indicate that the
  function body *must* be emitted.  Likewise, a function declared
  without either 'extern' or 'static' defaults to extern linkage
  (C99 6.2.2p5), and the compiler may choose whether to use the
  inline version or call the extern linkage version (6.7.4p6).
  If we are using GCC, but do not have the new behaviour, we need
  to use extern inline; if we are using a new GCC with the
  C99-compatible behaviour, or a non-GCC compiler (which we will
  have to hope is C99, since there is no other way to achieve the
  effect of omitting the function if it isn't referenced) we use
  'static inline', which c99 defines to mean more-or-less the same
  as the Gnu C 'extern inline'.  */




/* We're using GCC in C99 mode, or an unknown compiler which
  we just have to hope obeys the C99 semantics of inline.  */
# 12 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 2 3




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 212 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 238 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 279 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 306 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 358 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 17 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 2 3

# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */



extern "C" {



# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 14 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 147 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 157 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 412 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */






/* Type whose alignment is supported in every context and is at least
   as great as that of any standard type not using alignment
   specifiers.  */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 15 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\_types.h" 1 3
/* ANSI C namespace clean utility typedefs */

/* This file defines various typedefs needed by the system calls that support
   the C library.  Basically, they're just the POSIX versions with an '_'
   prepended.  This file lives in the `sys' directory so targets can provide
   their own if desired (or they can put target dependant conditionals here).
*/




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_types.h" 1 3
/*
 *  $Id$
 */



# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 1 3
/*
 *  $Id$
 */
# 8 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_types.h" 2 3
# 13 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\_types.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\lock.h" 1 3



/* dummy lock routines for single-threaded aps */

typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;

# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 10 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\lock.h" 2 3
# 14 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\_types.h" 2 3


typedef long _off_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



__extension__ typedef long long _off64_t;


/*
 * We need fpos_t for the following, but it doesn't have a leading "_",
 * so we use _fpos_t instead.
 */

typedef long _fpos_t; /* XXX must match off_t in <sys/types.h> */
    /* (and must be `long' for now) */
# 51 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\_types.h" 3
/* If __SIZE_TYPE__ is defined (gcc) we define ssize_t based on size_t.
   We simply change "unsigned" to "signed" for this single definition
   to make sure ssize_t and size_t only differ by their signedness. */

typedef signed int _ssize_t;
# 67 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\_types.h" 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 353 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
typedef unsigned int wint_t;




/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 412 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 68 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\_types.h" 2 3


/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value; /* Value so far.  */
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;



/* Iconv descriptor type */
typedef void *_iconv_t;
# 16 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 2 3






typedef unsigned long __ULong;
# 38 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _reent;

/*
 * If _REENT_SMALL is defined, we make struct _reent as small as possible,
 * by having nearly everything possible allocated at first use.
 */

struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};

/* needed by reentrant structure */
struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};

/*
 * atexit() support.
 */



struct _on_exit_args {
 void * _fnargs[32 /* must be at least 32 to guarantee ANSI conformance */]; /* user fn args */
 void * _dso_handle[32 /* must be at least 32 to guarantee ANSI conformance */];
 /* Bitmask is set if user function takes arguments.  */
 __ULong _fntypes; /* type of exit routine -
				   Must have at least _ATEXIT_SIZE bits */
 /* Bitmask is set if function was registered via __cxa_atexit.  */
 __ULong _is_cxa;
};
# 91 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _atexit {
 struct _atexit *_next; /* next in list */
 int _ind; /* next index in this table */
 /* Some entries may already have been called, and will be NULL.  */
 void (*_fns[32 /* must be at least 32 to guarantee ANSI conformance */])(void); /* the table itself */
        struct _on_exit_args _on_exit_args;
};
# 108 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 3
/*
 * Stdio buffers.
 *
 * This and __FILE are defined here because we need them for struct _reent,
 * but we don't want stdio.h included when stdlib.h is.
 */

struct __sbuf {
 unsigned char *_base;
 int _size;
};

/*
 * Stdio state variables.
 *
 * The following always hold:
 *
 *	if (_flags&(__SLBF|__SWR)) == (__SLBF|__SWR),
 *		_lbfsize is -_bf._size, else _lbfsize is 0
 *	if _flags&__SRD, _w is 0
 *	if _flags&__SWR, _r is 0
 *
 * This ensures that the getc and putc macros (or inline functions) never
 * try to write or read from a file that is in `read' or `write' mode.
 * (Moreover, they can, and do, automatically switch from read mode to
 * write mode, and back, on "r+" and "w+" files.)
 *
 * _lbfsize is used only to make the inline line-buffered output stream
 * code as compact as possible.
 *
 * _ub, _up, and _ur are used when ungetc() pushes back more characters
 * than fit in the current _bf, or when ungetc() pushes back a character
 * that does not match the previous one in _bf.  When this happens,
 * _ub._base becomes non-nil (i.e., a stream has ungetc() data iff
 * _ub._base!=NULL) and _up and _ur save the current values of _p and _r.
 */
# 179 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 3
struct __sFILE {
  unsigned char *_p; /* current position in (some) buffer */
  int _r; /* read space left for getc() */
  int _w; /* write space left for putc() */
  short _flags; /* flags, below; this FILE is free if 0 */
  short _file; /* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf; /* the buffer (at least 1 byte, if !NULL) */
  int _lbfsize; /* 0 or -_bf._size, for inline putc */





  /* operations */
  void * _cookie; /* cookie passed to io functions */

  int (* _read) (struct _reent *, void *, char *, int)
                                          ;
  int (* _write) (struct _reent *, void *, const char *, int)

                                   ;
  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);

  /* separate buffer for long sequences of ungetc() */
  struct __sbuf _ub; /* ungetc buffer */
  unsigned char *_up; /* saved _p when _p is doing ungetc data */
  int _ur; /* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3]; /* guarantee an ungetc() buffer */
  unsigned char _nbuf[1]; /* guarantee a getc() buffer */

  /* separate buffer for fgetline() when line crosses buffer boundary */
  struct __sbuf _lb; /* buffer for fgetline() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int _blksize; /* stat.st_blksize (may be != _bf._size) */
  _off_t _offset; /* current lseek offset */


  struct _reent *_data; /* Here for binary compatibility? Remove? */



  _flock_t _lock; /* for thread-safety locking */

  _mbstate_t _mbstate; /* for wide char stdio functions. */
  int _flags2; /* for future use */
};
# 285 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

/*
 * rand48 family support
 *
 * Copyright (c) 1993 Martin Birgmeier
 * All rights reserved.
 *
 * You may redistribute unmodified or modified versions of this source
 * code provided that the above copyright notice and this and the
 * following conditions are retained.
 *
 * This software is provided ``as is'', and comes with no warranties
 * of any kind. I shall in no event be liable for anything that happens
 * to anyone/anything when using this software.
 */







struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};

/* How big the some arrays are.  */




/*
 * struct _reent
 *
 * This structure contains *all* globals needed by the library.
 * It's raison d'etre is to facilitate threads by making all library routines
 * reentrant.  IE: All state information is contained here.
 */
# 569 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _reent
{
  int _errno; /* local copy of errno */

  /* FILE is a big struct and may change over time.  To try to achieve binary
     compatibility with future versions, put stdin,stdout,stderr here.
     These are pointers into member __sf defined below.  */
  __FILE *_stdin, *_stdout, *_stderr;

  int _inc; /* used by tmpnam */
  char _emergency[25];

  int _current_category; /* used by setlocale */
  const char *_current_locale;

  int __sdidinit; /* 1 means stdio has been init'd */

  void (* __cleanup) (struct _reent *);

  /* used by mprec routines */
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;

  /* used by some fp conversion routines */
  int _cvtlen; /* should be size_t */
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;
  /* Two next two fields were once used by malloc.  They are no longer
     used. They are used to preserve the space used before so as to
     allow addition of new reent fields and keep binary compatibility.   */
      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;


  /* atexit stuff */
  struct _atexit *_atexit; /* points to head of LIFO stack */
  struct _atexit _atexit0; /* one guaranteed table, required by ANSI */


  /* signal info */
  void (**(_sig_func))(int);

  /* These are here last so that __FILE can grow without changing the offsets
     of the above members (on the off chance that future binary compatibility
     would be broken otherwise).  */
  struct _glue __sglue; /* root of glue chain */
  __FILE __sf[3]; /* first three file descriptors */
};
# 748 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 3
/* This value is used in stdlib/misc.c.  reent/reent.c has to know it
   as well to make sure the freelist is correctly free'd.  Therefore
   we define it here, rather than in stdlib/misc.c, as before. */


/*
 * All references to struct _reent are via this pointer.
 * Internally, newlib routines that need to reference it should use _REENT.
 */





extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);

/* #define _REENT_ONLY define this to get only reentrant routines */
# 788 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 3
}
# 19 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\stdlib.h" 1 3



/* place holder so platforms may add stdlib.h extensions */
# 20 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 2 3

# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\alloca.h" 1 3
/* libc/include/alloca.h - Allocate memory on stack */

/* Written 2000 by Werner Almesberger */
/* Rearranged for general inclusion by stdlib.h.
   2001, Corinna Vinschen <vinschen@redhat.com> */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 11 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\alloca.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 12 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\alloca.h" 2 3
# 22 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 2 3






extern "C" {

typedef struct
{
  int quot; /* quotient */
  int rem; /* remainder */
} div_t;

typedef struct
{
  long quot; /* quotient */
  long rem; /* remainder */
} ldiv_t;




typedef struct
{
  long long int quot; /* quotient */
  long long int rem; /* remainder */
} lldiv_t;




typedef int (*__compar_fn_t) (const void *, const void *);







int __locale_mb_cur_max (void);



void abort (void) __attribute__ ((noreturn));
int abs (int);
int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar)



                                ;
void * calloc (size_t __nmemb, size_t __size) __attribute__ ((nothrow));
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((noreturn));
void free (void *) __attribute__ ((nothrow));
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);
char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);

extern char *suboptarg; /* getsubopt(3) external variable */
int getsubopt (char **, char * const *, char **);

long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void * malloc (size_t __size) __attribute__ ((nothrow));
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *__restrict, const char *__restrict, size_t);
int _mbtowc_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *__restrict, const char *__restrict, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
size_t wcstombs (char *__restrict, const wchar_t *__restrict, size_t);
size_t _wcstombs_r (struct _reent *, char *__restrict, const wchar_t *__restrict, size_t, _mbstate_t *);


char * mkdtemp (char *);
int mkostemp (char *, int);
int mkostemps (char *, int, int);
int mkstemp (char *);
int mkstemps (char *, int);
char * mktemp (char *) __attribute__ ((__warning__ ("the use of `mktemp' is dangerous; use `mkstemp' instead")));

char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__warning__ ("the use of `mktemp' is dangerous; use `mkstemp' instead")));

void qsort (void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void * realloc (void * __r, size_t __size) __attribute__ ((nothrow));

void * reallocf (void * __r, size_t __size);
char * realpath (const char *__restrict path, char *__restrict resolved_path);

void srand (unsigned __seed);
double strtod (const char *__restrict __n, char **__restrict __end_PTR);
double _strtod_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR);

float strtof (const char *__restrict __n, char **__restrict __end_PTR);


/* the following strtodf interface is deprecated...use strtof instead */




long strtol (const char *__restrict __n, char **__restrict __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long strtoul (const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);

int system (const char *__string);


long a64l (const char *__input);
char * l64a (long __input);
char * _l64a_r (struct _reent *,long __input);
int on_exit (void (*__func)(int, void *),void * __arg);
void _Exit (int __status) __attribute__ ((noreturn));
int putenv (char *__string);
int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);
int setenv (const char *__string, const char *__value, int __overwrite);
int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);

char * gcvt (double,int,char *);
char * gcvtf (float,int,char *);
char * fcvt (double,int,int *,int *);
char * fcvtf (float,int,int *,int *);
char * ecvt (double,int,int *,int *);
char * ecvtbuf (double, int, int*, int*, char *);
char * fcvtbuf (double, int, int*, int*, char *);
char * ecvtf (float,int,int *,int *);
char * dtoa (double, int, int, int *, int*, char**);
int rand_r (unsigned *__seed);

double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long jrand48 (unsigned short [3]);
long _jrand48_r (struct _reent *, unsigned short [3]);
void lcong48 (unsigned short [7]);
void _lcong48_r (struct _reent *, unsigned short [7]);
long lrand48 (void);
long _lrand48_r (struct _reent *);
long mrand48 (void);
long _mrand48_r (struct _reent *);
long nrand48 (unsigned short [3]);
long _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void srand48 (long);
void _srand48_r (struct _reent *, long);
long long atoll (const char *__nptr);
long long _atoll_r (struct _reent *, const char *__nptr);
long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);


long long strtoll (const char *__restrict __n, char **__restrict __end_PTR, int __base);


long long _strtoll_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);


unsigned long long strtoull (const char *__restrict __n, char **__restrict __end_PTR, int __base);


unsigned long long _strtoull_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);


void cfree (void *);
int unsetenv (const char *__string);
int _unsetenv_r (struct _reent *, const char *__string);
# 221 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 3
char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);

void * _malloc_r (struct _reent *, size_t) __attribute__ ((nothrow));
void * _calloc_r (struct _reent *, size_t, size_t) __attribute__ ((nothrow));
void _free_r (struct _reent *, void *) __attribute__ ((nothrow));
void * _realloc_r (struct _reent *, void *, size_t) __attribute__ ((nothrow));
void _mstats_r (struct _reent *, char *);

int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);

/* On platforms where long double equals double.  */


extern long double strtold (const char *__restrict, char **__restrict);



}
# 25 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 1 3
/*
 * string.h
 *
 * Definitions for memory and string functions.
 */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 11 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 12 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 1 3 4
/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/home/build/work/GCC-4-8-build/install-native/arm-none-eabi/usr/include/sys/cdefs.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/* libc/sys/linux/sys/cdefs.h - Helper macros for K&R vs. ANSI C compat. */

/* Written 2000 by Werner Almesberger */

/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 * $FreeBSD$
 */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_default_types.h" 1 3 4
/*
 *  $Id$
 */
# 53 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 2 3 4
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 54 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 2 3 4
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 55 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 2 3 4
# 78 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * Testing against Clang-specific extensions.
 */
# 103 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * This code has been put in place to help reduce the addition of
 * compiler specific defines in FreeBSD code.  It helps to aid in
 * having a compiler-agnostic source tree.
 */
# 141 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * Compiler memory barriers, specific to gcc and clang.
 */
# 155 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/* XXX: if __GNUC__ >= 2: not tested everywhere originally, where replaced */
# 169 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * The __CONCAT macro is used to concatenate parts of symbol names, e.g.
 * with "#define OLD(foo) __CONCAT(old,foo)", OLD(foo) produces oldfoo.
 * The __CONCAT macro is a bit tricky to use if it must work in non-ANSI
 * mode -- there must be no spaces between its arguments, and for nested
 * __CONCAT's, all the __CONCAT's must be at the left.  __CONCAT can also
 * concatenate double-quoted strings produced by the __STRING macro, but
 * this only works with ANSI C.
 *
 * __XSTRING is like __STRING, but it expands any macros in its argument
 * first.  It is only available with ANSI C.
 */
# 226 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * Compiler-dependent macros to help declare dead (non-returning) and
 * pure (no side effects) functions, and unused variables.  They are
 * null except for versions of gcc that are known to support the features
 * properly (old versions of gcc-2 supported the dead and pure features
 * in a different (wrong) way).  If we do not provide an implementation
 * for a given compiler, let the compile fail if it is told to use
 * a feature that we cannot live without.
 */
# 278 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * Keywords added in C11.
 */
# 301 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * No native support for _Atomic(). Place object in structure to prevent
 * most forms of direct non-atomic access.
 */
# 330 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/* XXX: Change this to test against C++11 when clang in base supports it. */
# 341 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * Emulation of C11 _Generic().  Unlike the previously defined C11
 * keywords, it is not possible to implement this using exactly the same
 * syntax.  Therefore implement something similar under the name
 * __generic().  Unlike _Generic(), this macro can only distinguish
 * between a single type, so it requires nested invocations to
 * distinguish multiple cases.
 */
# 397 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/* XXX: should use `#if __STDC_VERSION__ < 199901'. */




/*
 * GCC 2.95 provides `__restrict' as an extension to C90 to support the
 * C99-specific `restrict' type qualifier.  We happen to use `__restrict' as
 * a way to define the `restrict' type qualifier without disturbing older
 * software that is unaware of C99 keywords.
 */
# 416 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * GNU C version 2.96 adds explicit branch prediction so that
 * the CPU back-end can hint the processor and also so that
 * code blocks can be reordered such that the predicted path
 * sees a more linear flow, thus improving cache behavior, etc.
 *
 * The following two macros provide us with a way to utilize this
 * compiler feature.  Use __predict_true() if you expect the expression
 * to evaluate to true, and __predict_false() if you expect the
 * expression to evaluate to false.
 *
 * A few notes about usage:
 *
 *	* Generally, __predict_false() error condition checks (unless
 *	  you have some _strong_ reason to do otherwise, in which case
 *	  document it), and/or __predict_true() `no-error' condition
 *	  checks, assuming you want to optimize for the no-error case.
 *
 *	* Other than that, if you don't know the likelihood of a test
 *	  succeeding from empirical or other `hard' evidence, don't
 *	  make predictions.
 *
 *	* These are meant to be used in places that are run `a lot'.
 *	  It is wasteful to make predictions in code that is run
 *	  seldomly (e.g. at subsystem initialization time) as the
 *	  basic block reordering that this affects can often generate
 *	  larger code.
 */
# 464 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * Given the pointer x to the member m of the struct s, return
 * a pointer to the containing structure.  When using GCC, we first
 * assign pointer x to a local variable, to check that its type is
 * compatible with member m.
 */
# 480 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * Compiler-dependent macros to declare that functions take printf-like
 * or scanf-like arguments.  They are null except for versions of gcc
 * that are known to support the features properly (old versions of gcc-2
 * didn't permit keeping the keywords out of the application namespace).
 */
# 504 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/* Compiler-dependent macros that rely on FreeBSD-specific extensions. */
# 595 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*-
 * The following definitions are an extension of the behavior originally
 * implemented in <sys/_posix.h>, but with a different level of granularity.
 * POSIX.1 requires that the macros we test be defined before any standard
 * header file is included.
 *
 * Here's a quick run-down of the versions:
 *  defined(_POSIX_SOURCE)		1003.1-1988
 *  _POSIX_C_SOURCE == 1		1003.1-1990
 *  _POSIX_C_SOURCE == 2		1003.2-1992 C Language Binding Option
 *  _POSIX_C_SOURCE == 199309		1003.1b-1993
 *  _POSIX_C_SOURCE == 199506		1003.1c-1995, 1003.1i-1995,
 *					and the omnibus ISO/IEC 9945-1: 1996
 *  _POSIX_C_SOURCE == 200112		1003.1-2001
 *  _POSIX_C_SOURCE == 200809		1003.1-2008
 *
 * In addition, the X/Open Portability Guide, which is now the Single UNIX
 * Specification, defines a feature-test macro which indicates the version of
 * that specification, and which subsumes _POSIX_C_SOURCE.
 *
 * Our macros begin with two underscores to avoid namespace screwage.
 */

/* Deal with IEEE Std. 1003.1-1990, in which _POSIX_C_SOURCE == 1. */





/* Deal with IEEE Std. 1003.2-1992, in which _POSIX_C_SOURCE == 2. */





/* Deal with various X/Open Portability Guides and Single UNIX Spec. */
# 647 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*
 * Deal with all versions of POSIX.  The ordering relative to the tests above is
 * important.
 */
# 678 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include-fixed\\sys\\cdefs.h" 3 4
/*-
 * Deal with _ANSI_SOURCE:
 * If it is defined, and no other compilation environment is explicitly
 * requested, then define our internal feature-test macros to zero.  This
 * makes no difference to the preprocessor (undefined symbols in preprocessing
 * expressions are defined to have value zero), but makes it more convenient for
 * a test program to print out the values.
 *
 * If a program mistakenly defines _ANSI_SOURCE and some other macro such as
 * _POSIX_C_SOURCE, we will assume that it wants the broader compilation
 * environment (and in fact we will never get here).
 */
# 13 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 14 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 2 3



# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 412 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 18 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 2 3

extern "C" {

void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void * , const void * , size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *, const char *);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *, const char *);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *, const char *, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *, const char *, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);


char *strtok (char *, const char *);


size_t strxfrm (char *, const char *, size_t);


char *strtok_r (char *, const char *, char **);

int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
int ffs (int);
char *index (const char *, int);
void * memccpy (void * , const void * , int, size_t);
void * mempcpy (void *, const void *, size_t);
void * memmem (const void *, size_t, const void *, size_t);
void * memrchr (const void *, int, size_t);
void * rawmemchr (const void *, int);
char *rindex (const char *, int);
char *stpcpy (char *, const char *);
char *stpncpy (char *, const char *, size_t);
int strcasecmp (const char *, const char *);
char *strcasestr (const char *, const char *);
char *strchrnul (const char *, int);


char *strdup (const char *);


char *_strdup_r (struct _reent *, const char *);


char *strndup (const char *, size_t);


char *_strndup_r (struct _reent *, const char *, size_t);
/* There are two common strerror_r variants.  If you request
   _GNU_SOURCE, you get the GNU version; otherwise you get the POSIX
   version.  POSIX requires that #undef strerror_r will still let you
   invoke the underlying function, but that requires gcc support.  */




int strerror_r (int, char *, size_t) __asm__ ("" /* stringify without expanding x */ /* expand x, then stringify */ "__xpg_strerror_r");





size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);
int strncasecmp (const char *, const char *, size_t);
size_t strnlen (const char *, size_t);
char *strsep (char **, const char *);
char *strlwr (char *);
char *strupr (char *);

char *strsignal (int __signo);





/* Recursive version of strerror.  */
char * _strerror_r (struct _reent *, int, int, int *);
# 124 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 3
/* These function names are used on Windows and perhaps other systems.  */
# 140 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\string.h" 1 3
/* This is a dummy <sys/string.h> used as a placeholder for
   systems that need to have a special header file.  */
# 141 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 2 3

}
# 26 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 1 3




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 6 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\ieeefp.h" 1 3
# 7 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 8 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 2 3

extern "C" {

/* __dmath, __fmath, and __ldmath are only here for backwards compatibility
 * in case any code used them.  They are no longer used by Newlib, itself,
 * other than legacy.  */
union __dmath
{
  double d;
  __ULong i[2];
};

union __fmath
{
  float f;
  __ULong i[1];
};


union __ldmath
{
  long double ld;
  __ULong i[4];
};


/* Natural log of 2 */



 /* gcc >= 3.3 implicitly defines builtins for HUGE_VALx values.  */
# 105 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 3
/* Reentrant ANSI C functions.  */


extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);


/* Non reentrant ANSI C functions.  */



extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);





/* ISO C99 types and macros. */

/* FIXME:  FLT_EVAL_METHOD should somehow be gotten from float.h (which is hard,
 * considering that the standard says the includes it defines should not
 * include other includes that it defines) and that value used.  (This can be
 * solved, but autoconf has a bug which makes the solution more difficult, so
 * it has been skipped for now.)  */






    typedef float float_t;
    typedef double double_t;
# 198 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 3
extern int __isinff (float x);
extern int __isinfd (double x);
extern int __isnanf (float x);
extern int __isnand (double x);
extern int __fpclassifyf (float x);
extern int __fpclassifyd (double x);
extern int __signbitf (float x);
extern int __signbitd (double x);
# 217 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 3
/* Note: isinf and isnan were once functions in newlib that took double
 *       arguments.  C99 specifies that these names are reserved for macros
 *       supporting multiple floating point types.  Thus, they are
 *       now defined as macros.  Implementations of the old functions
 *       taking double arguments still exist for compatibility purposes
 *       (prototypes for them are in <ieeefp.h>).  */
# 256 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 3
/* Non ANSI double precision functions.  */

extern double infinity (void);
extern double nan (const char *);
extern int finite (double);
extern double copysign (double, double);
extern double logb (double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);

extern double exp2 (double);
extern double scalbln (double, long int);
extern double tgamma (double);
extern double nearbyint (double);
extern long int lrint (double);
extern long long int llrint (double);
extern double round (double);
extern long int lround (double);
extern long long int llround (double);
extern double trunc (double);
extern double remquo (double, double, int *);
extern double fdim (double, double);
extern double fmax (double, double);
extern double fmin (double, double);
extern double fma (double, double, double);


extern double log1p (double);
extern double expm1 (double);



extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double lgamma (double);
extern double erf (double);
extern double erfc (double);
extern double log2 (double);





extern double hypot (double, double);




/* Single precision versions of ANSI functions.  */

extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);


extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);


/* Other single precision functions.  */

extern float exp2f (float);
extern float scalblnf (float, long int);
extern float tgammaf (float);
extern float nearbyintf (float);
extern long int lrintf (float);
extern long long llrintf (float);
extern float roundf (float);
extern long int lroundf (float);
extern long long int llroundf (float);
extern float truncf (float);
extern float remquof (float, float, int *);
extern float fdimf (float, float);
extern float fmaxf (float, float);
extern float fminf (float, float);
extern float fmaf (float, float, float);

extern float infinityf (void);
extern float nanf (const char *);
extern int finitef (float);
extern float copysignf (float, float);
extern float logbf (float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);


extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float lgammaf (float);
extern float erff (float);
extern float erfcf (float);
extern float log2f (float);
extern float hypotf (float, float);


/* On platforms where long double equals double.  */

/* Reentrant ANSI C functions.  */

extern long double atanl (long double);
extern long double cosl (long double);
extern long double sinl (long double);
extern long double tanl (long double);
extern long double tanhl (long double);
extern long double frexpl (long double value, int *);
extern long double modfl (long double, long double *);
extern long double ceill (long double);
extern long double fabsl (long double);
extern long double floorl (long double);
extern long double log1pl (long double);
extern long double expm1l (long double);

/* Non reentrant ANSI C functions.  */


extern long double acosl (long double);
extern long double asinl (long double);
extern long double atan2l (long double, long double);
extern long double coshl (long double);
extern long double sinhl (long double);
extern long double expl (long double);
extern long double ldexpl (long double, int);
extern long double logl (long double);
extern long double log10l (long double);
extern long double powl (long double, long double);
extern long double sqrtl (long double);
extern long double fmodl (long double, long double);
extern long double hypotl (long double, long double);


extern long double copysignl (long double, long double);
extern long double nanl (const char *);
extern int ilogbl (long double);
extern long double asinhl (long double);
extern long double cbrtl (long double);
extern long double nextafterl (long double, long double);
extern long double rintl (long double);
extern long double scalbnl (long double, int);
extern long double exp2l (long double);
extern long double scalblnl (long double, long);
extern long double tgammal (long double);
extern long double nearbyintl (long double);
extern long int lrintl (long double);
extern long long int llrintl (long double);
extern long double roundl (long double);
extern long lroundl (long double);
extern long long int llroundl (long double);
extern long double truncl (long double);
extern long double remquol (long double, long double, int *);
extern long double fdiml (long double, long double);
extern long double fmaxl (long double, long double);
extern long double fminl (long double, long double);
extern long double fmal (long double, long double, long double);

extern long double acoshl (long double);
extern long double atanhl (long double);
extern long double remainderl (long double, long double);
extern long double lgammal (long double);
extern long double erfl (long double);
extern long double erfcl (long double);
# 463 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 3
extern double drem (double, double);
extern void sincos (double, double *, double *);
extern double gamma_r (double, int *);
extern double lgamma_r (double, int *);

extern double y0 (double);
extern double y1 (double);
extern double yn (int, double);
extern double j0 (double);
extern double j1 (double);
extern double jn (int, double);

extern float dremf (float, float);
extern void sincosf (float, float *, float *);
extern float gammaf_r (float, int *);
extern float lgammaf_r (float, int *);

extern float y0f (float);
extern float y1f (float);
extern float ynf (int, float);
extern float j0f (float);
extern float j1f (float);
extern float jnf (int, float);

/* GNU extensions */

extern double exp10 (double);


extern double pow10 (double);


extern float exp10f (float);


extern float pow10f (float);






/* The gamma functions use a global variable, signgam.  */


extern int *__signgam (void);




/* The exception structure passed to the matherr routine.  */
/* We have a problem when using C++ since `exception' is a reserved
   name in C++.  */

struct __exception



{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};


extern int matherr (struct __exception *e);




/* Values for the type field of struct exception.  */
# 545 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 3
/* Useful constants.  */
# 572 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 3
/* Global control over fdlibm error handling.  */

enum __fdlibm_version
{
  __fdlibm_ieee = -1,
  __fdlibm_svid,
  __fdlibm_xopen,
  __fdlibm_posix
};




extern enum __fdlibm_version __fdlib_version;
# 594 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\math.h" 3
}
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/binary.h" 1
/*
  binary.h - Definitions for binary constants
  Copyright (c) 2006 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 29 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2


extern "C" {


# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_constants.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C"{
# 54 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_constants.h"
enum BitOrder {
 LSBFIRST = 0,
 MSBFIRST = 1
};

//      LOW 0
//      HIGH 1







// undefine stdlib's abs if encountered
# 88 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_constants.h"
extern uint32_t ulPortSetInterruptMask( void );
extern void vPortClearInterruptMask( uint32_t ulNewMask );
# 102 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_constants.h"
typedef unsigned int word;



// TODO: to be checked
typedef uint8_t boolean ;
typedef uint8_t byte ;



} // extern "C"
# 35 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2

extern uint32_t SystemCoreClock;





void yield(void);

extern uint32_t DiagPrintf(const char *fmt, ...);

extern int rtl_printf(const char *fmt, ...);
extern int rtl_sprintf(char* str, const char* fmt, ...);
# 56 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h"
extern void *pvPortMalloc( size_t xWantedSize );
extern void vPortFree( void *pv );
extern void *pvPortReAlloc( void *pv, size_t xWantedSize );
# 70 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h"
/* sketch */
extern void setup( void );
extern void loop( void );
# 82 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h"
/* Types used for the tables below */
typedef struct _PinDescription
{

  // HW PinNames
  uint32_t pinname;

  // Current Pin Type
  uint32_t ulPinType;

  // Supported Pin Function
  uint32_t ulPinAttribute;

  // Current Pin Mode
  uint32_t ulPinMode;

} PinDescription ;

/* Pins table to be instanciated into variant.cpp */
extern PinDescription g_APinDescription[];


} // extern "C"

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WCharacter.h" 1
/*
 WCharacter.h - Character utility functions for Wiring & Arduino
 Copyright (c) 2010 Hernando Barragan.  All right reserved.

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\ctype.h" 1 3



# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 5 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\ctype.h" 2 3

extern "C" {

int isalnum (int __c);
int isalpha (int __c);
int iscntrl (int __c);
int isdigit (int __c);
int isgraph (int __c);
int islower (int __c);
int isprint (int __c);
int ispunct (int __c);
int isspace (int __c);
int isupper (int __c);
int isxdigit (int __c);
int tolower (int __c);
int toupper (int __c);


int isblank (int __c);



int isascii (int __c);
int toascii (int __c);
# 43 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\ctype.h" 3
const

extern char *__ctype_ptr__;
# 108 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\ctype.h" 3
/* For C++ backward-compatibility only.  */
extern const char _ctype_[];

}
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WCharacter.h" 2


extern "C" {


// WCharacter.h prototypes

inline boolean isAlphaNumeric(int c) __attribute__((always_inline));
inline boolean isAlpha(int c) __attribute__((always_inline));
inline boolean isAscii(int c) __attribute__((always_inline));
inline boolean isWhitespace(int c) __attribute__((always_inline));
inline boolean isControl(int c) __attribute__((always_inline));
inline boolean isDigit(int c) __attribute__((always_inline));
inline boolean isGraph(int c) __attribute__((always_inline));
inline boolean isLowerCase(int c) __attribute__((always_inline));
inline boolean isPrintable(int c) __attribute__((always_inline));
inline boolean isPunct(int c) __attribute__((always_inline));
inline boolean isSpace(int c) __attribute__((always_inline));
inline boolean isUpperCase(int c) __attribute__((always_inline));
inline boolean isHexadecimalDigit(int c) __attribute__((always_inline));
inline int toAscii(int c) __attribute__((always_inline));
inline int toLowerCase(int c) __attribute__((always_inline));
inline int toUpperCase(int c)__attribute__((always_inline));



// Checks for an alphanumeric character.
// It is equivalent to (isalpha(c) || isdigit(c)).
inline boolean isAlphaNumeric(int c)
{
  return ( isalnum(c) == 0 ? 0x0 : 0x1);
}


// Checks for an alphabetic character.
// It is equivalent to (isupper(c) || islower(c)).
inline boolean isAlpha(int c)
{
  return ( isalpha(c) == 0 ? 0x0 : 0x1);
}


// Checks whether c is a 7-bit unsigned char value
// that fits into the ASCII character set.
inline boolean isAscii(int c)
{
/*  return ( isascii(c) == 0 ? false : true); */
  return ( (c & ~0x7f) != 0 ? 0x0 : 0x1);
}


// Checks for a blank character, that is, a space or a tab.
inline boolean isWhitespace(int c)
{
  return ( isblank (c) == 0 ? 0x0 : 0x1);
}


// Checks for a control character.
inline boolean isControl(int c)
{
  return ( iscntrl (c) == 0 ? 0x0 : 0x1);
}


// Checks for a digit (0 through 9).
inline boolean isDigit(int c)
{
  return ( isdigit (c) == 0 ? 0x0 : 0x1);
}


// Checks for any printable character except space.
inline boolean isGraph(int c)
{
  return ( isgraph (c) == 0 ? 0x0 : 0x1);
}


// Checks for a lower-case character.
inline boolean isLowerCase(int c)
{
  return (islower (c) == 0 ? 0x0 : 0x1);
}


// Checks for any printable character including space.
inline boolean isPrintable(int c)
{
  return ( isprint (c) == 0 ? 0x0 : 0x1);
}


// Checks for any printable character which is not a space
// or an alphanumeric character.
inline boolean isPunct(int c)
{
  return ( ispunct (c) == 0 ? 0x0 : 0x1);
}


// Checks for white-space characters. For the avr-libc library,
// these are: space, formfeed ('\f'), newline ('\n'), carriage
// return ('\r'), horizontal tab ('\t'), and vertical tab ('\v').
inline boolean isSpace(int c)
{
  return ( isspace (c) == 0 ? 0x0 : 0x1);
}


// Checks for an uppercase letter.
inline boolean isUpperCase(int c)
{
  return ( isupper (c) == 0 ? 0x0 : 0x1);
}


// Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7
// 8 9 a b c d e f A B C D E F.
inline boolean isHexadecimalDigit(int c)
{
  return ( isxdigit (c) == 0 ? 0x0 : 0x1);
}


// Converts c to a 7-bit unsigned char value that fits into the
// ASCII character set, by clearing the high-order bits.
inline int toAscii(int c)
{
/*  return toascii (c); */
  return (c & 0x7f);
}


// Warning:
// Many people will be unhappy if you use this function.
// This function will convert accented letters into random
// characters.

// Converts the letter c to lower case, if possible.
inline int toLowerCase(int c)
{
  return tolower (c);
}


// Converts the letter c to upper case, if possible.
inline int toUpperCase(int c)
{
  return toupper (c);
}


}
# 107 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 1 3
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WString.h" 2
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 1 3
/*
 * string.h
 *
 * Definitions for memory and string functions.
 */
# 28 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WString.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/avr/pgmspace.h" 1
/*
  pgmspace.h - Definitions for compatibility with AVR pgmspace macros

  Copyright (c) 2015 Arduino LLC

  Based on work of Paul Stoffregen on Teensy 3 (http://pjrc.com)

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE
*/




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 17 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 2 3


# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 412 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 20 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 2 3

/* Don't use __STDINT_EXP test since GCC's stdint.h provides different
   macros than newlib's stdint.h. */
# 32 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 3
/* 8-bit types */
# 78 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 3
/* 16-bit types */
# 124 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 3
/* 32-bit types */
# 175 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 3
/* 64-bit types */
# 229 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 3
/* max-bit types */
# 254 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 3
/* ptr types */
# 280 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 3
typedef struct {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;


extern "C" {


extern intmax_t imaxabs(intmax_t j);
extern imaxdiv_t imaxdiv(intmax_t numer, intmax_t denomer);
extern intmax_t strtoimax(const char *, char **, int);
extern uintmax_t strtoumax(const char *, char **, int);
extern intmax_t wcstoimax(const wchar_t *, wchar_t **, int);
extern uintmax_t wcstoumax(const wchar_t *, wchar_t **, int);


}
# 31 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/avr/pgmspace.h" 2







typedef void prog_void;
typedef char prog_char;
typedef unsigned char prog_uchar;
typedef int8_t prog_int8_t;
typedef uint8_t prog_uint8_t;
typedef int16_t prog_int16_t;
typedef uint16_t prog_uint16_t;
typedef int32_t prog_int32_t;
typedef uint32_t prog_uint32_t;
# 30 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WString.h" 2

// When compiling programs with this class, the following gcc parameters
// dramatically increase performance and memory (RAM) efficiency, typically
// with little or no increase in code size.
//     -felide-constructors
//     -std=c++0x

class __FlashStringHelper;


// An inherited class for holding the result of a concatenation.  These
// result objects are assumed to be writable by subsequent concatenations.
class StringSumHelper;

// The string class
class String
{
 // use a function pointer to allow for "if (s)" without the
 // complications of an operator bool(). for more information, see:
 // http://www.artima.com/cppsource/safebool.html
 typedef void (String::*StringIfHelperType)() const;
 void StringIfHelper() const {}

public:
 // constructors
 // creates a copy of the initial value.
 // if the initial value is null or invalid, or if memory allocation
 // fails, the string will be marked as invalid (i.e. "if (s)" will
 // be false).
 String(const char *cstr = "");
 String(const String &str);
 String(const __FlashStringHelper *str);

 String(String &&rval);
 String(StringSumHelper &&rval);

 explicit String(char c);
 explicit String(unsigned char, unsigned char base=10);
 explicit String(int, unsigned char base=10);
 explicit String(unsigned int, unsigned char base=10);
 explicit String(long, unsigned char base=10);
 explicit String(unsigned long, unsigned char base=10);
 explicit String(float, unsigned char decimalPlaces=2);
 explicit String(double, unsigned char decimalPlaces=2);
 ~String(void);

 // memory management
 // return true on success, false on failure (in which case, the string
 // is left unchanged).  reserve(0), if successful, will validate an
 // invalid string (i.e., "if (s)" will be true afterwards)
 unsigned char reserve(unsigned int size);
 inline unsigned int length(void) const {return len;}

 // creates a copy of the assigned value.  if the value is null or
 // invalid, or if the memory allocation fails, the string will be 
 // marked as invalid ("if (s)" will be false).
 String & operator = (const String &rhs);
 String & operator = (const char *cstr);
 String & operator = (const __FlashStringHelper *str);

 String & operator = (String &&rval);
 String & operator = (StringSumHelper &&rval);


 // concatenate (works w/ built-in types)

 // returns true on success, false on failure (in which case, the string
 // is left unchanged).  if the argument is null or invalid, the 
 // concatenation is considered unsucessful.  
 unsigned char concat(const String &str);
 unsigned char concat(const char *cstr);
 unsigned char concat(char c);
 unsigned char concat(unsigned char c);
 unsigned char concat(int num);
 unsigned char concat(unsigned int num);
 unsigned char concat(long num);
 unsigned char concat(unsigned long num);
 unsigned char concat(float num);
 unsigned char concat(double num);
 unsigned char concat(const __FlashStringHelper * str);

 // if there's not enough memory for the concatenated value, the string
 // will be left unchanged (but this isn't signalled in any way)
 String & operator += (const String &rhs) {concat(rhs); return (*this);}
 String & operator += (const char *cstr) {concat(cstr); return (*this);}
 String & operator += (char c) {concat(c); return (*this);}
 String & operator += (unsigned char num) {concat(num); return (*this);}
 String & operator += (int num) {concat(num); return (*this);}
 String & operator += (unsigned int num) {concat(num); return (*this);}
 String & operator += (long num) {concat(num); return (*this);}
 String & operator += (unsigned long num) {concat(num); return (*this);}
 String & operator += (float num) {concat(num); return (*this);}
 String & operator += (double num) {concat(num); return (*this);}
 String & operator += (const __FlashStringHelper *str){concat(str); return (*this);}

 friend StringSumHelper & operator + (const StringSumHelper &lhs, const String &rhs);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const char *cstr);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, char c);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned char num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, float num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, double num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const __FlashStringHelper *rhs);

 // comparison (only works w/ Strings and "strings")
 operator StringIfHelperType() const { return buffer ? &String::StringIfHelper : 0; }
 int compareTo(const String &s) const;
 unsigned char equals(const String &s) const;
 unsigned char equals(const char *cstr) const;
 unsigned char operator == (const String &rhs) const {return equals(rhs);}
 unsigned char operator == (const char *cstr) const {return equals(cstr);}
 unsigned char operator != (const String &rhs) const {return !equals(rhs);}
 unsigned char operator != (const char *cstr) const {return !equals(cstr);}
 unsigned char operator < (const String &rhs) const;
 unsigned char operator > (const String &rhs) const;
 unsigned char operator <= (const String &rhs) const;
 unsigned char operator >= (const String &rhs) const;
 unsigned char equalsIgnoreCase(const String &s) const;
 unsigned char startsWith( const String &prefix) const;
 unsigned char startsWith(const String &prefix, unsigned int offset) const;
 unsigned char endsWith(const String &suffix) const;

 // character acccess
 char charAt(unsigned int index) const;
 void setCharAt(unsigned int index, char c);
 char operator [] (unsigned int index) const;
 char& operator [] (unsigned int index);
 void getBytes(unsigned char *buf, unsigned int bufsize, unsigned int index=0) const;
 void toCharArray(char *buf, unsigned int bufsize, unsigned int index=0) const
  {getBytes((unsigned char *)buf, bufsize, index);}
 const char * c_str() const { return buffer; }

 // search
 int indexOf( char ch ) const;
 int indexOf( char ch, unsigned int fromIndex ) const;
 int indexOf( const String &str ) const;
 int indexOf( const String &str, unsigned int fromIndex ) const;
 int lastIndexOf( char ch ) const;
 int lastIndexOf( char ch, unsigned int fromIndex ) const;
 int lastIndexOf( const String &str ) const;
 int lastIndexOf( const String &str, unsigned int fromIndex ) const;
 String substring( unsigned int beginIndex ) const { return substring(beginIndex, len); };
 String substring( unsigned int beginIndex, unsigned int endIndex ) const;

 // modification
 void replace(char find, char replace);
 void replace(const String& find, const String& replace);
 void remove(unsigned int index);
 void remove(unsigned int index, unsigned int count);
 void toLowerCase(void);
 void toUpperCase(void);
 void trim(void);

 // parsing/conversion
 long toInt(void) const;
 float toFloat(void) const;

protected:
 char *buffer; // the actual char array
 unsigned int capacity; // the array length minus one (for the '\0')
 unsigned int len; // the String length (not counting the '\0')
protected:
 void init(void);
 void invalidate(void);
 unsigned char changeBuffer(unsigned int maxStrLen);
 unsigned char concat(const char *cstr, unsigned int length);

 // copy and move
 String & copy(const char *cstr, unsigned int length);
 String & copy(const __FlashStringHelper *pstr, unsigned int length);

 void move(String &rhs);

};

class StringSumHelper : public String
{
public:
 StringSumHelper(const String &s) : String(s) {}
 StringSumHelper(const char *p) : String(p) {}
 StringSumHelper(char c) : String(c) {}
 StringSumHelper(unsigned char num) : String(num) {}
 StringSumHelper(int num) : String(num) {}
 StringSumHelper(unsigned int num) : String(num) {}
 StringSumHelper(long num) : String(num) {}
 StringSumHelper(unsigned long num) : String(num) {}
 StringSumHelper(float num) : String(num) {}
 StringSumHelper(double num) : String(num) {}
};
# 108 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WMath.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




extern long random( long ) ;
extern long random( long, long ) ;
extern void randomSeed( uint32_t dwSeed ) ;
extern long map( long, long, long, long, long ) ;

extern uint16_t makeWord( uint16_t w ) ;
extern uint16_t makeWord( uint8_t h, uint8_t l ) ;
# 109 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/HardwareSerial.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 23 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/HardwareSerial.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Stream.h" 1
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  parsing functions based on TextFinder library by Michael Margolis
*/




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 26 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Stream.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Print.h" 1
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Print.h" 2
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 1 3
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *	@(#)stdio.h	5.3 (Berkeley) 3/15/86
 */

/*
 * NB: to fit things in six character monocase externals, the
 * stdio code uses the prefix `__s' for stdio objects, typically
 * followed by a three-character attempt at a mnemonic.
 */




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 30 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 2 3





# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 412 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 36 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 2 3


# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stdarg.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 39 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 2 3

/*
 * <sys/reent.h> defines __FILE, _fpos_t.
 * They must be defined there because struct _reent needs them (and we don't
 * want reent.h to include this file.
 */

# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 47 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 1 3
/* unified sys/types.h: 
   start with sef's sysvi386 version.
   merge go32 version -- a few ifdefs.
   h8300hms, h8300xray, and sysvnecv70 disagree on the following types:

   typedef int gid_t;
   typedef int uid_t;
   typedef int dev_t;
   typedef int ino_t;
   typedef int mode_t;
   typedef int caddr_t;

   however, these aren't "reasonable" values, the sysvi386 ones make far 
   more sense, and should work sufficiently well (in particular, h8300 
   doesn't have a stat, and the necv70 doesn't matter.) -- eichin
 */



# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 21 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 2 3




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\_types.h" 1 3
/*
 *  $Id$
 */
# 26 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 2 3
# 61 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\_types.h" 1 3
/* ANSI C namespace clean utility typedefs */

/* This file defines various typedefs needed by the system calls that support
   the C library.  Basically, they're just the POSIX versions with an '_'
   prepended.  This file lives in the `sys' directory so targets can provide
   their own if desired (or they can put target dependant conditionals here).
*/
# 62 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 2 3







# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 70 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 2 3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\types.h" 1 3



/*
 *  The following section is RTEMS specific and is needed to more
 *  closely match the types defined in the BSD machine/types.h.
 *  This is needed to let the RTEMS/BSD TCP/IP stack compile.
 */
# 19 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\machine\\types.h" 3
typedef long int __off_t;
typedef int __pid_t;

__extension__ typedef long long int __loff_t;
# 71 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 2 3

/* To ensure the stat struct's layout doesn't change when sizeof(int), etc.
   changes, we assume sizeof short and long never change and have all types
   used to define struct stat use them and not int where possible.
   Where not possible, _ST_INTxx are used.  It would be preferable to not have
   such assumptions, but until the extra fluff is necessary, it's avoided.
   No 64 bit targets use stat yet.  What to do about them is postponed
   until necessary.  */
# 91 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 3
/* also defined in mingw/gmon.h and in w32api/winsock[2].h */

typedef unsigned char u_char;



typedef unsigned short u_short;



typedef unsigned int u_int;



typedef unsigned long u_long;





typedef unsigned short ushort; /* System V compatibility */
typedef unsigned int uint; /* System V compatibility */
typedef unsigned long ulong; /* System V compatibility */



typedef unsigned long /* clock() */ clock_t;




typedef long /* time() */ time_t;





/* Time Value Specification Structures, P1003.1b-1993, p. 261 */

struct timespec {
  time_t tv_sec; /* Seconds */
  long tv_nsec; /* Nanoseconds */
};


struct itimerspec {
  struct timespec it_interval; /* Timer period */
  struct timespec it_value; /* Timer expiration */
};


typedef long daddr_t;



typedef char * caddr_t;
# 155 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 3
typedef unsigned short ino_t;
# 176 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 3
/*
 * All these should be machine specific - right now they are all broken.
 * However, for all of Cygnus' embedded targets, we want them to all be
 * the same.  Otherwise things like sizeof (struct stat) might depend on
 * how the file was compiled (e.g. -mint16 vs -mint32, etc.).
 */


typedef _off_t off_t;
typedef __dev_t dev_t;
typedef __uid_t uid_t;
typedef __gid_t gid_t;





typedef int pid_t;







typedef long key_t;

typedef _ssize_t ssize_t;
# 217 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 3
typedef unsigned int mode_t __attribute__ ((__mode__ (__SI__)));




typedef unsigned short nlink_t;

/* We don't define fd_set and friends if we are compiling POSIX
   source, or if we have included (or may include as indicated
   by __USE_W32_SOCKETS) the W32api winsock[2].h header which
   defines Windows versions of them.   Note that a program which
   includes the W32api winsock[2].h header must know what it is doing;
   it must not call the cygwin32 select function.
*/



/*
 * Select uses bit masks of file descriptors in longs.
 * These macros manipulate such bit fields (the filesystem macros use chars).
 * FD_SETSIZE may be defined by the user, but the default here
 * should be >= NOFILE (param.h).
 */




typedef long fd_mask;





/* We use a macro for fd_set so that including Sockets.h afterwards
   can work.  */
typedef struct _types_fd_set {
 fd_mask fds_bits[(((64)+(((sizeof (fd_mask) * 8 /* number of bits in a byte */) /* bits per mask */)-1))/((sizeof (fd_mask) * 8 /* number of bits in a byte */) /* bits per mask */))];
} _types_fd_set;
# 275 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 3
typedef unsigned long clockid_t;




typedef unsigned long timer_t;



typedef unsigned long useconds_t;
typedef long suseconds_t;

# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 288 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 2 3


/* Cygwin will probably never have full posix compliance due to little things
 * like an inability to set the stackaddress. Cygwin is also using void *  
 * pointers rather than structs to ensure maximum binary compatability with
 * previous releases.
 * This means that we don't use the types defined here, but rather in
 * <cygwin/types.h>
 */
# 485 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 3
/* POSIX Barrier Types */
# 497 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\types.h" 3
/* POSIX Spin Lock Types */






/* POSIX Reader/Writer Lock Types */
# 48 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 2 3

extern "C" {

typedef __FILE FILE;




typedef _fpos_t fpos_t;





# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\stdio.h" 1 3




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 6 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\sys\\stdio.h" 2 3

/* Internal locking macros, used to protect stdio functions.  In the
   general case, expand to nothing. Use __SSTR flag in FILE _flags to
   detect if FILE is private to sprintf/sscanf class of functions; if
   set then do nothing as lock is not initialised. */
# 63 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 2 3





 /* RD and WR are never simultaneously asserted */
# 84 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
/* _flags2 flags */


/*
 * The following three definitions are for ANSI C, which took them
 * from System V, which stupidly took internal interface macros and
 * made them official arguments to setvbuf(), without renaming them.
 * Hence, these ugly _IOxxx names are *supposed* to appear in user code.
 *
 * Although these happen to match their counterparts above, the
 * implementation does not rely on that (so these could be renumbered).
 */
# 150 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
/*
 * Functions defined in ANSI C standard.
 */
# 162 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
FILE * tmpfile (void);
char * tmpnam (char *);
int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *, const char *, FILE *);
void setbuf (FILE *, char *);
int setvbuf (FILE *, char *, int, size_t);
int fprintf (FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int fscanf (FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int rtl_printf (const char *, ...) __attribute__ ((__format__ (__printf__, 1, 2)))
                                                            ;
int scanf (const char *, ...) __attribute__ ((__format__ (__scanf__, 1, 2)))
                                                           ;
int sscanf (const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int vfprintf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)))
                                                            ;
int vsprintf (char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int fgetc (FILE *);
char * fgets (char *, int, FILE *);
int fputc (int, FILE *);
int fputs (const char *, FILE *);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void * , size_t _size, size_t _n, FILE *);
size_t fwrite (const void * , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *, fpos_t *);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char * _name, const char * _type);
int rtl_sprintf (char *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int remove (const char *);
int rename (const char *, const char *);
# 230 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
int fseeko (FILE *, off_t, int);
off_t ftello ( FILE *);




int asiprintf (char **, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
char * asniprintf (char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
char * asnprintf (char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int asprintf (char **, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;

int diprintf (int, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;

int fcloseall (void);
int fiprintf (FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int fiscanf (FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int iprintf (const char *, ...) __attribute__ ((__format__ (__printf__, 1, 2)))
                                                            ;
int iscanf (const char *, ...) __attribute__ ((__format__ (__scanf__, 1, 2)))
                                                           ;
int siprintf (char *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int siscanf (const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int snprintf (char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int sniprintf (char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
char * tempnam (const char *, const char *);
int vasiprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int vasprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vdiprintf (int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vfiprintf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vfiscanf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int vfscanf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int viprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)))
                                                            ;
int viscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)))
                                                           ;
int vscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)))
                                                           ;
int vsiprintf (char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vsiscanf (const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int vsniprintf (char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int vsnprintf (char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int vsscanf (const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;



/*
 * Routines in POSIX 1003.1:2001.
 */



FILE * fdopen (int, const char *);

int fileno (FILE *);
int getw (FILE *);
int pclose (FILE *);
FILE * popen (const char *, const char *);
int putw (int, FILE *);
void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);
int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);


/*
 * Routines in POSIX 1003.1:200x.
 */




int dprintf (int, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;

FILE * fmemopen (void *, size_t, const char *);
/* getdelim - see __getdelim for now */
/* getline - see __getline for now */
FILE * open_memstream (char **, size_t *);



int vdprintf (int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;



/*
 * Recursive versions of the above.
 */

int _asiprintf_r (struct _reent *, char **, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
char * _asnprintf_r (struct _reent *, char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
int _asprintf_r (struct _reent *, char **, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _diprintf_r (struct _reent *, int, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _dprintf_r (struct _reent *, int, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *, int, FILE *);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _fiscanf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
FILE * _fmemopen_r (struct _reent *, void *, size_t, const char *);
FILE * _fopen_r (struct _reent *, const char *, const char *);
FILE * _freopen_r (struct _reent *, const char *, const char *, FILE *);
int _fprintf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *, FILE *);
size_t _fread_r (struct _reent *, void * , size_t _size, size_t _n, FILE *);
int _fscanf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void * , size_t _size, size_t _n, FILE *);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int _iscanf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *, const char *_old, const char *_new)
                                          ;
int _scanf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int _siprintf_r (struct _reent *, char *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _siscanf_r (struct _reent *, const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
int _snprintf_r (struct _reent *, char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
int _sprintf_r (struct _reent *, char *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _sscanf_r (struct _reent *, const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vdprintf_r (struct _reent *, int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _vfprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vfscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int _vprintf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int _vscanf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
int _vsnprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
int _vsprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vsscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;

/* Other extensions.  */

int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);
# 505 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
/*
 * Routines internal to the implementation.
 */

int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);

/*
 * Stdio function-access interface.
 */
# 533 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
FILE *funopen (const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie))





                                   ;
FILE *_funopen_r (struct _reent *, const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie))





                                   ;







typedef ssize_t cookie_read_function_t(void *__cookie, char *__buf, size_t __n);
typedef ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
     size_t __n);




typedef int cookie_seek_function_t(void *__cookie, off_t *__off, int __whence);

typedef int cookie_close_function_t(void *__cookie);
typedef struct
{
  /* These four struct member names are dictated by Linux; hopefully,
     they don't conflict with any macros.  */
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
FILE *fopencookie (void *__cookie, const char *__mode, cookie_io_functions_t __functions)
                                                         ;
FILE *_fopencookie_r (struct _reent *, void *__cookie, const char *__mode, cookie_io_functions_t __functions)
                                                         ;



/*
 * The __sfoo macros are here so that we can 
 * define function versions in the C library.
 */
# 626 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
/*
 * This has been tuned to generate reasonable code on the vax using pcc
 */
# 670 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
/* fast always-buffered version, true iff error */
# 685 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdio.h" 3
}
# 25 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Print.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Print.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Printable.h" 1
/*
  Printable.h - Interface class that allows printing of complex types
  Copyright (c) 2011 Adrian McEwen.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\stdlib.h" 1 3
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Printable.h" 2

class Print;

/** The Printable class provides a way for new classes to allow themselves to be printed.
    By deriving from Printable and implementing the printTo method, it will then be possible
    for users to print out instances of this class by passing them into the usual
    Print::print and Print::println methods.
*/

class Printable
{
  public:
    virtual size_t printTo(Print& p) const = 0;
};
# 28 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Print.h" 2






class Print
{
  private:
    int write_error;
    size_t printNumber(unsigned long, uint8_t);
    size_t printFloat(double, uint8_t);
  protected:
    void setWriteError(int err = 1) { write_error = err; }
  public:
    Print() : write_error(0) {}

    int getWriteError() { return write_error; }
    void clearWriteError() { setWriteError(0); }

    virtual size_t write(uint8_t) = 0;
    size_t write(const char *str) {
      if (str == __null) return 0;
      return write((const uint8_t *)str, strlen(str));
    }
    virtual size_t write(const uint8_t *buffer, size_t size);
    size_t write(const char *buffer, size_t size) {
      return write((const uint8_t *)buffer, size);
    }

    size_t print(const __FlashStringHelper *);
    size_t print(const String &);
    size_t print(const char[]);
    size_t print(char);
    size_t print(unsigned char, int = 10);
    size_t print(int, int = 10);
    size_t print(unsigned int, int = 10);
    size_t print(long, int = 10);
    size_t print(unsigned long, int = 10);
    size_t print(double, int = 2);
    size_t print(const Printable&);

    size_t println(const __FlashStringHelper *);
    size_t println(const String &s);
    size_t println(const char[]);
    size_t println(char);
    size_t println(unsigned char, int = 10);
    size_t println(int, int = 10);
    size_t println(unsigned int, int = 10);
    size_t println(long, int = 10);
    size_t println(unsigned long, int = 10);
    size_t println(double, int = 2);
    size_t println(const Printable&);
    size_t println(void);
};
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Stream.h" 2

// compatability macros for testing
/*
#define   getInt()            parseInt()
#define   getInt(skipChar)    parseInt(skipchar)
#define   getFloat()          parseFloat()
#define   getFloat(skipChar)  parseFloat(skipChar)
#define   getString( pre_string, post_string, buffer, length)
readBytesBetween( pre_string, terminator, buffer, length)
*/

class Stream : public Print
{
  protected:
    unsigned long _timeout; // number of milliseconds to wait for the next char before aborting timed read
    unsigned long _startMillis; // used for timeout measurement
    int timedRead(); // private method to read stream with timeout
    int timedPeek(); // private method to peek stream with timeout
    int peekNextDigit(); // returns the next numeric digit in the stream or -1 if timeout

  public:
    virtual int available() = 0;
    virtual int read() = 0;
    virtual int peek() = 0;
    virtual void flush() = 0;

    Stream() {_timeout=1000;}

// parsing methods

  void setTimeout(unsigned long timeout); // sets maximum milliseconds to wait for stream data, default is 1 second

  bool find(char *target); // reads data from the stream until the target string is found
  bool find(uint8_t *target) { return find ((char *)target); }
  // returns true if target string is found, false if timed out (see setTimeout)

  bool find(char *target, size_t length); // reads data from the stream until the target string of given length is found
  bool find(uint8_t *target, size_t length) { return find ((char *)target, length); }
  // returns true if target string is found, false if timed out

  bool findUntil(char *target, char *terminator); // as find but search ends if the terminator string is found
  bool findUntil(uint8_t *target, char *terminator) { return findUntil((char *)target, terminator); }

  bool findUntil(char *target, size_t targetLen, char *terminate, size_t termLen); // as above but search ends if the terminate string is found
  bool findUntil(uint8_t *target, size_t targetLen, char *terminate, size_t termLen) {return findUntil((char *)target, targetLen, terminate, termLen); }


  long parseInt(); // returns the first valid (long) integer value from the current position.
  // initial characters that are not digits (or the minus sign) are skipped
  // integer is terminated by the first character that is not a digit.

  float parseFloat(); // float version of parseInt

  size_t readBytes( char *buffer, size_t length); // read chars from stream into buffer
  size_t readBytes( uint8_t *buffer, size_t length) { return readBytes((char *)buffer, length); }
  // terminates if length characters have been read or timeout (see setTimeout)
  // returns the number of characters placed in the buffer (0 means no valid data found)

  size_t readBytesUntil( char terminator, char *buffer, size_t length); // as readBytes with terminator character
  size_t readBytesUntil( char terminator, uint8_t *buffer, size_t length) { return readBytesUntil(terminator, (char *)buffer, length); }
  // terminates if length characters have been read, timeout, or if the terminator character  detected
  // returns the number of characters placed in the buffer (0 means no valid data found)

  // Arduino String functions to be added here
  String readString();
  String readStringUntil(char terminator);

  protected:
  long parseInt(char skipChar); // as above but the given skipChar is ignored
  // as above but the given skipChar is ignored
  // this allows format characters (typically commas) in values to be ignored

  float parseFloat(char skipChar); // as above but the given skipChar is ignored

  struct MultiTarget {
    const char *str; // string you're searching for
    size_t len; // length of string you're searching for
    size_t index; // index used by the search routine.
  };

  // This allows you to search for an arbitrary number of strings.
  // Returns index of the target that is found first or -1 if timeout occurs.
  int findMulti(struct MultiTarget *targets, int tCount);
};
# 25 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/HardwareSerial.h" 2

class HardwareSerial : public Stream
{
  public:
    virtual void begin(unsigned long);
    virtual void end();
    virtual int available(void) = 0;
    virtual int peek(void) = 0;
    virtual int read(void) = 0;
    virtual void flush(void) = 0;
    virtual size_t write(uint8_t) = 0;
    using Print::write; // pull in write(str) and write(buf, size) from Print
    virtual operator bool() = 0;
};

extern void serialEventRun(void) __attribute__((weak));
# 110 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_pulse.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C" {


/*
 * \brief Measures the length (in microseconds) of a pulse on the pin; state is HIGH
 * or LOW, the type of pulse to measure.  Works on pulses from 2-3 microseconds
 * to 3 minutes in length, but must be called at least a few dozen microseconds
 * before the start of the pulse.
 */
extern uint32_t pulseIn( uint32_t ulPin, uint32_t ulState, uint32_t ulTimeout = 1000000L );



}
# 111 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2



// Include board variant
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\variants\\rtl8195a/variant.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/






/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 29 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\variants\\rtl8195a/variant.h" 2
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stdarg.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stdarg.h" 3 4
/* Define __gnuc_va_list.  */






/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 55 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stdarg.h" 3 4
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type, 
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
# 85 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\lib\\gcc\\arm-none-eabi\\4.8.3\\include\\stdarg.h" 3 4
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */

/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */

/* The macro _VA_LIST is used in SCO Unix 3.2.  */

/* The macro _VA_LIST_T_H is used in the Bull dpx2  */

/* The macro __va_list__ is used by BeOS.  */

typedef __gnuc_va_list va_list;
# 30 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\variants\\rtl8195a/variant.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/LOGUARTClass.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/HardwareSerial.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 23 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/LOGUARTClass.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/RingBuffer.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/






// Define constants and variables for buffering incoming serial data.  We're
// using a ring buffer (I think), in which head is the index of the location
// to which to write the next incoming character and tail is the index of the
// location from which to read.


class RingBuffer
{
  public:
    volatile uint8_t _aucBuffer[128] ;
    volatile int _iHead ;
    volatile int _iTail ;

  public:
    RingBuffer( void ) ;
    void store_char( uint8_t c ) ;
} ;
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/LOGUARTClass.h" 2

class LOGUARTClass : public HardwareSerial
{
  public:
    LOGUARTClass(int dwIrq, RingBuffer* pRx_buffer );

    void begin(const uint32_t dwBaudRate);
    void end(void);
    int available(void);
    int peek(void);
    int read(void);
    void flush(void);
    size_t write(const uint8_t c);


    void IrqHandler(void);

    using Print::write; // pull in write(str) and write(buf, size) from Print

    operator bool() { return 0x1; }; // UART always active

  protected:
    void init(const uint32_t dwBaudRate, const uint32_t config);

    RingBuffer *_rx_buffer;

    int _dwIrq;

  private:
    friend bool Serial_available();
};

extern LOGUARTClass Serial;
# 32 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\variants\\rtl8195a/variant.h" 2



extern "C"{


/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/





}


/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/



extern LOGUARTClass Serial;
//extern USARTClass Serial1;
//extern USARTClass Serial2;
//extern USARTClass Serial3;

//#include "UARTClass1.h"
//extern UARTClass1 Serial1;
# 116 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C" {


/**
 *
 */
extern void initVariant( void ) ;
extern void init( void ) ;

/**
 * \brief Returns the number of milliseconds since the Arduino board began running the current program.
 *
 * This number will overflow (go back to zero), after approximately 50 days.
 *
 * \return Number of milliseconds since the program started (uint32_t)
 */
extern uint32_t millis( void ) ;

/**
 * \brief Returns the number of microseconds since the Arduino board began running the current program.
 *
 * This number will overflow (go back to zero), after approximately 70 minutes. On 16 MHz Arduino boards
 * (e.g. Duemilanove and Nano), this function has a resolution of four microseconds (i.e. the value returned is
 * always a multiple of four). On 8 MHz Arduino boards (e.g. the LilyPad), this function has a resolution
 * of eight microseconds.
 *
 * \note There are 1,000 microseconds in a millisecond and 1,000,000 microseconds in a second.
 */
extern uint32_t micros( void ) ;

/**
 * \brief Pauses the program for the amount of time (in miliseconds) specified as parameter.
 * (There are 1000 milliseconds in a second.)
 *
 * \param dwMs the number of milliseconds to pause (uint32_t)
 */
extern void delay( uint32_t dwMs ) ;
extern void delayMicroseconds(uint32_t usec);



}
# 118 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_digital.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





 extern "C" {




/**
 * \brief Configures the specified pin to behave either as an input or an output. See the description of digital pins for details.
 *
 * \param ulPin The number of the pin whose mode you wish to set
 * \param ulMode Either INPUT or OUTPUT
 */
extern void pinMode( uint32_t dwPin, uint32_t dwMode ) ;

/**
 * \brief Write a HIGH or a LOW value to a digital pin.
 *
 * If the pin has been configured as an OUTPUT with pinMode(), its voltage will be set to the
 * corresponding value: 5V (or 3.3V on 3.3V boards) for HIGH, 0V (ground) for LOW.
 *
 * If the pin is configured as an INPUT, writing a HIGH value with digitalWrite() will enable an internal
 * 20K pullup resistor (see the tutorial on digital pins). Writing LOW will disable the pullup. The pullup
 * resistor is enough to light an LED dimly, so if LEDs appear to work, but very dimly, this is a likely
 * cause. The remedy is to set the pin to an output with the pinMode() function.
 *
 * \note Digital pin PIN_LED is harder to use as a digital input than the other digital pins because it has an LED
 * and resistor attached to it that's soldered to the board on most boards. If you enable its internal 20k pull-up
 * resistor, it will hang at around 1.7 V instead of the expected 5V because the onboard LED and series resistor
 * pull the voltage level down, meaning it always returns LOW. If you must use pin PIN_LED as a digital input, use an
 * external pull down resistor.
 *
 * \param dwPin the pin number
 * \param dwVal HIGH or LOW
 */
extern void digitalWrite( uint32_t dwPin, uint32_t dwVal ) ;

/**
 * \brief Reads the value from a specified digital pin, either HIGH or LOW.
 *
 * \param ulPin The number of the digital pin you want to read (int)
 *
 * \return HIGH or LOW
 */
extern int digitalRead( uint32_t ulPin ) ;

/**************************** Extend API by RTK ***********************************/
extern uint32_t digitalPinToPort( uint32_t ulPin );
extern uint32_t digitalPinToBitMask( uint32_t ulPin );
extern uint32_t digitalSetIrqHandler( uint32_t ulPin, void (*handler)(uint32_t id, uint32_t event) );
extern uint32_t digitalClearIrqHandler( uint32_t ulPin );
extern void pinRemoveMode(uint32_t ulPin);


}
# 119 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_analog.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C" {


/* Analog pin mapping */




/* DAC pin mapping */


/*
 * \brief SAM3 products have only one reference for ADC
 */
typedef enum _eAnalogReference
{
  AR_DEFAULT,
} eAnalogReference ;

/*
 * \brief Configures the reference voltage used for analog input (i.e. the value used as the top of the input range).
 * This function is kept only for compatibility with existing AVR based API.
 *
 * \param ulMmode Should be set to AR_DEFAULT.
 */
extern void analogReference( eAnalogReference ulMode ) ;

/*
 * \brief Writes an analog value (PWM wave) to a pin.
 *
 * \param ulPin
 * \param ulValue
 */
extern void analogWrite( uint32_t ulPin, uint32_t ulValue ) ;

/*
 * \brief Reads the value from the specified analog pin.
 *
 * \param ulPin
 *
 * \return Read value from selected pin, if no error.
 */
extern uint32_t analogRead( uint32_t ulPin ) ;

/*
 * \brief Set the resolution of analogRead return values. Default is 10 bits (range from 0 to 1023).
 *
 * \param res
 */
extern void analogReadResolution(int res);

/*
 * \brief Set the resolution of analogWrite parameters. Default is 8 bits (range from 0 to 255).
 *
 * \param res
 */
extern void analogWriteResolution(int res);

extern void analogOutputInit( void ) ;

extern void noTone(uint32_t ulPin);

extern void analogWritePeriod(int us);


}
# 120 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WInterrupts.h" 1
/*
  Copyright (c) 2011-2012 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 23 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/WInterrupts.h" 2


extern "C" {


extern void attachInterrupt(uint32_t pin, void (*callback)(void), uint32_t mode);

extern void detachInterrupt(uint32_t pin);


}
# 121 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h" 1
/** @file wiring_os.h */

/** 

 * @defgroup wiring_os wiring_os

 * OS realted function for thread, signal, software timer, semaphore

 * @{

 */

extern "C" {




/**

 * @defgroup os_status os_status

 * Redefinition from enum osStatus

 * @{

 */
# 23 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
/** function completed; no error or event occurred. */

/** function completed; signal event occurred. */

/** function completed; message event occurred. */

/** function completed; mail event occurred. */

/** function completed; timeout occurred. */

/** parameter error: a mandatory parameter was missing or specified an incorrect object. */

/** resource not available: a specified resource was not available. */

/** resource not available within given time: a specified resource was not available within the timeout period. */

/** not allowed in ISR context: the function cannot be called from interrupt service routines. */

/** function called multiple times from ISR with same object. */

/** system cannot determine priority or thread has illegal priority. */

/** system is out of memory: it was impossible to allocate or reserve memory for the operation. */

/** value of a parameter is out of range. */

/** unspecified RTOS error: run-time error but no other error message fits. */

/** @} */ // end of group os_status

/**

 * @defgroup os_priority os_priority

 * Redefinition from enum osPriority

 * @{

 */
# 58 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
/** priority: idle (lowest) */

/** priority: low */

/** priority: below normal */

/** priority: normal (default) */

/** priority: above normal */

/** priority: high */

/** priority: realtime (highest) */

/** @} */ // end of group os_priority


/**

 * @ingroup wiring_os

 * @brief default stack size

 *

 * It is suggest that thread is assigned stack size more than DEFAULT_STACK_SIZE

 */
# 84 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
/**

 * @ingroup wiring_os

 * @struct os_event_t

 * Redefine osEvent in cmsis_os.h

 */
# 89 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
typedef struct {
  uint32_t status; ///< status code: event or error information
  union {
    uint32_t v; ///< message as 32-bit value
    void *p; ///< message or mail as void pointer
    int32_t signals; ///< signal flags
  } value; ///< event value
  union {
    void *mail_id; ///< mail id obtained by osMailCreate
    void *message_id; ///< message id obtained by osMessageCreate
  } def; ///< event definition
} os_event_t;

/**

 * @defgroup thread_management thread_management

 * Thread management include create, get thread id, terminate, yield, and set/get priority

 **/
# 107 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
/**

 * @ingroup thread_management

 * @brief Create a thread and add it to Active Threads and set it to state READY.

 *

 * @param[in] task Function pointer which is the thread body. It should not run into the end of function unless os_thread_terminate is invoked

 * @param[in] argument the data pointer which brings to task

 * @param[in] priority The underlying os is FreeRTOS. It executes tasks with highest priority which are not in idle state.\n

 *     If there are more than 2 tasks to be executed, then they share the time slice.

 * @param[in] stack_size The stack_size is used as memory heap only for this task. \n

 *     The local variables and call stacks would occupy this heap. Please make sure the the stack_size is big enough to avoid curroption

 * @return The thread id which is used in thread operation and signaling.

 */
# 119 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_thread_create(void (*task)(const void *argument), void *argument, int priority, uint32_t stack_size);

/**

 * @ingroup thread_management

 * @brief Return the thread ID of the current running thread.

 *

 * @return Current thread id which calls os_thread_get_id

 */
# 127 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_thread_get_id( void );

/**

 * @ingroup thread_management

 * @brief Terminate execution of a thread and remove it from Active Threads.

 *

 * Thread should not ended without terminate first

 *

 * @param[in] thread_id Terminate the thread with specific thread_id

 * @return os_status code

 */
# 138 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_thread_terminate(uint32_t thread_id);

/**

 * @ingroup thread_management

 * @brief Pass control to next thread that is in state \b READY.

 *

 * By default the minimal execution unit is 1 millisecond. In a scenario that if a thread with smaller want to handout execution right to a thread with 

 * higher priority immediately without waiting for the ending of current 1 millisecond, then invoke os_thread_yield can transfer exection right to 

 * OS's idle task and check which is the next execution thread.

 *

 * @return os_status code

 */
# 150 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_thread_yield(void);

/**

 * @ingroup thread_management

 * @brief Change priority of an active thread.

 *

 * @param[in] thread_id The target thread with the thread id to be changed

 * @param[in] priority The updated priority

 * @return os_status code

 */
# 160 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_thread_set_priority(uint32_t thread_id, int priority);

/**

 * @ingroup thread_management

 * @brief Get current priority of an active thread.

 *

 * @param[in] thread_id The target thread with the thread id to be searched

 * @return os_priority

 */
# 169 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern int os_thread_get_priority(uint32_t thread_id);

/** 

 * @defgroup signal_management signal_management

 * Signaling between threads include set, clear, and wait

 */
# 176 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
/**

 * @ingroup signal_management

 * @brief Set the specified Signal Flags of an active thread.

 *

 * @param[in] thread_id Send signal to a thread with the thread id

 * @param[in] signals the signals to be send

 * @return os_status code

 */
# 184 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern int32_t os_signal_set(uint32_t thread_id, int32_t signals);

/**

 * @ingroup signal_management

 * @brief Clear the specified Signal Flags of an active thread.

 *

 * @param[in] thread_id Clear signal to a thread with the thread id

 * @param[in] signals The signals to be clear

 * @return os_status code

 */
# 194 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern int32_t os_signal_clear(uint32_t thread_id, int32_t signals);

/**

 * @ingroup signal_management

 * @brief Wait for one or more Signal Flags to become signaled for the current \b RUNNING thread.

 * 

 * @param[in] signals the signals to be wait

 * @param[in] millisec the timeout value if no signal comes in. Fill in 0xFFFFFFFF for infinite wait.

 * @return os_status code

 */
# 204 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern os_event_t os_signal_wait(int32_t signals, uint32_t millisec);

/**

 * @defgroup timer_management timer_management

 * Software timer management include create, start, stop, delete.

 */
# 211 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
/** 

 * @ingroup timer_management 

 * @brief specify timer type that invoke only once

 */
# 217 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
/** 

 * @ingroup timer_management 

 * @brief specify timer type that invoke periodically

 */
# 223 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
/**

 * @ingroup timer_management

 * @brief Create a timer.

 *

 * @param[in] callback The function to be invoke when timer timeout

 * @param[in] isPeriodic \b OS_TIMER_ONCE or \b OS_TIMER_PERIODIC

 * @param[in] argument The argument that is bring into callback function

 * @return timer id

 */
# 232 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_timer_create(void (*callback)(void const *argument), uint8_t isPeriodic, void *argument);

/**

 * @ingroup timer_management

 * @brief Start or restart a timer.

 *

 * @param[in] timer_id The timer id obtained from by os_timer_create

 * @param[in] millisec The delays after timer starts

 * @return os_status code

 */
# 242 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_timer_start (uint32_t timer_id, uint32_t millisec);

/**

 * @ingroup timer_management

 * @brief Stop the timer.

 *

 * @param[in] timer_id The timer id obtained from by os_timer_create

 * @return os_status code

 */
# 251 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_timer_stop (uint32_t timer_id);

/**

 * @ingroup timer_management

 * @brief Delete a timer that was created by os_timer_create

 *

 * @param[in] timer_id The timer id obtained from by os_timer_create

 * @return os_status code

 */
# 260 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_timer_delete(uint32_t timer_id);

/**

 * @defgroup semaphore_management semaphore_management

 * Semaphore API between threads include create, wait, release, delete.

 */
# 267 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
/**

 * @ingroup semaphore_management

 * @brief Create and Initialize a Semaphore object used for managing resources

 *

 * @param[in] count The number of available resources

 * @return semaphore ID

 */
# 274 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_semaphore_create(int32_t count);

/**

 * @ingroup semaphore_management

 * @brief Wait until a Semaphore token becomes available

 *

 * @param[in] semaphore_id semaphore id obtained from os_semaphore_create

 * @param[in] millisec timeout value

 * @return os_status code

 */
# 284 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern int32_t os_semaphore_wait(uint32_t semaphore_id, uint32_t millisec);

/**

 * @ingroup semaphore_management

 * @brief Release a Semaphore token

 *

 * @param[in] semaphore_id semaphore id obtained from os_semaphore_create

 * @return os_status code

 */
# 293 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_semaphore_release(uint32_t semaphore_id);

/**

 * @ingroup semaphore_management

 * @brief Delete a Semaphore that was created by os_semaphore_create.

 *

 * @param[in] semaphore_id semaphore id obtained from os_semaphore_create

 * @return os_status code

 */
# 302 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_os.h"
extern uint32_t os_semaphore_delete(uint32_t semaphore_id);


}




/** @} */ // end of group wiring_os
# 122 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_watchdog.h" 1
/** @file wiring_watchdog.h */

/** 

 * @defgroup wiring_watchdog wiring_watchdog

 * watchdog is used for reboot system when device hang

 * @{

 */

extern "C" {


/** @defgroup watchdog */

/**

 * @ingroup watchdog

 * Feed watchdog to avoid it barks

 */
# 22 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_watchdog.h"
extern void wdt_reset();

/**

 * @ingroup watchdog

 * @brief Enable watchdog

 *

 * After enbling watchdog, user defined code needs to reset it before watchdog barks. Otherwise it would make system reboot.

 *

 * @param[in] timeout_ms The timeout value that watchdog barks. The maximum value is 8 seconds.

 */
# 32 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_watchdog.h"
extern void wdt_enable(uint32_t timeout_ms);

/**

 * @ingroup watchdog

 * Disable watchdog

 */
# 38 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_watchdog.h"
extern void wdt_disable();


}




/** @} */ // end of group wiring_watchdog
# 123 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/wiring_shift.h" 1
/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





 extern "C" {


/*
 * \brief
 */
extern uint32_t shiftIn( uint32_t ulDataPin, uint32_t ulClockPin, uint32_t ulBitOrder ) ;


/*
 * \brief
 */
extern void shiftOut( uint32_t ulDataPin, uint32_t ulClockPin, uint32_t ulBitOrder, uint32_t ulVal ) ;



}
# 124 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 2

// C++ functions



// WMath prototypes
extern long random( long ) ;
extern long random( long, long ) ;
extern void randomSeed( uint32_t dwSeed ) ;
extern long map( long, long, long, long, long ) ;

void tone(uint32_t ulPin, unsigned int frequency, unsigned long duration = 0);



//
// custom defined
//

//#include "Thread.h"
//#include "DAC1.h"
# 2 "D:\\arduino_prg\\IOT\\pms3003\\build\\sketch\\pms3003.ino.cpp" 2
# 1 "D:\\arduino_prg\\IOT\\pms3003\\build\\sketch\\pms3003.ino.cpp"
# 1 "D:\\arduino_prg\\IOT\\pms3003\\pms3003.ino"
/*
  This example demonstrate how to read pm2.5 value on PMS 3003 air condition sensor

  PMS 3003 pin map is as follow:
    PIN1  :VCC, connect to 5V
    PIN2  :GND
    PIN3  :SET, 0:Standby mode, 1:operating mode
    PIN4  :RXD :Serial RX
    PIN5  :TXD :Serial TX
    PIN6  :RESET
    PIN7  :NC
    PIN8  :NC

  In this example, we only use Serial to get PM 2.5 value.

  The circuit:
   RX is digital pin 0 (connect to TX of PMS 3003)
   TX is digital pin 1 (connect to RX of PMS 3003)

*/
/*
  This example demonstrate how to upload sensor data to MQTT server of LASS.
  It include features:
     (1) Connect to WiFi
     (2) Retrieve NTP time with WiFiUDP
     (3) Get PM 2.5 value from PMS3003 air condition sensor with UART
     (4) Connect to MQTT server and try reconnect when disconnect

  You can find more information at this site:

     https://lass.hackpad.com/LASS-README-DtZ5T6DXLbu

*/

//  http://nrl.iis.sinica.edu.tw/LASS/show.php?device_id=FT1_074B3
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\string.h" 1 3
/*
 * string.h
 *
 * Definitions for memory and string functions.
 */
# 37 "D:\\arduino_prg\\IOT\\pms3003\\pms3003.ino" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/Wire.h" 1
/*
 * TwoWire.h - TWI/I2C library for Arduino Due
 * Copyright (c) 2011 Cristian Maglie <c.maglie@arduino.cc>
 * All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */




# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Stream.h" 1
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  parsing functions based on TextFinder library by Michael Margolis
*/
# 25 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/Wire.h" 2



class TwoWire : public Stream {
public:
 TwoWire( uint32_t dwSDAPin, uint32_t dwSCLPin );
 void begin();
 void begin(uint8_t);
 void begin(int);
 void setClock(uint32_t);
 void beginTransmission(uint8_t);
 void beginTransmission(int);
 uint8_t endTransmission(void);
    uint8_t endTransmission(uint8_t);
 uint8_t requestFrom(uint8_t, uint8_t);
    uint8_t requestFrom(uint8_t, uint8_t, uint8_t);
 uint8_t requestFrom(uint8_t, uint8_t, uint32_t, uint8_t, uint8_t);
 uint8_t requestFrom(int, int);
    uint8_t requestFrom(int, int, int);
 virtual size_t write(uint8_t);
 virtual size_t write(const uint8_t *, size_t);
 virtual int available(void);
 virtual int read(void);
 virtual int peek(void);
 virtual void flush(void);
 void onReceive(void(*)(int));
 void onRequest(void(*)(void));

    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
    using Print::write;

 void onService(void);

private:
 // RX Buffer
 uint8_t rxBuffer[32];
 uint8_t rxBufferIndex;
 uint8_t rxBufferLength;

 // TX Buffer
 uint8_t txAddress;
 uint8_t txBuffer[32];
 uint8_t txBufferLength;

 // Service buffer
 uint8_t srvBuffer[32];
 uint8_t srvBufferIndex;
 uint8_t srvBufferLength;

 // Callback user functions
 void (*onRequestCallback)(void);
 void (*onReceiveCallback)(int);

 // Called before initialization
 void (*onBeginCallback)(void);

 // Called after deinitialization
 void (*onEndCallback)(void);

 uint32_t SDA_pin;
 uint32_t SCL_pin;

 void* pI2C;

 // TWI state
 enum TwoWireStatus {
  UNINITIALIZED,
  MASTER_IDLE,
  MASTER_SEND,
  MASTER_RECV,
  SLAVE_IDLE,
  SLAVE_RECV,
  SLAVE_SEND
 };
 TwoWireStatus status;

 // TWI clock frequency
 static const uint32_t TWI_CLOCK = 100000;
 uint32_t twiClock;

 // Timeouts (
 static const uint32_t RECV_TIMEOUT = 100000;
 static const uint32_t XMIT_TIMEOUT = 100000;
};

extern TwoWire Wire;
extern TwoWire Wire1;
extern TwoWire Wire2;
# 39 "D:\\arduino_prg\\IOT\\pms3003\\pms3003.ino" 2
// LCD I2C Library，從這裡可以下載：
// https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/PowerManagement.h" 1



# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 5 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/PowerManagement.h" 2

/** 

 * @class PowerManagementClass PowerManagement.h 

 * @brief Power management in Ameba

 */
# 10 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/PowerManagement.h"
class PowerManagementClass {
public:

    /**

     * @brief Allow OS automatically save power while idle

     *

     * As OS consider it would idle for more than 2s, it will invoke system suspend.

     * If wlan is associated with AP, than it will under asslociated idle state.

     */
# 19 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/PowerManagement.h"
    static void sleep();

    /**

     * @brief Disallow OS automatically save power while idle

     */
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/PowerManagement.h"
    static void active();

    /**

     * @brief Reserved PLL while sleep

     * 

     * Reserve PLL would keep FIFO of peripherals (Ex. UART) but cost more power (around 5mA).

     * If we don't reserve PLL, it saves more power but we might missing data because FIFO is turned of this way.

     *

     * @param[in] reserve true for reserved, false for non-reserved

     */
# 34 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/PowerManagement.h"
    static void setPllReserved(bool reserve);

    /**

     * @brief Enter deepsleep immediately

     *

     * Invoke deepsleep would make system enter deepsleep state immediately.

     * It's the state that saves most power.

     * As it wakeup from deepsleep, the system would behave just like reboot.

     *

     * @param[in] duration_ms wakeup after specific time in unit of millisecond

     */
# 45 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/PowerManagement.h"
    static void deepsleep(uint32_t duration_ms);

    /**

     * @brief Check if system is allowed enter any power save state

     *

     * The pin 18 (GPIOE_5) is designed as safe lock.

     * If pin 18 is HIGH, then we prevent Ameba enter any power save state.\n\n

     * Under any power save state, we are not able to flash image to Ameba.

     * Thus if user misuse deepsleep and make Ameba enter deepsleep immediately after boot up,

     * then he would find it's hard to flash image.

     * In this case, he can pull up pin 18.

     *

     * @return true if system not allowed enter any power save state, and false vise versa

     */
# 59 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/PowerManagement.h"
    static bool safeLock();

    /**

     * @brief Reboot system

     *

     * Reboot system in soft way. Some registers is not powered off in this case, but mostly we could regard this as reboot.

     */
# 66 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/PowerManagement.h"
    static void softReset();

private:
    static bool reservePLL;
};

extern PowerManagementClass PowerManagement;
# 42 "D:\\arduino_prg\\IOT\\pms3003\\pms3003.ino" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LiquidCrystal_I2C.h" 1
// ---------------------------------------------------------------------------
// Created by Francisco Malpartida on 20/08/11.
// Copyright 2011 - Under creative commons license 3.0:
//        Attribution-ShareAlike CC BY-SA
//
// This software is furnished "as is", without technical support, and with no 
// warranty, express or implied, as to its usefulness for any purpose.
//
// Thread Safe: No
// Extendable: Yes
//
// @file LiquidCrystal_I2C.h
// This file implements a basic liquid crystal library that comes as standard
// in the Arduino SDK but using an I2C IO extension board.
// 
// @brief 
// This is a basic implementation of the LiquidCrystal library of the
// Arduino SDK. The original library has been reworked in such a way that 
// this class implements the all methods to command an LCD based
// on the Hitachi HD44780 and compatible chipsets using I2C extension
// backpacks such as the I2CLCDextraIO with the PCF8574* I2C IO Expander ASIC.
//
// The functionality provided by this class and its base class is identical
// to the original functionality of the Arduino LiquidCrystal library.
//
//
// @author F. Malpartida - fmalpartida@gmail.com
// ---------------------------------------------------------------------------


# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 32 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LiquidCrystal_I2C.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Print.h" 1
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 33 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LiquidCrystal_I2C.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/I2CIO.h" 1
// ---------------------------------------------------------------------------
// Created by Francisco Malpartida on 20/08/11.
// Copyright 2011 - Under creative commons license 3.0:
//        Attribution-ShareAlike CC BY-SA
//
// This software is furnished "as is", without technical support, and with no 
// warranty, express or implied, as to its usefulness for any purpose.
//
// Thread Safe: No
// Extendable: Yes
//
// @file I2CIO.h
// This file implements a basic IO library using the PCF8574 I2C IO Expander
// chip.
// 
// @brief 
// Implement a basic IO library to drive the PCF8574* I2C IO Expander ASIC.
// The library implements basic IO general methods to configure IO pin direction
// read and write uint8_t operations and basic pin level routines to set or read
// a particular IO port.
//
// @version API 1.0.0
//
// @author F. Malpartida - fmalpartida@gmail.com
// ---------------------------------------------------------------------------




# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 31 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/I2CIO.h" 2



/*!
 @class
 @abstract    I2CIO
 @discussion  Library driver to control PCF8574 based ASICs. Implementing
 library calls to set/get port through I2C bus.
 */

class I2CIO
{
public:
   /*!
    @method     
    @abstract   Constructor method
    @discussion Class constructor constructor. 
    */
   I2CIO ( );

   /*!
    @method
    @abstract   Initializes the device.
    @discussion This method initializes the device allocating an I2C address.
    This method is the first method that should be call prior to calling any
    other method form this class. On initialization all pins are configured
    as INPUT on the device.
    
    @param      i2cAddr: I2C Address where the device is located.
    @result     1 if the device was initialized correctly, 0 otherwise
    */
   int begin ( uint8_t i2cAddr );

   /*!
    @method
    @abstract   Sets the mode of a particular pin.
    @discussion Sets the mode of a particular pin to INPUT, OUTPUT. digitalWrite
    has no effect on pins which are not declared as output.
    
    @param      pin[in] Pin from the I2C IO expander to be configured. Range 0..7
    @param      dir[in] Pin direction (INPUT, OUTPUT).
    */
   void pinMode ( uint8_t pin, uint8_t dir );

   /*!
    @method
    @abstract   Sets all the pins of the device in a particular direction.
    @discussion This method sets all the pins of the device in a particular
    direction. This method is useful to set all the pins of the device to be
    either inputs or outputs.
    @param      dir[in] Direction of all the pins of the device (INPUT, OUTPUT).
    */
   void portMode ( uint8_t dir );

   /*!
    @method
    @abstract   Reads all the pins of the device that are configured as INPUT.
    @discussion Reads from the device the status of the pins that are configured
    as INPUT. During initialization all pins are configured as INPUTs by default.
    Please refer to pinMode or portMode.
    
    @param      none
    */
   uint8_t read ( void );

   /*!
    @method
    @abstract   Read a pin from the device.
    @discussion Reads a particular pin from the device. To read a particular
    pin it has to be configured as INPUT. During initialization all pins are
    configured as INPUTs by default. Please refer to pinMode or portMode.
    
    @param      pin[in] Pin from the port to read its status. Range (0..7)
    @result     Returns the pin status (HIGH, LOW) if the pin is configured
    as an output, reading its value will always return LOW regardless of its
    real state.
    */
   uint8_t digitalRead ( uint8_t pin );

   /*!
    @method
    @abstract   Write a value to the device.
    @discussion Writes to a set of pins in the device. The value is the binary
    representation of all the pins in device. The value written is masked with 
    the configuration of the direction of the pins; to change the state of
    a particular pin with this method, such pin has to be configured as OUTPUT 
    using the portMode or pinMode methods. If no pins have been configured as
    OUTPUTs this method will have no effect.
    
    @param      value[in] value to be written to the device.
    @result     1 on success, 0 otherwise
    */
   int write ( uint8_t value );

   /*!
    @method
    @abstract   Writes a digital level to a particular pin.
    @discussion Write a level to the indicated pin of the device. For this 
    method to have effect, the pin has to be configured as OUTPUT using the
    pinMode or portMode methods.
    
    @param      pin[in] device pin to change level. Range (0..7).
    @para       level[in] logic level to set the pin at (HIGH, LOW).
    @result     1 on success, 0 otherwise.
    */
   int digitalWrite ( uint8_t pin, uint8_t level );



private:
   uint8_t _shadow; // Shadow output
   uint8_t _dirMask; // Direction mask
   uint8_t _i2cAddr; // I2C address
   bool _initialised; // Initialised object

  /*!
   @method
   @abstract   Check if I2C device is available.
   @discussion Checks to see if an I2C device is available at address i2cAddr.
   
   @param      i2cAddr[in] I2C address to check availability 
   @result     true if available, false otherwise.
   */
   bool isAvailable (uint8_t i2cAddr);

};
# 35 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LiquidCrystal_I2C.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LCD.h" 1
// ---------------------------------------------------------------------------
// Created by Francisco Malpartida on 20/08/11.
// Copyright 2011 - Under creative commons license 3.0:
//        Attribution-ShareAlike CC BY-SA
//
// This software is furnished "as is", without technical support, and with no 
// warranty, express or implied, as to its usefulness for any purpose.
//
// Thread Safe: No
// Extendable: Yes
//
// @file LCD.h
// This file implements a basic liquid crystal library that comes as standard
// in the Arduino SDK.
// 
// @brief 
// This is a basic implementation of the LiquidCrystal library of the
// Arduino SDK. This library is a refactored version of the one supplied
// in the Arduino SDK in such a way that it simplifies its extension
// to support other mechanism to communicate to LCDs such as I2C, Serial, SR, 
// The original library has been reworked in such a way that this will be
// the base class implementing all generic methods to command an LCD based
// on the Hitachi HD44780 and compatible chipsets.
//
// This base class is a pure abstract class and needs to be extended. As reference,
// it has been extended to drive 4 and 8 bit mode control, LCDs and I2C extension
// backpacks such as the I2CLCDextraIO using the PCF8574* I2C IO Expander ASIC.
//
// The functionality provided by this class and its base class is identical
// to the original functionality of the Arduino LiquidCrystal library.
//
// @version API 1.1.0
//
//
// @author F. Malpartida - fmalpartida@gmail.com
// ---------------------------------------------------------------------------






# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 44 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LCD.h" 2






# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 51 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LCD.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Print.h" 1
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 52 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LCD.h" 2


/*!
 @defined 
 @abstract   Performs a bitwise shift.
 @discussion Defines _BV bit shift which is very dependent macro defined by
 Atmel.

    \note The bit shift is performed by the compiler which then inserts the
    result into the code. Thus, there is no run-time overhead when using
    _BV().
*/




/*!
 @defined 
 @abstract   Enables disables fast waits for write operations for LCD
 @discussion If defined, the library will avoid doing un-necessary waits.
 this can be done, because the time taken by Arduino's slow digitalWrite
 operations. If fast digitalIO operations, comment this line out or undefine
 the mode.
 */




/*!
 @function
 @abstract   waits for a given time in microseconds (compilation dependent).
 @discussion Waits for a given time defined in microseconds depending on
 the FAST_MODE define. If the FAST_MODE is defined the call will return
 inmediatelly.
 @param      uSec[in] time in microseconds.
 @result     None
 */
inline static void waitUsec ( uint16_t uSec )
{

   delayMicroseconds ( uSec );

}


/*!
 @defined 
 @abstract   All these definitions shouldn't be used unless you are writing 
 a driver.
 @discussion All these definitions are for driver implementation only and
 shouldn't be used by applications.
 */
// LCD Commands
// ---------------------------------------------------------------------------
# 115 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LCD.h"
// flags for display entry mode
// ---------------------------------------------------------------------------





// flags for display on/off and cursor control
// ---------------------------------------------------------------------------







// flags for display/cursor shift
// ---------------------------------------------------------------------------





// flags for function set
// ---------------------------------------------------------------------------
# 148 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LCD.h"
// Define COMMAND and DATA LCD Rs (used by send method).
// ---------------------------------------------------------------------------





/*!
 @defined 
 @abstract   Defines the duration of the home and clear commands
 @discussion This constant defines the time it takes for the home and clear
 commands in the LCD - Time in microseconds.
 */


/*!
    @defined 
    @abstract   Backlight off constant declaration
    @discussion Used in combination with the setBacklight to swith off the
 LCD backlight. @set setBacklight
*/


/*!
 @defined 
 @abstract   Backlight on constant declaration
 @discussion Used in combination with the setBacklight to swith on the
 LCD backlight. @set setBacklight
 */



/*!
 @typedef 
 @abstract   Define backlight control polarity
 @discussion Backlight control polarity. @see setBacklightPin.
 */
typedef enum { POSITIVE, NEGATIVE } t_backlighPol;

class LCD : public Print
{
public:

   /*!
    @method
    @abstract   LiquidCrystal abstract constructor.
    @discussion LiquidCrystal class abstract constructor needed to create
    the base abstract class.
    */
   LCD ( );

   /*!
    @function
    @abstract   LCD initialization.
    @discussion Initializes the LCD to a given size (col, row). This methods
    initializes the LCD, therefore, it MUST be called prior to using any other
    method from this class.
    
    This method is abstract, a base implementation is available common to all LCD
    drivers. Should it not be compatible with some other LCD driver, a derived
    implementation should be done on the driver specif class.
    
    @param      cols[in] the number of columns that the display has
    @param      rows[in] the number of rows that the display has
    @param      charsize[in] character size, default==LCD_5x8DOTS
    */
   virtual void begin(uint8_t cols, uint8_t rows, uint8_t charsize = 0x00);

   /*!
    @function
    @abstract   Clears the LCD.
    @discussion Clears the LCD screen and positions the cursor in the upper-left 
    corner. 
    
    This operation is time consuming for the LCD.
    
    @param      none
    */
   void clear();

   /*!
    @function
    @abstract   Sets the cursor to the upper-left corner.
    @discussion Positions the cursor in the upper-left of the LCD. 
    That is, use that location in outputting subsequent text to the display. 
    To also clear the display, use the clear() function instead.
    
    This operation is time consuming for the LCD.
    
    @param      none
    */
   void home();

   /*!
    @function
    @abstract   Turns off the LCD display.
    @discussion Turns off the LCD display, without losing the text currently 
    being displayed on it.
    
    @param      none
    */
   void noDisplay();

   /*!
    @function
    @abstract   Turns on the LCD display.
    @discussion Turns on the LCD display, after it's been turned off with 
    noDisplay(). This will restore the text (and cursor location) that was on 
    the display prior to calling noDisplay().
    
    @param      none
    */
   void display();

   /*!
    @function
    @abstract   Turns off the blinking of the LCD cursor.
    
    @param      none
    */
   void noBlink();

   /*!
    @function
    @abstract   Display the cursor of the LCD.
    @discussion Display the blinking LCD cursor. If used in combination with 
    the cursor() function, the result will depend on the particular display.
    
    @param      none
    */
   void blink();

   /*!
    @function
    @abstract   Hides the LCD cursor.
    
    @param      none
    */
   void noCursor();

   /*!
    @function
    @abstract   Display the LCD cursor.
    @discussion Display the LCD cursor: an underscore (line) at the location 
    where the next character will be written.
    
    @param      none
    */
   void cursor();

   /*!
    @function
    @abstract   Scrolls the contents of the display (text and cursor) one space 
    to the left.
    
    @param      none
    */
   void scrollDisplayLeft();

   /*!
    @function
    @abstract   Scrolls the contents of the display (text and cursor) one space 
    to the right.
    
    @param      none
    */
   void scrollDisplayRight();

   /*!
    @function
    @abstract   Set the direction for text written to the LCD to left-to-right.
    @discussion Set the direction for text written to the LCD to left-to-right. 
    All subsequent characters written to the display will go from left to right, 
    but does not affect previously-output text.
    
    This is the default configuration.
    
    @param      none
    */
   void leftToRight();

   /*!
    @function
    @abstract   Set the direction for text written to the LCD to right-to-left.
    @discussion Set the direction for text written to the LCD to right-to-left. 
    All subsequent characters written to the display will go from right to left, 
    but does not affect previously-output text.
    
    left-to-right is the default configuration.
    
    @param      none
    */
   void rightToLeft();

   /*!
    @function
    @abstract   Moves the cursor one space to the left.
    @discussion 
    @param      none
    */
   void moveCursorLeft();


   /*!
    @function
    @abstract   Moves the cursor one space to the right.
    
    @param      none
    */
   void moveCursorRight();

   /*!
    @function
    @abstract   Turns on automatic scrolling of the LCD.
    @discussion Turns on automatic scrolling of the LCD. This causes each 
    character output to the display to push previous characters over by one 
    space. If the current text direction is left-to-right (the default), 
    the display scrolls to the left; if the current direction is right-to-left, 
    the display scrolls to the right. 
    This has the effect of outputting each new character to the same location on 
    the LCD.
    
    @param      none
    */
   void autoscroll();

   /*!
    @function
    @abstract   Turns off automatic scrolling of the LCD.
    @discussion Turns off automatic scrolling of the LCD, this is the default
    configuration of the LCD.
    
    @param      none
    */
   void noAutoscroll();

   /*!
    @function
    @abstract   Creates a custom character for use on the LCD.
    @discussion Create a custom character (glyph) for use on the LCD. 
    Most chipsets only support up to eight characters of 5x8 pixels. Therefore,
    this methods has been limited to locations (numbered 0 to 7). 
    
    The appearance of each custom character is specified by an array of eight 
    bytes, one for each row. The five least significant bits of each byte 
    determine the pixels in that row. To display a custom character on screen, 
    write()/print() its number, i.e. lcd.print (char(x)); // Where x is 0..7.
    
    @param      location[in] LCD memory location of the character to create
    (0 to 7)
    @param      charmap[in] the bitmap array representing each row of the character.
    */
   void createChar(uint8_t location, uint8_t charmap[]);
# 426 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LCD.h"
   /*!
    @function
    @abstract   Position the LCD cursor.
    @discussion Sets the position of the LCD cursor. Set the location at which 
    subsequent text written to the LCD will be displayed.
    
    @param      col[in] LCD column
    @param      row[in] LCD row - line.
    */
   void setCursor(uint8_t col, uint8_t row);

   /*!
    @function
    @abstract   Switch-on the LCD backlight.
    @discussion Switch-on the LCD backlight.
    The setBacklightPin has to be called before setting the backlight for
    this method to work. @see setBacklightPin. 
    */
   void backlight ( void );

   /*!
    @function
    @abstract   Switch-off the LCD backlight.
    @discussion Switch-off the LCD backlight.
    The setBacklightPin has to be called before setting the backlight for
    this method to work. @see setBacklightPin. 
    */
   void noBacklight ( void );

   /*!
    @function
    @abstract   Switch on the LCD module.
    @discussion Switch on the LCD module, it will switch on the LCD controller
    and the backlight. This method has the same effect of calling display and
    backlight. @see display, @see backlight
    */
   void on ( void );

   /*!
    @function
    @abstract   Switch off the LCD module.
    @discussion Switch off the LCD module, it will switch off the LCD controller
    and the backlight. This method has the same effect of calling noDisplay and
    noBacklight. @see display, @see backlight
    */
   void off ( void );

   //
   // virtual class methods
   // --------------------------------------------------------------------------
   /*!
    @function
    @abstract   Sets the pin to control the backlight.
    @discussion Sets the pin in the device to control the backlight.
    This method is device dependent and can be programmed on each subclass. An 
    empty function call is provided that does nothing.
    
    @param      value: pin associated to backlight control.
    @param      pol: backlight polarity control (POSITIVE, NEGATIVE)
    */
   virtual void setBacklightPin ( uint8_t value, t_backlighPol pol ) { };

   /*!
    @function
    @abstract   Sets the pin to control the backlight.
    @discussion Sets the pin in the device to control the backlight. The behaviour
    of this method is very dependent on the device. Some controllers support
    dimming some don't. Please read the actual header file for each individual
    device. The setBacklightPin method has to be called before setting the backlight
    or the adequate backlight control constructor.
    @see setBacklightPin.
    
    NOTE: The prefered methods to control the backlight are "backlight" and
    "noBacklight".
    
    @param      0..255 - the value is very dependent on the LCD. However, 
    BACKLIGHT_OFF will be interpreted as off and BACKLIGHT_ON will drive the
    backlight on.
    */
   virtual void setBacklight ( uint8_t value ) { };

   /*!
    @function
    @abstract   Writes to the LCD.
    @discussion This method writes character to the LCD in the current cursor
    position.
    
    This is the virtual write method, implemented in the Print class, therefore
    all Print class methods will end up calling this method.
    
    @param      value[in] Value to write to the LCD.
    */



   virtual size_t write(uint8_t value);





   using Print::write;


protected:
   // Internal LCD variables to control the LCD shared between all derived
   // classes.
   uint8_t _displayfunction; // LCD_5x10DOTS or LCD_5x8DOTS, LCD_4BITMODE or 
                              // LCD_8BITMODE, LCD_1LINE or LCD_2LINE
   uint8_t _displaycontrol; // LCD base control command LCD on/off, blink, cursor
                              // all commands are "ored" to its contents.
   uint8_t _displaymode; // Text entry mode to the LCD
   uint8_t _numlines; // Number of lines of the LCD, initialized with begin()
   uint8_t _cols; // Number of columns in the LCD
   t_backlighPol _polarity; // Backlight polarity

private:
   /*!
    @function
    @abstract   Send a command to the LCD.
    @discussion This method sends a command to the LCD by setting the Register
    select line of the LCD.
    
    This command shouldn't be used to drive the LCD, only to implement any other
    feature that is not available on this library.
    
    @param      value[in] Command value to send to the LCD (COMMAND, DATA or
    FOUR_BITS).
    */
   void command(uint8_t value);

   /*!
    @function
    @abstract   Send a particular value to the LCD.
    @discussion Sends a particular value to the LCD. This is a pure abstract
    method, therefore, it is implementation dependent of each derived class how
    to physically write to the LCD.
    
    Users should never call this method.
    
    @param      value[in] Value to send to the LCD.
    @result     mode LOW - write to the LCD CGRAM, HIGH - write a command to
    the LCD.
    */



   virtual void send(uint8_t value, uint8_t mode) = 0;


};
# 36 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\Wire/LiquidCrystal_I2C.h" 2


class LiquidCrystal_I2C : public LCD
{
public:

   /*!
    @method     
    @abstract   Class constructor. 
    @discussion Initializes class variables and defines the I2C address of the
    LCD. The constructor does not initialize the LCD.
    
    @param      lcd_Addr[in] I2C address of the IO expansion module. For I2CLCDextraIO,
    the address can be configured using the on board jumpers.
    */
   LiquidCrystal_I2C (uint8_t lcd_Addr);
   // Constructor with backlight control
   LiquidCrystal_I2C (uint8_t lcd_Addr, uint8_t backlighPin, t_backlighPol pol);

   /*!
    @method     
    @abstract   Class constructor. 
    @discussion Initializes class variables and defines the I2C address of the
    LCD. The constructor does not initialize the LCD.
    
    @param      lcd_Addr[in] I2C address of the IO expansion module. For I2CLCDextraIO,
    the address can be configured using the on board jumpers.
    @param      En[in] LCD En (Enable) pin connected to the IO extender module
    @param      Rw[in] LCD Rw (Read/write) pin connected to the IO extender module
    @param      Rs[in] LCD Rs (Reset) pin connected to the IO extender module
    */
   LiquidCrystal_I2C( uint8_t lcd_Addr, uint8_t En, uint8_t Rw, uint8_t Rs);
   // Constructor with backlight control
   LiquidCrystal_I2C(uint8_t lcd_Addr, uint8_t En, uint8_t Rw, uint8_t Rs,
                     uint8_t backlighPin, t_backlighPol pol);

   /*!
    @method     
    @abstract   Class constructor. 
    @discussion Initializes class variables and defines the I2C address of the
    LCD. The constructor does not initialize the LCD.
    
    @param      lcd_Addr[in] I2C address of the IO expansion module. For I2CLCDextraIO,
    the address can be configured using the on board jumpers.
    @param      En[in] LCD En (Enable) pin connected to the IO extender module
    @param      Rw[in] LCD Rw (Read/write) pin connected to the IO extender module
    @param      Rs[in] LCD Rs (Reset) pin connected to the IO extender module
    @param      d4[in] LCD data 0 pin map on IO extender module
    @param      d5[in] LCD data 1 pin map on IO extender module
    @param      d6[in] LCD data 2 pin map on IO extender module
    @param      d7[in] LCD data 3 pin map on IO extender module
    */
   LiquidCrystal_I2C(uint8_t lcd_Addr, uint8_t En, uint8_t Rw, uint8_t Rs,
                     uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7 );
   // Constructor with backlight control
   LiquidCrystal_I2C(uint8_t lcd_Addr, uint8_t En, uint8_t Rw, uint8_t Rs,
                     uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7,
                     uint8_t backlighPin, t_backlighPol pol);
   /*!
    @function
    @abstract   LCD initialization and associated HW.
    @discussion Initializes the LCD to a given size (col, row). This methods
    initializes the LCD, therefore, it MUST be called prior to using any other
    method from this class or parent class.
    
    The begin method can be overloaded if necessary to initialize any HW that 
    is implemented by a library and can't be done during construction, here
    we use the Wire class.
    
    @param      cols[in] the number of columns that the display has
    @param      rows[in] the number of rows that the display has
    @param      charsize[in] size of the characters of the LCD: LCD_5x8DOTS or
    LCD_5x10DOTS.
    */
   virtual void begin(uint8_t cols, uint8_t rows, uint8_t charsize = 0x00);

   /*!
    @function
    @abstract   Send a particular value to the LCD.
    @discussion Sends a particular value to the LCD for writing to the LCD or
    as an LCD command.
    
    Users should never call this method.
    
    @param      value[in] Value to send to the LCD.
    @param      mode[in] DATA - write to the LCD CGRAM, COMMAND - write a 
    command to the LCD.
    */
   virtual void send(uint8_t value, uint8_t mode);

   /*!
    @function
    @abstract   Sets the pin to control the backlight.
    @discussion Sets the pin in the device to control the backlight. This device
    doesn't support dimming backlight capability.
    
    @param      0: backlight off, 1..255: backlight on.
    */
   void setBacklightPin ( uint8_t value, t_backlighPol pol );

   /*!
    @function
    @abstract   Switch-on/off the LCD backlight.
    @discussion Switch-on/off the LCD backlight.
    The setBacklightPin has to be called before setting the backlight for
    this method to work. @see setBacklightPin.
    
    @param      value: backlight mode (HIGH|LOW)
    */
   void setBacklight ( uint8_t value );

private:

   /*!
    @method     
    @abstract   Initializes the LCD class
    @discussion Initializes the LCD class and IO expansion module.
    */
   int init();

   /*!
    @function
    @abstract   Initialises class private variables
    @discussion This is the class single point for initialising private variables.
    
    @param      lcd_Addr[in] I2C address of the IO expansion module. For I2CLCDextraIO,
    the address can be configured using the on board jumpers.
    @param      En[in] LCD En (Enable) pin connected to the IO extender module
    @param      Rw[in] LCD Rw (Read/write) pin connected to the IO extender module
    @param      Rs[in] LCD Rs (Reset) pin connected to the IO extender module
    @param      d4[in] LCD data 0 pin map on IO extender module
    @param      d5[in] LCD data 1 pin map on IO extender module
    @param      d6[in] LCD data 2 pin map on IO extender module
    @param      d7[in] LCD data 3 pin map on IO extender module
    */
   void config (uint8_t lcd_Addr, uint8_t En, uint8_t Rw, uint8_t Rs,
                uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7 );

   /*!
    @method     
    @abstract   Writes an 4 bit value to the LCD.
    @discussion Writes 4 bits (the least significant) to the LCD control data lines.
    @param      value[in] Value to write to the LCD
    @param      more[in]  Value to distinguish between command and data.
    COMMAND == command, DATA == data.
    */
   void write4bits(uint8_t value, uint8_t mode);

   /*!
    @method     
    @abstract   Pulse the LCD enable line (En).
    @discussion Sends a pulse of 1 uS to the Enable pin to execute an command
    or write operation.
    */
   void pulseEnable(uint8_t);


   uint8_t _Addr; // I2C Address of the IO expander
   uint8_t _backlightPinMask; // Backlight IO pin mask
   uint8_t _backlightStsMask; // Backlight status mask
   I2CIO _i2cio; // I2CIO PCF8574* expansion module driver I2CLCDextraIO
   uint8_t _En; // LCD expander word for enable pin
   uint8_t _Rw; // LCD expander word for R/W pin
   uint8_t _Rs; // LCD expander word for Register Select pin
   uint8_t _data_pins[4]; // LCD data lines

};
# 43 "D:\\arduino_prg\\IOT\\pms3003\\pms3003.ino" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\SoftwareSerial/SoftwareSerial.h" 1
/*

SoftwareSerial.h (formerly NewSoftSerial.h) - 

Multi-instance software serial library for Arduino/Wiring

-- Interrupt-driven receive and other improvements by ladyada

   (http://ladyada.net)

-- Tuning, circular buffer, derivation from class Print/Stream,

   multi-instance support, porting to 8MHz processors,

   various optimizations, PROGMEM delay tables, inverse logic and 

   direct port writing by Mikal Hart (http://www.arduiniana.org)

-- Pin change interrupt macros by Paul Stoffregen (http://www.pjrc.com)

-- 20MHz processor support by Garrett Mace (http://www.macetech.com)

-- ATmega1280/2560 support by Brett Hagman (http://www.roguerobotics.com/)



This library is free software; you can redistribute it and/or

modify it under the terms of the GNU Lesser General Public

License as published by the Free Software Foundation; either

version 2.1 of the License, or (at your option) any later version.



This library is distributed in the hope that it will be useful,

but WITHOUT ANY WARRANTY; without even the implied warranty of

MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU

Lesser General Public License for more details.



You should have received a copy of the GNU Lesser General Public

License along with this library; if not, write to the Free Software

Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA



The latest version of this library can always be found at

http://arduiniana.org.

*/
# 35 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\SoftwareSerial/SoftwareSerial.h"
# 1 "c:\\users\\user\\appdata\\local\\arduino15\\packages\\linkit\\tools\\arm-none-eabi-gcc\\4.8.3-2014q1\\arm-none-eabi\\include\\inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 36 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\SoftwareSerial/SoftwareSerial.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\cores\\arduino/Stream.h" 1
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  parsing functions based on TextFinder library by Michael Margolis
*/
# 37 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\SoftwareSerial/SoftwareSerial.h" 2

/******************************************************************************

* Definitions

******************************************************************************/
# 55 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\realtek\\hardware\\ameba\\1.1.4\\libraries\\SoftwareSerial/SoftwareSerial.h"
class SoftwareSerial : public Stream
{
private:
  void* pUART;
  uint8_t receivePin;
  uint8_t transmitPin;
  long speed;
  int data_bits;
  int parity;
  int stop_bits;
  int flowctrl;

  // Expressed as 4-cycle delays (must never be 0!)
  bool _buffer_overflow;

  uint32_t _receive_buffer_size;
  char *_receive_buffer;
  volatile uint8_t _receive_buffer_tail;
  volatile uint8_t _receive_buffer_head;

  friend void handle_interrupt(uint32_t id, uint32_t event);

  void (*availableCallback)(char c);

public:
  // public methods
  SoftwareSerial(uint8_t receivePin, uint8_t transmitPin, bool inverse_logic = 0x0);
  ~SoftwareSerial();
  void begin(long speed);
  bool listen();
  void end();
  bool isListening() { return pUART != __null; }
  bool stopListening();
  bool overflow() { bool ret = _buffer_overflow; if (ret) _buffer_overflow = 0x0; return ret; }
  int peek();

  virtual size_t write(uint8_t byte);
  virtual int read();
  virtual int available();
  virtual void flush();
  operator bool() { return 0x1; }

  using Print::write;

  /* Extend API provide by RTK */
public:
  void setBufferSize(uint32_t buffer_size);
  void setAvailableCallback(void (*callback)(char c));
  void begin(long speed, int data_bits, int parity, int stop_bits);
  void begin(long speed, int data_bits, int parity, int stop_bits, int flowctrl, int rtsPin, int ctsPin);
};
# 44 "D:\\arduino_prg\\IOT\\pms3003\\pms3003.ino" 2

SoftwareSerial mySerial(0, 1); // RX, TX


unsigned char buf[24];
int idx = 0;
int pm10 = 0;
int pm25 = 0;
int pm100 = 0;
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); // 設定 LCD I2C 位址
bool hasPm25Value = 0x0;
int ErrorCount = 0 ;


void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600); // PMS 3003 UART has baud rate 9600
  lcd.begin(20, 4); // 初始化 LCD，一行 20 的字元，共 4 行，預設開啟背光
  lcd.backlight(); // 開啟背光
  LCDClear() ;
  //  while(!Serial) ;


}

void loop()
{ // run over and over

  retrievePM25Value() ;

  if (hasPm25Value )
    ShowPM() ;

}


void ShowPM()
{

  lcd.setCursor(0, 3); // 設定游標位置在第一行行首
  lcd.print("             ");
  lcd.setCursor(0, 3); // 設定游標位置在第一行行首
  lcd.print("S:");
  lcd.print(pm25);
  lcd.print("/");
  lcd.print(pm10);
  lcd.print("/");
  lcd.print(pm100);

}

String print2HEX(int number) {
  String ttt ;
  if (number >= 0 && number < 16)
  {
    ttt = String("0") + String(number, 16);
  }
  else
  {
    ttt = String(number, 16);
  }
  return ttt ;
}
String print2digits(int number) {
  String ttt ;
  if (number >= 0 && number < 10)
  {
    ttt = String("0") + String(number);
  }
  else
  {
    ttt = String(number);
  }
  return ttt ;
}

String print4digits(int number) {
  String ttt ;
  ttt = String(number);
  return ttt ;
}




void retrievePM25Value()
{
  hasPm25Value = 0x0;
  int count = 0;
  int ckecksum = 0 ;
  int exptsum = 0 ;
  memset(buf, 0, 24);

  while (( mySerial.available()>0) && (count < 24) )
  {
    //    mySerial.readBytes(buf,pmsDataLen);
    buf[count] = mySerial.read();
    if (buf[0] == 0x42 && count == 0 )
    {
      count = 1 ;
      continue ;

    }
    if (buf[1] == 0x4d && count == 1 )
    {
      count = 2 ;
      continue ;

    }
    if (count >= 2 )
    {
      count++ ;
      if (count >= (24) )
      {
        hasPm25Value = 0x1 ;
        break ;
      }
      continue ;
    }

  }


  if (hasPm25Value )
  {
    for (int i = 0 ; i < (24 - 2) ; i++)
      ckecksum = ckecksum + buf[i] ;
    exptsum = ((unsigned int)buf[22] << 8 ) + ((unsigned int)buf[23]) ;
    if (ckecksum == exptsum)
    {
      hasPm25Value = 0x1 ;
    }
    else
    {
      hasPm25Value = 0x0 ;
      Serial.print("\n \n ERROR Check sum");
      Serial.print("\n Sensor Check sum is : ");
      Serial.print(exptsum);
      Serial.print(", \n And Data Check sum is :");
      Serial.print(ckecksum);
      Serial.println("");
      return ;
    }
    pm25 = ( buf[12] << 8 ) | buf[13];
    pm10 = ( buf[10] << 8 ) | buf[11];
    pm100 = ( buf[14] << 8 ) | buf[15];

    Serial.print("\n pm2.5: ");
    Serial.print(pm25);
    Serial.print(" ug/m3\t");
    Serial.print("pm1.0: ");
    Serial.print(pm10);
    Serial.print(" ug/m3\t");
    Serial.print("pm100: ");
    Serial.print(pm100);
    Serial.print(" ug/m3");
    Serial.println("");
  }


}


void SystemReboot()
{
  lcd.clear() ;
  lcd.print("Now Rebooting.....") ;
  delay(3000) ;
  PowerManagement.softReset() ;
}

void ShowError()
{
  lcd.setCursor(18, 0); // 設定游標位置在第一行行首
  lcd.print(ErrorCount) ;
}

void LCDClear()
{
   lcd.clear() ;
}

void ClearSerialBuffer()
{
while ( mySerial.available() >0)
    mySerial.read() ;
}
