//  This file was automatically generated on Sun Aug  8 13:43:48 2021
//  by libs/config/tools/generate.cpp
//  Copyright John Maddock 2002-21.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for the most recent version.//
//  Revision $Id$
//

#ifdef __has_include
#if __has_include(<version>)
#include <version>
#endif
#endif

#include <concepts>

#ifndef __cpp_lib_concepts
#error "Macro << __cpp_lib_concepts is not set"
#endif

#if __cpp_lib_concepts < 201806
#error "Macro __cpp_lib_concepts had too low a value"
#endif

int main( int, char *[] )
{
   return 0;
}

