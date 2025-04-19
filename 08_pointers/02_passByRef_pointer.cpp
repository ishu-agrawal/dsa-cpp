#include<iostream>
using namespace std;

void changwA(int* ptr){
    *ptr = 20;
}

int main(){
    int a = 10;
    changwA(&a);
    cout<< "value of a: " << a << endl;
    return 0;
}