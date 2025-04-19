#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;
    int* nullPtr = NULL;

    cout << "a: " << a<< endl;
    cout << "a address: " << &a<< endl;
    cout << "ptr: " << ptr << endl;
    cout << "ptr address: " << &ptr << endl;
    cout << "ptr2: " << ptr2 << endl;
    cout << "Dereferencing a : " << *(&a) << endl;
    cout << "Dereferencing ptr : " << *(ptr) << endl;
    cout << "Dereferencing ptr2 : " << *(ptr2) << endl;
    cout << "Double Dereferencing ptr2 : " << **(ptr2) << endl;
    cout << "Null Pointer: " << nullPtr << endl;
    return 0;
}