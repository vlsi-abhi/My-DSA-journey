#include <iostream>
using namespace std;

int main() {
    int num;
    float a, b;
    char choice;

    do {
        cout <<"Select your task--->\n";
        cout <<"Enter -> 1 For Addition.\n";
        cout <<"Enter -> 2 For Subtraction.\n";
        cout <<"Enter -> 3 For Multiplication.\n";
        cout <<"Enter -> 4 For Division.\n";
        cin >> num;

        if (num < 1 || num > 4) {
            cout <<"Invalid Input!!\n";
            return 0;
        }

        cout <<"Enter the first number: \n";
        cin >> a;
        cout <<"Enter the second number: \n";
        cin >> b;

        switch(num) {
            case 1: cout <<"Addition is: " << a+b; break;
            case 2: cout <<"Subtraction is: " << a-b; break;
            case 3: cout <<"Multiplication is: " << a*b; break;
            case 4: 
                if (b == 0) cout <<"Error: Division by zero!";
                else cout <<"Division is: " << a/b;
                break;
        }

        cout <<"\nDo you want to exit ?(y/n): ";
        cin >> choice;

    } while(choice == 'n' || choice == 'N');

    return 0;
}