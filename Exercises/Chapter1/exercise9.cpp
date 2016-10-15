/*
 * Exercise 9 | Chapter 1 | Programming Abstractions in C++
 * ---------------------------
 * Write a function Round(x) that rounds a floating-point number x to the nearest integer.
 */

#include <iostream>

using namespace std;

int round(double x);

int main(){
    for (double i = -4.9; i < 5; i += 0.5) {
        cout << "Truncanting " << i << " to " << round(i) << endl;
    }

    return 0;
}

int round(double x) {
    if (x > 0) {
        return (int) (x + 0.5);
    } else {
        return (int) (x - 0.5);
    }
}