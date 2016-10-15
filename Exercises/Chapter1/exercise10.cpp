/*
 * Exercise 10 | Chapter 1 | Programming Abstractions in C++
 * ---------------------------
 * Write a program that calculates an approximation of π consisting of the first
 * 10,000 terms in Leibniz’s series.
 */

#include <iostream>

using namespace std;

int main(){
    int subtrahend = 1;
    bool shouldAdd = true;
    double piDividedByFour = 0;

    for (int i = 0; i < 10000; i++) {
        if (shouldAdd)
            piDividedByFour += 1.0/subtrahend;
        else
            piDividedByFour -= 1.0/subtrahend;

        shouldAdd = ! shouldAdd;
        subtrahend += 2;
    }

    double pi = piDividedByFour * 4;
    cout << "PI = " << pi;

    return 0;
}

