#include <iostream>
using namespace std;

// A B C D
// A B C D
// A B C D
// A B C D

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    for(int i=0 ;i < n; i++){
        char ch = 'A';
        for(int j=0; j<n; j++){
            cout<<ch << " ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}