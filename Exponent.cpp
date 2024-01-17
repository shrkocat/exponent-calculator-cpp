/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int base, exponent;
    int product;
    int count;
    string choice;
    
    // Decision to do process
    cout << "====================================" << endl;
    cout << "         Exponent Calculator        " << endl;
    cout << "====================================" << endl;
    cout << "[y] Use Calculator                  " << endl;
    cout << "[n] Exit                            " << endl;
    cout << "====================================" << endl;
    
    cout << "Use calculator?: ";
    cin >> choice;
    
do {
    
        do { // Input value for base number
            cout << "Enter base number: ";
            cin >> base;
            
            if (base <= 0)
            {
                cout << "Invalid number, enter again" << endl;
            }
            
        } while (base <= 0);
        
        do { // Input value for exponent number
            cout << "Enter exponent number: ";
            cin >> exponent;
            
            if (base <= 0)
            {
                cout << "Invalid number, enter again" << endl;
            }
            
        } while (base <= 0);
        
        
        // Loop execution with count and exponent
        product = 1;
        for (count = 1; count <= exponent; count++)
        {
            product = product * base;
        }
        
        cout << base << "^" << exponent << " is " << product << endl;
        
        // Decision to redo process
        
        cout << "====================================" << endl;
        cout << "         Exponent Calculator        " << endl;
        cout << "====================================" << endl;
        cout << "[y] Use Calculator                  " << endl;
        cout << "[n] Exit                            " << endl;
        cout << "====================================" << endl;
        cout << "Do you want to use calculator again?: ";
        cin >> choice;
        
    } while (choice == "y");

    return 0;
}
