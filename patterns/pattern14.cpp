// Pattern 14:
// This or similar based on input size
// A
// AB
// ABC 
// ABCD
// ABCDE

#include<iostream>
using namespace std;

void pattern14(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << char('A' + j) << " "; 
         }
         cout << endl;
    }
}

int main() {
   int n;
   cout << "Enter a number: ";
   cin >> n;
   pattern14(n);
}