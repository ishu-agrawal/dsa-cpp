#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    ptr += 2; // 2int -> 8 bytes
    cout << ptr << endl;

    // *(ptr) += 1 
    // if we updating the address of pointer, *ptr will give the value stored at that address;
    cout << ptr << endl;
    cout << *(ptr) << endl;
    cout << a<< endl;
    a += 1;
    cout << a<< endl;
    return 0;
}