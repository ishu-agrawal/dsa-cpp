#include <iostream>
using namespace std;

int toBinary(int n){
    int sum = 0;
    int power = 1;
    while(n>0){
        int rem = n % 2;
        n /= 2;
        sum = sum + (rem * power);
        power *= 10;
    }

    // Instead of while loop, use a for loop
    //  for (; n > 0; n /= 2) {
    //     int rem = n % 2;
    //     sum = sum + (rem * power);
    //     power *= 10;
    // }
    return sum;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin >> n;

    cout << "Binary is: " << toBinary(n) << endl;
    return 0;
}