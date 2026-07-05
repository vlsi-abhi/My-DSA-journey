#include <iostream>
using namespace std;

int binaryToDecimal(int num) {
    int rem, ans=0, pow=1;
    while (num>0){
        rem=num%10;
        ans=ans+(rem*pow);
        num = num/10;
        pow=pow*2;
    }
    return ans;
}

int main() {
    int n;
    cout <<"Enter a binary number: ";
    cin >>n;

    cout <<"The binary number in decimal will be: "<<binaryToDecimal(n);

    return 0;
}
