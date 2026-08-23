#include <iostream>
#include <vector>
using namespace std;

void printFibonacci(int n) {
    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return;
    }

    vector<long long> fib(n);
    fib[0] = 0;
    if (n > 1) fib[1] = 1;

    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) {
        cout << fib[i];
        if (i != n - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    printFibonacci(n);
    return 0;
}