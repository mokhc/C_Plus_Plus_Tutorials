// @mokhc
// Program demonstrates lambda expression
// Lambda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// headers
#include <iostream>
#include "Fruits.cpp"

// declaration
using namespace std;

int main()
{
    //declaration and initilization
    Fruits f1("banana");
    Fruits f2(2.0);

    //Method 1 - Using auto variable
    //declaration and implementation
    //no captures variable
    //parameter variables present
    auto display1 = [](Fruits f1, Fruits f2) {
        cout << f1.name << endl;
        cout << f2.price << endl;
    };
    display1(f1,f2);

    //Method 2 - Using pointer to function
    //declaration and implementation
    //no captures variable
    //parameter variables present
    void (*display2)(Fruits,Fruits) {
        [](Fruits f1, Fruits f2) {
            cout << f1.name << endl;
            cout << f2.price << endl;
        }
    };
    display2(f1,f2);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
