#include <iostream>
using namespace std;

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "  ";
        }

        for(int k=0; k<=i; k++){
            cout << k+1 << " ";
        }

        if(i != 0) {
            for(int l=i; l>0; l--){
                cout << l <<" ";
            }
        }

        cout<< endl;
    }

    return 0;
}