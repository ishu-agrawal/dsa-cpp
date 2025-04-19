#include<iostream>
using namespace std;

void changeA(int &b){
    b = 20;
}

int main(){
    int a = 10;
    changeA(a);
    cout <<"value of a: " << a<< endl;
    return 0;
}