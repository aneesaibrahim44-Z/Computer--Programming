     // Fig. 1.2: fig01_02.cpp
    // A first program in C++.
#include <iostream>
//iostream is library for cin and cout
//includes is use for cin and cout that it is also include in library
// # is use for starting the programming or coding
using namespace std;
// namespace std:: is use to avoid writting again and again std; in cin and cout
// function main begins program execution
int main()
//main is function and without this complier will not read the main function
    {
    char a = 'a';
    
    cout<< "Enter an alphabet for a:\n";
    
    cin >> a;
    cout << "a = " << a;
    
    
    return 0;
	   // indicate that program ended successfully
    } // end function main

