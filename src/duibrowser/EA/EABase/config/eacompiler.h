/*
Copyright (C) 2009 Electronic Arts, Inc.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1.  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
2.  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
3.  Neither the name of Electronic Arts, Inc. ("EA") nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY ELECTRONIC ARTS AND ITS CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL ELECTRONIC ARTS OR ITS CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*-----------------------------------------------------------------------------
 * config/eacompiler.h
 *
 * Copyright (c) 2002 - 2005 Electronic Arts Inc. All rights reserved.
 * Maintained by Paul Pedriana, Maxis
 *
 *-----------------------------------------------------------------------------
 * Currently supported defines include:
 *     EA_COMPILER_GNUC
 *     EA_COMPILER_SN
 *     EA_COMPILER_MSVC
 *     EA_COMPILER_METROWERKS
 *     EA_COMPILER_INTEL
 *     EA_COMPILER_BORLANDC
 *     EA_COMPILER_IBM
 *     
 *     EA_COMPILER_VERSION = <integer>
 *     EA_COMPILER_NAME = <string>
 *     EA_COMPILER_STRING = <string>
 *     
 *     EA_COMPILER_NO_STATIC_CONSTANTS
 *     EA_COMPILER_NO_TEMPLATE_SPECIALIZATION
 *     EA_COMPILER_NO_TEMPLATE_PARTIAL_SPECIALIZATION
 *     EA_COMPILER_NO_MEMBER_TEMPLATES
 *     EA_COMPILER_NO_MEMBER_TEMPLATE_SPECIALIZATION
 *     EA_COMPILER_NO_TEMPLATE_TEMPLATES
 *     EA_COMPILER_NO_MEMBER_TEMPLATE_FRIENDS
 *     EA_COMPILER_NO_VOID_RETURNS
 *     EA_COMPILER_NO_COVARIANT_RETURN_TYPE
 *     EA_COMPILER_NO_DEDUCED_TYPENAME
 *     EA_COMPILER_NO_ARGUMENT_DEPENDENT_LOOKUP
 *     EA_COMPILER_NO_EXCEPTION_STD_NAMESPACE
 *     EA_COMPILER_NO_EXPLICIT_FUNCTION_TEMPLATE_ARGUMENTS
 *     EA_COMPILER_NO_EXCEPTIONS
 *     EA_COMPILER_NO_UNWIND
 *
 *-----------------------------------------------------------------------------
 *
 * Documentation
 *     EA_COMPILER_NO_STATIC_CONSTANTS
 *         Code such as this is legal, but some compilers fail to compile it:
 *             struct A{ static const a = 1; };
 *
 *     EA_COMPILER_NO_TEMPLATE_SPECIALIZATION
 *         Some compilers fail to allow template specialization, such as with this:
 *             template<class U> void DoSomething(U u);
 *             void DoSomething(int x);
 *
 *     EA_COMPILER_NO_TEMPLATE_PARTIAL_SPECIALIZATION
 *         Some compilers fail to allow partial template specialization, such as with this:
 *             template <class T, class Allocator> class vector{ };         // Primary templated class.
 *             template <class Allocator> class vector<bool, Allocator>{ }; // Partially specialized version.
 *
 *     EA_COMPILER_NO_MEMBER_TEMPLATES
 *         Some compilers fail to allow member template functions such as this:
 *             struct A{ template<class U> void DoSomething(U u); };
 *
 *     EA_COMPILER_NO_MEMBER_TEMPLATE_SPECIALIZATION
 *         Some compilers fail to allow member template specialization, such as with this:
 *             struct A{ 
 *                 template<class U> void DoSomething(U u);
 *                 void DoSomething(int x);
 *             };
 *
 *     EA_COMPILER_NO_TEMPLATE_TEMPLATES
 *         Code such as this is legal:
 *             template<typename T, template<typename> class U>
 *             U<T> SomeFunction(const U<T> x) { return x.DoSomething(); }
 *
 *     EA_COMPILER_NO_MEMBER_TEMPLATE_FRIENDS
 *         Some compilers fail to compile templated friends, as with this:
 *             struct A{ template<class U> friend class SomeFriend; };
 *         This is described in the C++ Standard at 14.5.3.
 *
 *     EA_COMPILER_NO_VOID_RETURNS
 *          This is legal C++:
 *              void DoNothing1(){ };
 *              void DoNothing2(){ return DoNothing1(); }
 *
 *     EA_COMPILER_NO_COVARIANT_RETURN_TYPE
 *         See the C++ standard sec 10.3,p5.
 *     
 *     EA_COMPILER_NO_DEDUCED_TYPENAME
 *         Some compilers don't support the use of 'typename' for 
 *         dependent types in deduced contexts, as with this:
 *             template <class T> void Function(T, typename T::type);
 *
 *     EA_COMPILER_NO_ARGUMENT_DEPENDENT_LOOKUP
 *         Also known as Koenig lookup. Basically, if you have a function
 *         that is a namespace and you call that function without prefixing
 *         it with the namespace the compiler should look at any arguments
 *         you pass to that function call and search their namespace *first* 
 *         to see if the given function exists there.
 *
 *     EA_COMPILER_NO_EXCEPTION_STD_NAMESPACE
 *         <exception> is in namespace std. Some std libraries fail to 
 *         put the contents of <exception> in namespace std. The following 
 *         code should normally be legal:
 *             void Function(){ std::terminate(); }
 *
 *     EA_COMPILER_NO_EXPLICIT_FUNCTION_TEMPLATE_ARGUMENTS
 *         Some compilers fail to execute DoSomething() properly, though they 
 *         succeed in compiling it, as with this:
 *             template <int i>
 *             bool DoSomething(int j){ return i == j; };
 *             DoSomething<1>(2);
 *
 *     EA_COMPILER_NO_EXCEPTIONS
 *         The compiler is configured to disallow the use of try/throw/catch
 *         syntax (often to improve performance). Use of such syntax in this 
 *         case will cause a compilation error. 
 *         
 *     EA_COMPILER_NO_UNWIND
 *         The compiler is configured to allow the use of try/throw/catch 
 *         syntax and behaviour but disables the generation of stack unwinding 
 *         code for responding to exceptions (often to improve performance).
 *
 *---------------------------------------------------------------------------*/

