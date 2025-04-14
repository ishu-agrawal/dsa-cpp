#include <iostream>
using namespace std;

int linearSearch(int arr[], int sie, int target){
    for(int i=0; i<sie; i++){
        if(arr[i] == target) return i;
    }
    return -1;
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sie = 7;
    int target = 5;
    cout << "Found at index: " << linearSearch(arr, sie, target) << endl;

    return 0;
}