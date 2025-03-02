// Pattern 15:
// This or similar based on input size
// ABCDE
// ABCD
// ABC
// AB
// A

#include<iostream>
using namespace std;

void pattern15(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i+1 ; j++){
            cout << char('A' + j);
        }
        cout << endl;
    }
}

int main() {
   int n;
   cout << "Enter a number: ";
   cin >> n;
   pattern15(n);
}