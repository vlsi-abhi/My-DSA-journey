#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    if (num < 0) return false;
    
    int originalNum = num;
    int totalDigits = (num == 0) ? 1 : (int)log10(num) + 1;  // digit count
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;

        // Compute digit^totalDigits using integer multiplication
        int power = 1;
        for (int i = 0; i < totalDigits; i++) {
            power *= digit;
        }

        sum += power;
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}