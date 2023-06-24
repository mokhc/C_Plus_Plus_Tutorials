//@mokhc
// Random_Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Trivial - What are needed to generate the random values?
//Trivial - What is needed to make sure there is no repetition in the values generated?
#include <iostream>

using namespace std;

//Program to generate 5 sets of random alpha-numeric values
//with no repetition
//The program will prompt user to enter 
//an alphabet c to display one pair of values at a time
//until all five pairs are dislayed
int main()
{
    //declare the variables 
    char alpha;
    int numberrange;

    //initialize the variables 
    double out = 0;
    double divide = 0;
    int whole = 0;
    double decinum = 0;

    int numberset[] = { 0,0,0,0,0 };
    char alphaset[] = { ' ',' ',' ',' ',' ' };

    //set the checking value to 0
    int set = 0;

    //seed the srand()
    srand(time(0));

    //loop to check the array for repetitive value
    while (set == 0) {
        //loop to generate the five alpha-numeric values
        for (int a = 0; a < 5; a++) {
            //assign a random value
            out = rand();
            //code to generate the decimal values
            divide = (out * 100000000) / (time(0));
            whole = divide;
            decinum = divide - whole;
            //set the colours R, G, B and Y according to range from
            //more than 0 and less than 1
            //the increment is (1.0/4) 0.25
            if (decinum < 0.25) {
                alpha = 'R';
            }
            else if ((decinum < 0.5) && (decinum >= 0.25)) {
                alpha = 'G';
            }
            else if ((decinum < 0.75) && (decinum >= 0.5)) {
                alpha = 'B';
            }
            else {
                alpha = 'Y';
            }
            //set the numbers 1 to 42 according to range from
            //more then 0 to less than 1
            //the increment is (1.0/42) 0.0238095
            if (decinum < 0.0238095) {
                numberrange = 1;
            }
            else if ((decinum < 0.047619) && (decinum >= 0.0238095)) {
                numberrange = 2;
            }
            else if ((decinum < 0.0714285) && (decinum >= 0.047619)) {
                numberrange = 3;
            }
            else if ((decinum < 0.095238) && (decinum >= 0.0714285)) {
                numberrange = 4;
            }
            else if ((decinum < 0.1190475) && (decinum >= 0.095238)) {
                numberrange = 5;
            }
            else if ((decinum < 0.142857) && (decinum >= 0.1190475)) {
                numberrange = 6;
            }
            else if ((decinum < 0.1666665) && (decinum >= 0.142857)) {
                numberrange = 7;
            }
            else if ((decinum < 0.190476) && (decinum >= 0.1666665)) {
                numberrange = 8;
            }
            else if ((decinum < 0.2142855) && (decinum >= 0.190476)) {
                numberrange = 9;
            }
            else if ((decinum < 0.238095) && (decinum >= 0.2142855)) {
                numberrange = 10;
            }
            else if ((decinum < 0.2619045) && (decinum >= 0.238095)) {
                numberrange = 11;
            }
            else if ((decinum < 0.285714) && (decinum >= 0.2619045)) {
                numberrange = 12;
            }
            else if ((decinum < 0.3095235) && (decinum >= 0.285714)) {
                numberrange = 13;
            }
            else if ((decinum < 0.333333) && (decinum >= 0.3095235)) {
                numberrange = 14;
            }
            else if ((decinum < 0.3571425) && (decinum >= 0.333333)) {
                numberrange = 15;
            }
            else if ((decinum < 0.380952) && (decinum >= 0.3571425)) {
                numberrange = 16;
            }
            else if ((decinum < 0.4047615) && (decinum >= 0.380952)) {
                numberrange = 17;
            }
            else if ((decinum < 0.428571) && (decinum >= 0.4047615)) {
                numberrange = 18;
            }
            else if ((decinum < 0.4523805) && (decinum >= 0.428571)) {
                numberrange = 19;
            }
            else if ((decinum < 0.47619) && (decinum >= 0.4523805)) {
                numberrange = 20;
            }
            else if ((decinum < 0.4999995) && (decinum >= 0.47619)) {
                numberrange = 21;
            }
            else if ((decinum < 0.523809) && (decinum >= 0.4999995)) {
                numberrange = 22;
            }
            else if ((decinum < 0.5476185) && (decinum >= 0.523809)) {
                numberrange = 23;
            }
            else if ((decinum < 0.571428) && (decinum >= 0.5476185)) {
                numberrange = 24;
            }
            else if ((decinum < 0.5952375) && (decinum >= 0.571428)) {
                numberrange = 25;
            }
            else if ((decinum < 0.619047) && (decinum >= 0.5952375)) {
                numberrange = 26;
            }
            else if ((decinum < 0.6428565) && (decinum >= 0.619047)) {
                numberrange = 27;
            }
            else if ((decinum < 0.666666) && (decinum >= 0.6428565)) {
                numberrange = 28;
            }
            else if ((decinum < 0.6904755) && (decinum >= 0.666666)) {
                numberrange = 29;
            }
            else if ((decinum < 0.714285) && (decinum >= 0.6904755)) {
                numberrange = 30;
            }
            else if ((decinum < 0.7380945) && (decinum >= 0.714285)) {
                numberrange = 31;
            }
            else if ((decinum < 0.761904) && (decinum >= 0.7380945)) {
                numberrange = 32;
            }
            else if ((decinum < 0.7857135) && (decinum >= 0.761904)) {
                numberrange = 33;
            }
            else if ((decinum < 0.809523) && (decinum >= 0.7857135)) {
                numberrange = 34;
            }
            else if ((decinum < 0.8333325) && (decinum >= 0.809523)) {
                numberrange = 35;
            }
            else if ((decinum < 0.857142) && (decinum >= 0.8333325)) {
                numberrange = 36;
            }
            else if ((decinum < 0.8809515) && (decinum >= 0.857142)) {
                numberrange = 37;
            }
            else if ((decinum < 0.904761) && (decinum >= 0.8809515)) {
                numberrange = 38;
            }
            else if ((decinum < 0.9285705) && (decinum >= 0.904761)) {
                numberrange = 39;
            }
            else if ((decinum < 0.95238) && (decinum >= 0.9285705)) {
                numberrange = 40;
            }
            else if ((decinum < 0.9761895) && (decinum >= 0.95238)) {
                numberrange = 41;
            }
            else {
                numberrange = 42;
            }

            numberset[a] = numberrange;
            alphaset[a] = alpha;
        }

        //check the generated values for repetitive values
        //if there is repetition, set is assign value of 0
        //and the loop is broken
        //else set is assign value of 1
        for (int a = 0; a < 5; a++) {
            for (int b = 0; b < 5; b++) {
                if (numberset[a] == numberset[b]) {
                    set = 0;
                    break;
                }
                else if (numberset[a] != numberset[b]) {
                    continue;
                }
            }
        }
        set = 1;
    }

    //print the alpha-numeric values
    char continueset1 = 'c';
    char continueset2 = 'C';
    int count = 0;

    //while loop to check for conditions
    while (((continueset1 == 'c') || (continueset2 == 'C')) && (count != 5)) {
        for (int a = 0; a < 5; a++) {
            cout << "Please enter c to display values :";
            cin >> continueset1;
            cout << alphaset[a] << " " << numberset[a] << endl;
            count = count + 1;
        }
    }
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
