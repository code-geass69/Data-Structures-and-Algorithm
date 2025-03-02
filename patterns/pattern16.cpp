// Pattern 16:
// This or similar based on input size
// A
// BB
// CCC
// DDDDD

#include<iostream>
using namespace std;

void pattern16(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0   ; j <= i; j++){
            cout << char('A' + i);
        }
        cout << endl;
    }
}

int main() {
   int n;
   cout << "Enter a number: ";
   cin >> n;
   pattern16(n);
}