#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;

    cout << "pointer value: " << ptr << endl;
    ptr++;
    cout << "pointer value: " << ptr << endl;
    ptr--;
    cout << "pointer value: " << ptr << endl;
    return 0;
}