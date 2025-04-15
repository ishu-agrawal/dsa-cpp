#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr [] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;

    for(int start = 0; start < 7; start++){
        int currSum = 0;

        for(int end = start; end < 7; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}