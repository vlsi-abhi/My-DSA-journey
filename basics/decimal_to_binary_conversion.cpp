#include <iostream>
using namespace std;

    int decToBinary(int num) {

        int rem, pow = 1, ans = 0;
        while(num>0){
        rem = num%2;
        num = num/2;
        ans = ans+(rem*pow);
        pow = pow*10;
        }
        return ans;
    }

    int main() {
        int n;
        cout <<"Enter number: ";
        cin >> n;

        cout <<"Binary of the entered number is: "<<decToBinary(n);

        return 0;
    }
