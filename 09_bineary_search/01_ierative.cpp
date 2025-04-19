#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int st = 0;
    int end = arr.size() - 1;

    while(st <= end){
        int mid = (st + end)/2;

        if(target > arr[mid]){
            st = mid + 1;
        } else if(target < arr[mid]){
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;

    cout << "Binary seach for arr1: " << binarySearch(arr1, tar1);
    cout << endl;
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    cout << "Binary seach for arr2: " << binarySearch(arr2, tar2) << endl;
    return 0;
}