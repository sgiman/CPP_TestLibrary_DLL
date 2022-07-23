#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <iostream>
#include "TestLibrary.h"

using namespace std;

// --- func ---
extern "C" TESTLIBRARY_API void FuncTest()
{
	setlocale(LC_ALL, "Rus");
	puts("\n ****************************************");
	cout << " TestLibrary.dll | func(): ÝÒÎ ÔÓÍÊÖÈß! " << endl;
	puts(" ****************************************");
};


// --- add ---
extern "C" TESTLIBRARY_API int AddTest (int a, int b)
{
	setlocale(LC_ALL, "Rus");

	puts("\n ****************************************");
	cout << " TestLibrary.dll | add(): ÝÒÎ ÔÓÍÊÖÈß! " << endl;
	puts(" ****************************************");

	return a + b;
};


// --- sub ---
extern "C" TESTLIBRARY_API int SubTest(int a, int b)
{
	setlocale(LC_ALL, "Rus");

	puts("\n ****************************************");
	cout << " TestLibrary.dll | sub(): ÝÒÎ ÔÓÍÊÖÈß! " << endl;
	puts(" ****************************************");

	return a - b;
};



