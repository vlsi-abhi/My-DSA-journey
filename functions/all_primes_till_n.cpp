#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;       // 0 and 1 are not prime
    if (num == 2) return true;        // 2 is prime
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimes(int n) {
    cout << "Prime numbers from 1 to " << n << " are:\n";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printPrimes(n);

    return 0;
}