#ifndef INCLUDED_eacompiler_H
#define INCLUDED_eacompiler_H

    #ifndef INCLUDED_eaplatform_H
        #include "EABase/config/eaplatform.h"
    #endif

    // Note: This is used to generate the EA_COMPILER_STRING macros
    #ifndef INTERNAL_STRINGIZE
        #define INTERNAL_STRINGIZE(x) INTERNAL_PRIMITIVE_STRINGIZE(x)
    #endif
    #ifndef INTERNAL_PRIMITIVE_STRINGIZE
        #define INTERNAL_PRIMITIVE_STRINGIZE(x) #x
    #endif


    // SN
    #if defined(__SNC__) // SN Systems compiler 
        // Note that there are two versions of the SN compiler, one that is 
        // GNUC-based and a newer one which is based on an EDG (Edison Design
        // Group) front-end with a back-end code generator made by SN.
        // The EDG-based SN compiler uses "GCC compatibility mode" and thus
        // defines __GNUC__ but isn't really GNUC. Also, as of this writing
        // it appears that the SN compiler may arrive with MSVC-compatibility
        // mode in addition as well. Thus, we define EA_COMPILER_SN
        // separately from other EA_COMPILER defines it is possible that both 
        // may be defined at the same time. Note that while the newer EDG-based
        // SN compiler may emulate other compilers, it doesn't act exactly 
        // the same.
        #define EA_COMPILER_SN
    #endif


    // SNC (SN Systems)
    #if defined(__SNC__)
         #define EA_COMPILER_NAME "SNC"

        #ifdef __GNUC__ // If SN is using GCC-compatibility mode (which it usually is)...
             #define EA_COMPILER_GNUC
             #define EA_COMPILER_VERSION     (__GNUC__ * 1000 + __GNUC_MINOR__)  // We intentionally report the GCC version here. SN 
             #define EA_COMPILER_STRING      EA_COMPILER_NAME " compiler, GCC version " INTERNAL_STRINGIZE( __GNUC__ ) "." INTERNAL_STRINGIZE( __GNUC_MINOR__ ) ", SNC version " INTERNAL_STRINGIZE( __SN_VER__ )  ", EDG version " INTERNAL_STRINGIZE( __EDG_VERSION__ )
        #else
             #define EA_COMPILER_VERSION     __SN_VER__
             #define EA_COMPILER_STRING      EA_COMPILER_NAME " compiler, version " INTERNAL_STRINGIZE( EA_COMPILER_VERSION ) ", EDG version " INTERNAL_STRINGIZE( __EDG_VERSION__ )
        #endif

    // GCC (a.k.a. GNUC)
    #elif defined(__GNUC__) // GCC compilers exist for many platforms.
        #define EA_COMPILER_GNUC
        #define EA_COMPILER_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)
        #define EA_COMPILER_NAME "GCC"
        #define EA_COMPILER_STRING EA_COMPILER_NAME " compiler, version " INTERNAL_STRINGIZE( __GNUC__ ) "." INTERNAL_STRINGIZE( __GNUC_MINOR__ )

        #if (__GNUC__ == 2) && (__GNUC_MINOR__ < 95) // If GCC < 2.95... 
            #define EA_COMPILER_NO_MEMBER_TEMPLATES
        #endif
        #if (__GNUC__ == 2) && (__GNUC_MINOR__ <= 97) // If GCC <= 2.97...
            #define EA_COMPILER_NO_MEMBER_TEMPLATE_FRIENDS
        #endif
        #if (__GNUC__ == 3) && ((__GNUC_MINOR__ == 1) || (__GNUC_MINOR__ == 2)) // If GCC 3.1 or 3.2 (but not pre 3.1 or post 3.2)...
            #define EA_COMPILER_NO_EXPLICIT_FUNCTION_TEMPLATE_ARGUMENTS
        #endif

    // Borland C++
    #elif defined(__BORLANDC__)
        #define EA_COMPILER_BORLANDC
        #define EA_COMPILER_VERSION __BORLANDC__
        #define EA_COMPILER_NAME "Borland C"

        #if (__BORLANDC__ <= 0x0550)      // If Borland C++ Builder 4 and 5...
            #define EA_COMPILER_NO_MEMBER_TEMPLATE_FRIENDS
        #endif
        #if (__BORLANDC__ >= 0x561) && (__BORLANDC__ < 0x600)
            #define EA_COMPILER_NO_MEMBER_FUNCTION_SPECIALIZATION
        #endif


    // Intel C++ (via EDG front-end)
    #elif defined(__ICL) || defined(__ICC)
        #define EA_COMPILER_INTEL
        #if defined(__ICL)
            #define EA_COMPILER_VERSION __ICL
        #elif defined(__ICC)
            #define EA_COMPILER_VERSION __ICC
        #endif
        #define EA_COMPILER_NAME "Intel C++"

        // Intel is based ont the EDG (Edison Design Group) front end and 
        // all recent versions are very compliant to the C++ standard.


    // Metrowerks
    #elif defined(__MWERKS__) || defined(__CWCC__) // Metrowerks compilers exist for many platforms.
        #define EA_COMPILER_METROWERKS
        #ifdef __MWERKS__
            #define EA_COMPILER_VERSION __MWERKS__
        #else
            #define EA_COMPILER_VERSION __CWCC__
        #endif
        #define EA_COMPILER_NAME "Metrowerks"

        #if (__MWERKS__ <= 0x2407)  // If less than v7.x...
            #define EA_COMPILER_NO_MEMBER_FUNCTION_SPECIALIZATION
        #endif
        #if (__MWERKS__ <= 0x3003)  // If less than v8.x...
            #define EA_COMPILER_NO_MEMBER_TEMPLATE_FRIENDS
        #endif


    // Microsoft VC++
    #elif defined(_MSC_VER) // Microsoft compilers exist for at least the PC and XBox platforms.
        #define EA_COMPILER_MSVC
        #define EA_COMPILER_VERSION _MSC_VER
        #define EA_COMPILER_NAME "Microsoft Visual C++"

        #if (_MSC_VER <= 1200) // If VC6.x and earlier...
            #if (_MSC_VER < 1200)
                #define EA_COMPILER_MSVCOLD
            #else
                #define EA_COMPILER_MSVC6
            #endif

            #if (_MSC_VER < 1200) // If VC5.x or earlier...
                #define EA_COMPILER_NO_TEMPLATE_SPECIALIZATION
            #endif
            #define EA_COMPILER_NO_EXPLICIT_FUNCTION_TEMPLATE_ARGUMENTS     // The compiler compiles this OK, but executes it wrong. Fixed in VC7.0
            #define EA_COMPILER_NO_VOID_RETURNS                             // The compiler fails to compile such cases. Fixed in VC7.0
            #define EA_COMPILER_NO_EXCEPTION_STD_NAMESPACE                  // The compiler fails to compile such cases. Fixed in VC7.0
            #define EA_COMPILER_NO_DEDUCED_TYPENAME                         // The compiler fails to compile such cases. Fixed in VC7.0
            #define EA_COMPILER_NO_STATIC_CONSTANTS                         // The compiler fails to compile such cases. Fixed in VC7.0
            #define EA_COMPILER_NO_COVARIANT_RETURN_TYPE                    // The compiler fails to compile such cases. Fixed in VC7.1
            #define EA_COMPILER_NO_ARGUMENT_DEPENDENT_LOOKUP                // The compiler compiles this OK, but executes it wrong. Fixed in VC7.1
            #define EA_COMPILER_NO_TEMPLATE_TEMPLATES                       // The compiler fails to compile such cases. Fixed in VC7.1
            #define EA_COMPILER_NO_TEMPLATE_PARTIAL_SPECIALIZATION          // The compiler fails to compile such cases. Fixed in VC7.1
            #define EA_COMPILER_NO_MEMBER_TEMPLATE_FRIENDS                  // The compiler fails to compile such cases. Fixed in VC7.1
            //#define EA_COMPILER_NO_MEMBER_TEMPLATES                       // VC6.x supports member templates properly 95% of the time. So do we flag the remaining 5%?
            //#define EA_COMPILER_NO_MEMBER_TEMPLATE_SPECIALIZATION         // VC6.x supports member templates properly 95% of the time. So do we flag the remaining 5%?

        #elif (_MSC_VER <= 1300) // If VC7.0 and earlier...
            #define EA_COMPILER_MSVC7

            #define EA_COMPILER_NO_COVARIANT_RETURN_TYPE                    // The compiler fails to compile such cases. Fixed in VC7.1
            #define EA_COMPILER_NO_ARGUMENT_DEPENDENT_LOOKUP                // The compiler compiles this OK, but executes it wrong. Fixed in VC7.1
            #define EA_COMPILER_NO_TEMPLATE_TEMPLATES                       // The compiler fails to compile such cases. Fixed in VC7.1
            #define EA_COMPILER_NO_TEMPLATE_PARTIAL_SPECIALIZATION          // The compiler fails to compile such cases. Fixed in VC7.1
            #define EA_COMPILER_NO_MEMBER_TEMPLATE_FRIENDS                  // The compiler fails to compile such cases. Fixed in VC7.1
            #define EA_COMPILER_NO_MEMBER_FUNCTION_SPECIALIZATION           // This is the case only for VC7.0 and not VC6 or VC7.1+. Fixed in VC7.1
            //#define EA_COMPILER_NO_MEMBER_TEMPLATES                       // VC7.0 supports member templates properly 95% of the time. So do we flag the remaining 5%?

        #elif (_MSC_VER < 1400) // If VC7.1 ...
            // The VC7.1 and later compiler is fairly close to the C++ standard 
            // and thus has no compiler limitations that we are concerned about.
            #define EA_COMPILER_MSVC7_2003
            #define EA_COMPILER_MSVC7_1

        #else // _MSC_VER of 1400 means VC8 (VS2005), 1500 means VC9 (VS2008)
            #define EA_COMPILER_MSVC8_2005
            #define EA_COMPILER_MSVC8_0

        #endif

    #elif defined(__xlC__)
        #define EA_COMPILER_IBM
        #define EA_COMPILER_NAME "IBM XL C"
        #define EA_COMPILER_VERSION __xlC__
        #define EA_COMPILER_STRING "IBM XL C compiler, version " INTERNAL_STRINGIZE( __xlC__ )

    // Unknown
    #else // Else the compiler is unknown

        #define EA_COMPILER_VERSION 0
        #define EA_COMPILER_NAME "Unknown"
        #define EA_COMPILER_STRING "Unknown compiler, version 0.0"

    #endif

    #ifndef EA_COMPILER_STRING
        #define EA_COMPILER_STRING EA_COMPILER_NAME " compiler, version " INTERNAL_STRINGIZE(EA_COMPILER_VERSION)
    #endif


    // Deprecated definitions
    // For backwards compatibility, should be supported for at least the life of EABase v2.0.x.
    #ifndef EA_COMPILER_NO_TEMPLATE_PARTIAL_SPECIALIZATION
        #define EA_COMPILER_PARTIAL_TEMPLATE_SPECIALIZATION
    #endif
    #ifndef EA_COMPILER_NO_TEMPLATE_SPECIALIZATION
        #define EA_COMPILER_TEMPLATE_SPECIALIZATION
    #endif
    #ifndef EA_COMPILER_NO_MEMBER_TEMPLATES
        #define EA_COMPILER_MEMBER_TEMPLATES
    #endif
    #ifndef EA_COMPILER_NO_MEMBER_TEMPLATE_SPECIALIZATION
        #define EA_COMPILER_MEMBER_TEMPLATE_SPECIALIZATION
    #endif



    // EA_COMPILER_NO_EXCEPTIONS / EA_COMPILER_NO_UNWIND
    //
    // If EA_COMPILER_NO_EXCEPTIONS is defined, then the compiler is 
    // configured to not recognize C++ exception-handling statements 
    // such as try/catch/throw. Thus, when EA_COMPILER_NO_EXCEPTIONS is 
    // defined, code that attempts to use exception handling statements
    // will usually cause a compilation error. If is often desirable
    // for projects to disable exception handling because exception 
    // handling causes extra code and/or data generation which might
    // not be needed, especially if it is known that exceptions won't
    // be happening. When writing code that is to be portable between
    // systems of which some enable exception handling while others
    // don't, check for EA_COMPILER_NO_EXCEPTIONS being defined. 
    //
    #if defined(EA_COMPILER_GNUC) && defined(_NO_EX) // GCC on some platforms (e.g. PS3) defines _NO_EX when exceptions are disabled.
        #define EA_COMPILER_NO_EXCEPTIONS

    #elif (defined(EA_COMPILER_GNUC) || defined(EA_COMPILER_INTEL) || defined(EA_COMPILER_SN)) && !defined(__EXCEPTIONS) // GCC and most EDG-based compilers define __EXCEPTIONS when exception handling is enabled.
        #define EA_COMPILER_NO_EXCEPTIONS

    #elif defined(EA_COMPILER_METROWERKS)
        #if !__option(exceptions)
            #define EA_COMPILER_NO_EXCEPTIONS
        #endif

    // Borland and Micrsoft use the _CPUUNWIND define to denote that 
    // exception stack unwinding code generation is disabled. The result
    // is that you can call try/catch/throw and that exceptions will be
    // caught handled, but that no automatic object destruction will
    // happen between a throw and the resulting catch. We thus don't 
    // want to define EA_COMPILER_NO_EXCEPTIONS, but perhaps users might
    // be interesting in knowing that unwinding is disabled.
    #elif (defined(EA_COMPILER_BORLAND) || defined(EA_COMPILER_MSVC)) && !defined(_CPPUNWIND)
        #define EA_COMPILER_NO_UNWIND

    #endif // EA_COMPILER_NO_EXCEPTIONS / EA_COMPILER_NO_UNWIND



#endif // INCLUDED_eacompiler_H











