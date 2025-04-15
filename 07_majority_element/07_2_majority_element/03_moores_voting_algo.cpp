#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> arr){
    int freq = 0, ans = 0;
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,2,1,1};

    int ans = majorityElement(arr);
    cout << ans;
    return 0;
}
