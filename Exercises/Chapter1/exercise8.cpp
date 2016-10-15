/*
 * Exercise 8 | Chapter 1 | Programming Abstractions in C++
 * ---------------------------
 * Prime factorization
 *
 */

# include <iostream>

using namespace std;

bool isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    int number;

    while (true) {
        cout << "Enter a number (n > 1): ";
        cin >> number;

        if (number > 1) {
            break;
        } else {
            cout << "# Enter a number greater than 1\n";
        }
    }

    int divisor = 2;

    while (number > 1) {
        if (number % divisor == 0) {
            cout << divisor << " * ";
            number /= divisor;
        } else {
            divisor += 1;
        }
    }
}
