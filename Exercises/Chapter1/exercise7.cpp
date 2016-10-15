# include <iostream>

using namespace std;

bool isPerfectNumber(int number);

int main() {
    for (int i = 1; i < 9999; i++) {
        if (isPerfectNumber(i)) {
            cout << i << endl;
        }
    }

    return 0;
}

bool isPerfectNumber(int number) {
    int sum = 0;

    for (int i = number / 2; i > 0; i--) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}
