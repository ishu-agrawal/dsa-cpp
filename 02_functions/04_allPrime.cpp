#include<iostream>
using namespace std;

void printPrimes(int n){

    for(int x = 2; x < n; x++){
        bool isPrime = true;
        for(int i = 2; i*i <= x; i++){
            if(x % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << x << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    printPrimes(n);
    return 0;
}