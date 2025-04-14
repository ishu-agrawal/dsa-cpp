#include<iostream>
using namespace std;

void reverseArray(int arr[], int sie){
    int start = 0, end = sie-1;
    // for(int start = 0, end = size - 1; start < end; start++, end--){
    //     swap(arr[start], arr[end]);
    // }
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr [] = {4,2,7,8,1,2,5};
    int sie = 7;
    reverseArray(arr, sie);

    for(int i=0; i<sie; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}