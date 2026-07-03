#include <iostream>
using namespace std;

long long fibonacci(int n){

    if (n<=0) {
        cout <<"Invalid input, use a positive integer.";
        return -1;
    }

    if (n==1) return 0;
    if (n==2) return 1;

    long long a=0, b=1, c;
    for (int i=3; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
    
}

int main () {
    int n;
    cout <<"Enter the fibonacci term you want: ";
    cin >>n;

    long long result = fibonacci(n);
    if (result != -1) {
        cout <<"The "<<n<<"th term of Fibonacci series is: "<<result;

        return 0;
    }
  }