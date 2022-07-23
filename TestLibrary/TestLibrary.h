//***********************************************************
// TestLibrary.h
// 
// sgiman @ 2022
//***********************************************************
#pragma once

#ifdef TESTLIBRARY_EXPORTS
#define TESTLIBRARY_API __declspec(dllexport)
#else
#define TESTLIBRARY_API __declspec(dllimport)
#endif

extern "C" TESTLIBRARY_API void FuncTest();
    
extern "C" TESTLIBRARY_API int AddTest(int a, int b);

extern "C" TESTLIBRARY_API int SubTest(int a, int b);

