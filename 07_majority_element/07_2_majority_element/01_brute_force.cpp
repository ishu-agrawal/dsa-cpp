#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        int freq = 0;
        for(int j=0; j<n; j++){
            if(arr[i]== arr[j]) freq ++;
        }
        if(freq > (n/2)){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,2,1,1};

    int ans = majorityElement(arr);
    cout << ans;
    return 0;
}