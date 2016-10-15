#include <iostream>
/*
 * Using the DigitSum function from the section entitled “The while statement” as a
 * model, write a program that reads in an integer and then displays the number that has
 * the same digits in the reverse order.
*/

using namespace std;

void printNumberReverseOrder(int n);

int main() {
    long n;

    cout << "Enter a number: ";
    cin >> n;

    printNumberReverseOrder(n);
}

void printNumberReverseOrder(int n) {
    cout << "The reversed integer is ";
    while (n > 0) {
        cout << n % 10;
        n /= 10;
    }
}
