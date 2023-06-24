// Test Program - Leetcode Problem 509
// Program demonstrates the fibonacci number
// Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Trivial - What is one of the methods used to find the fibonacci number?
// headers
#include <iostream>
#include <valarray>

//declaration
using namespace std;

//class
class fibo1 {
public:
    //constructor
    fibo1() {

    }

    //method 1
    //function to calculate the fibonacci number
    int calfibo1(int num) {
        int ret1 = 0;
        int ret2 = 0;
        int ret3 = 0;
        if (num == 0) {
            return 0;
        }
        else if (num == 1) {
            return 1;
        }
        else if (num >= 2) {
            ret1 = calfibo1(num - 1);
            ret2 = calfibo1(num - 2);
            ret3 = ret1 + ret2;
            return ret3;
        }
    }

    //method 2
    //function to calculate the fibonacci number
    int calfibo2(int num) {
        int ret1 = 0;
        int ret2 = 0;
        int ret3 = 0;
        int count = 0;
        if (num <= 1) {
            return num;
        }
        else if (num >= 2) {
            while (count < num) {
                ret1 = calfibo2(num - 2) + calfibo2(num - 1);
                return ret1;
            }
        }
    }
};

class Solution {
public:
    int ret = 0;
    int fib1(int n) {
        if (n <= 1) {
          return n;
        }
        return fib1(n - 1) + fib1(n - 2);
    }

    int fib2(int n) {
        double relativeNum1 = 1 / 2.0 + sqrt(5) / 2.0;
        double ret1 = round(sqrt(pow(pow(relativeNum1, n), 2.0) / 5.0));
        return ret1;
    }
};

int main()
{
    //The sequence is 0,1,1,2,3,5,8,13,21,34,55...
    //The index is    0,1,2,3,4,5,6,07,08,09,10...
    //executions
    //declarations and initializatons
    int ret1= 0;
    int num1 = 5;
    fibo1 f1;
    ret1 = f1.calfibo1(num1);
    cout << "f[" << num1 << "] = " << ret1 << endl;

    int ret2 = 0;
    int num2 = 5;
    fibo1 f2;
    ret2 = f2.calfibo2(num2);
    cout << "f[" << num2 << "] = " << ret2 << endl;

    int ret3 = 0;
    int num3 = 5;
    Solution s2;
    ret3 = s2.fib2(num3);
    cout << "f[" << num3 << "] = " << ret3 << endl;
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
