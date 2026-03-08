     // Fig. 1.2: fig01_02.cpp
    // A first program in C++.
#include <iostream>
//iostream is main library and without this complier will did not about input and output 
//include is use for cin and cout library that this is included without this complier will not know what is cin and cout
//#is use in start of coding without # it will be like siple english.
#using namespace std;
//namespace std; is use to avoid wite again and again std:: in every line 
// function main begins program execution
#int main()
//int is use for integers and give result in integers 
//main is function and without main() complier will not know the main fuction
    {
    int a = 10;
    
    cout<< "Enter value for a:\n";
    
    cin >> a;
    cout << "a = " << a;
    
    
    return 0;  
	 // indicate that program ended successfully
    } // end function main

