#include <iostream>
using namespace std;

// Function to calculate HCF
int hcf(int a, int b) {
    if (b == 0) return a;
    return hcf(b, a % b);
}

// Function to calculate LCM using HCF
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter at least one number." << endl;
        return 0;
    }

    int result;
    cout << "Enter " << n << " numbers: ";
    cin >> result; // first number

    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;
        result = lcm(result, num);
    }

    cout << "LCM of given numbers = " << result << endl;
    return 0;
}