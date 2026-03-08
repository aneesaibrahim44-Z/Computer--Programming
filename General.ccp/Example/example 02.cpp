     // Fig. 1.2: fig01_02.cpp
    // A first program in C++.
#include <iostream>
//without #include <iostream>, the compiler does not recognize cout, so it gives an error.
//#include is preprocesser directive withoooout # ,C++ thinks it is normal code so complier shows errror and it`s seems like a fluents english.
using namespace std;
//we use semicolon to end a line/statement.
//without semicolon the erorr expected ; before int usually means the line write above int main() is messy
// function main begins program execution
int main()
    {
    cout << "Welcome to C++!\n";                                    
    return 0;   // indicate that program ended successfully
    } // end function main

