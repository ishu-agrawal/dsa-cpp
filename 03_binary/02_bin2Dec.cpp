#include<iostream>
using namespace std;

int toDecimal(int n){
    int sum = 0;
    int power = 1;

    while(n > 0){
        int rem = n % 10;
        n /= 10;
        sum = sum + (rem * power);
        power *= 2;
    }
    return sum;
}

int main(){
    int n;
    cout << "enter number: ";
    cin >> n;

    cout << "Decimal number is: " << toDecimal(n) << endl;
    return 0;
}