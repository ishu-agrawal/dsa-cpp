#include <iostream>
using namespace std;

void fib(int n){
    int a = 0;
    int b = 1;

    cout << a << endl;
    cout << b << endl;

    for(int i = 0; i < n; i++){
        int sum = a + b;
        a = b;
        b = sum;
        cout << sum << endl;
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    fib(n);
    return 0;
}