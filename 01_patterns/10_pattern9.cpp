#include <iostream>
using namespace std;

// 1 1 1 1
//   2 2 2
//     3 3
//       4

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++ ){
            cout << "  ";
        }

        for(int k = n; k > i; k--){
            cout << i + 1 <<" ";
        }

        cout << endl;
    }
    return 0;
}