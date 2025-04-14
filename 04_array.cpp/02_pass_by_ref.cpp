#include<iostream>
using namespace std;

void changeArr(int arr[], int sie){
    cout << "in function" << endl;
    for(int i=0; i < sie; i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){
    int arr[] = {2,4,6};
    cout << "initial array: " << endl;
    for(int i=0 ; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    changeArr(arr, 3);
    cout << "in main " << endl;
    for(int i=0 ; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}