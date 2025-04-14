#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums [] = {5, 15, 24, 94, 34, 2};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int length = sizeof(nums) / sizeof(nums[0]);
    for(int i = 0; i < length; i++) {
        if(nums[i] <  smallest){
            smallest = nums[i];
        }

        if(nums[i] > largest){
            largest = nums[i];
        }
    }

    cout << "Smallest : " << smallest << endl;
    cout << "Largest : " << largest << endl;
    return 0;
}