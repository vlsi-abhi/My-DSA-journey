#include <iostream>
#include <bitset>   // for binary representation
#include <iomanip>  // for hex formatting
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    // Binary using bitset (32 bits)
    cout << "Binary: " << bitset<32>(n) << endl;

    // Octal using stream manipulators
    cout << "Octal: " << oct << n << endl;


    cout << "Hexadecimal: " << hex << uppercase << n << endl;

    return 0;
}
