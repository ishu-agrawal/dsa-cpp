#include <iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    if(n == 0 || n ==1) return 1;

    for(int i=n; i>0; i--){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin >> n;

    cout<< "Factorial of " << n<< " is: "<< fact(n)<<endl;
    return 0;
}