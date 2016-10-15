/*
 * Exercise 12 | Chapter 1 | Programming Abstractions in C++
 * ---------------------------
 */

#include <iostream>

using namespace std;

void printOneDigitNumber(int number);
void printTwoDigitNumber(int number);
void printThreeDigitNumber(int number);
void printFourDigitNumber(int number);
void printFiveDigitNumber(int number);
void printSixDigitNumber(int number);
void printAuxiliar(int number);

int main(){
   while (true) {
       int number;
       cout << "\nNumber: ";
       cin >> number;

       if (number < 0)
           break;

       if (number < 1000000)
           printSixDigitNumber(number);
       else
            cout << "Valor maior que o limite de 999.999" << endl;
   }
}

void printOneDigitNumber(int number) {
    switch (number) {
        case 0:
            cout << "zero";
            break;
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        default:
            cout << "Error in printOneDigitNumber";
            break;
    }
}

void printTwoDigitNumber(int number) {
    if (number < 10) {
        printOneDigitNumber(number);
        return;
    } else if (number < 20) {
        switch (number) {
            case 10:
                cout << "ten";
                break;
            case 11:
                cout << "eleven";
                break;
            case 12:
                cout << "twelve";
                break;
            case 13:
                cout << "thirteen";
                break;
            case 14:
                cout << "fourteen";
                break;
            case 15:
                cout << "fifteen";
                break;
            case 16:
                cout << "sixteen";
                break;
            case 17:
                cout << "seventeen";
                break;
            case 18:
                cout << "eighteen";
                break;
            case 19:
                cout << "nineteen";
                break;
            default:
                break;
        }

        return;
    } else if (number < 30) {
        cout << "twenty";
    } else if (number < 40) {
        cout << "thirty";
    } else if (number < 50) {
        cout << "forty";
    } else if (number < 60) {
        cout << "fifty";
    } else if (number < 70) {
        cout << "sixty";
    } else if (number < 80) {
        cout << "seventy";
    } else if (number < 90) {
        cout << "eighty";
    } else if (number < 100) {
        cout << "ninety";
    }

    int lastDigit = number % 10;

    if (lastDigit != 0) {
        cout << "-";
        printOneDigitNumber(lastDigit);
    }
}

void printThreeDigitNumber(int number) {
    if (number < 100) {
        printTwoDigitNumber(number);
        return;
    } else {
        int firstDigit = number / 100;
        int lastTwoDigits = number % 100;

        printOneDigitNumber(firstDigit);
        cout << " hundred ";

        if (lastTwoDigits != 0)
            printTwoDigitNumber(lastTwoDigits);
    }
}

void printFourDigitNumber(int number) {
    if (number < 1000) {
        printThreeDigitNumber(number);
        return;
    } else {
        printAuxiliar(number);
    }
}

void printFiveDigitNumber(int number) {
    if (number < 10000) {
        printFourDigitNumber(number);
        return;
    } else {
        printAuxiliar(number);
    }
}

void printSixDigitNumber(int number) {
    if (number < 100000) {
        printFiveDigitNumber(number);
        return;
    } else {
        printAuxiliar(number);
    }
}

void printAuxiliar(int number) {
    int firstThreeDigits = number / 1000;
    int lastThreeDigits = number % 1000;

    printThreeDigitNumber(firstThreeDigits);
    cout << " thousand ";

    if (lastThreeDigits != 0)
        printThreeDigitNumber(lastThreeDigits);
}