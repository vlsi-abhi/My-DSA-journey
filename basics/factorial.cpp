#include <iostream>
using namespace std;

long long factorial(int num) {
    long long fact=1;
    for (int i=1; i<=num; i++) {
        fact *= i;
    }
    return fact;
}

int main () {
    int n;
    cout <<"Enter the number: ";
    cin >> n;

    if(n<0){
        cout <<"Invalid input enter a positive number. ";
    }
    else {
    long long result = factorial(n);
    cout <<"The factorial of "<<n<<" is: "<<result;
    }
    return 0;
}