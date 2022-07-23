//***********************************************************
// TestCLient.cpp
// 
// sgiman @ 2022
//***********************************************************

#include <iostream>
#include "utils.h"
#include <TestLibrary.h>

using namespace std;


int main()
{
    
    FuncTest();
    cout << " *** ADD = "  << AddTest(1, 2) << endl;
    cout << " *** SUB = " << SubTest(4, 2) << endl;

    //=== END ===
    cout << endl;
    MyDate();
    system("pause");
    return 0;

}