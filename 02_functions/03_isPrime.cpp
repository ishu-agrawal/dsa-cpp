#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i=2; i*i < n; i++){
        if(n % i == 0) return "false";
    }
    return "true";
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin >> n;
    cout << isPrime(n) << endl;
    return 0;
}