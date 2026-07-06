#include <iostream>
#include <limits>
using namespace std;

bool isPalindrome(int num) {
    if (num < 0) return false;

    int originalNum = num;
    long long reversedNum = 0;

    while (num > 0) {
        reversedNum = reversedNum * 10 + (num % 10);
        num /= 10;
    }
    return originalNum == reversedNum;
}

int main() {
    int n;
    char choice;

    do {
        cout << "Enter a number to check if it is palindrome or not: ";
        cin >> n;

        if (cin.fail()) {
            cout << " Invalid input, please enter an integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (isPalindrome(n)) {
            cout << " The entered number is palindrome." << endl;
        } else {
            cout << " The entered number is not palindrome." << endl;
        }

        do {
            cout << "\nDo you want to exit? (y/n): ";
            cin >> choice;

            if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
                cout << " Invalid choice. Please enter 'y' for yes or 'n' for no." << endl;
            }

        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'n' || choice == 'N');

    cout << " Program exited. Goodbye!" << endl;
    return 0;
}