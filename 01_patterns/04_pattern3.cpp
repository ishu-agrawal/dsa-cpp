#include <iostream>
using namespace std;

// 1 2 3 
// 4 5 6
// 7 8 9 

int main(){
    int n;
    cout<< "Enter number: ";
    cin >> n;
    int cnt = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}