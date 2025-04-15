#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr [] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<7; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}