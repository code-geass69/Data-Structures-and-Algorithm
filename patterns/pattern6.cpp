// Pattern 5:
// This or similar based on input size
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1 

#include<iostream>
using namespace std;

void pattern3(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 1; j < n-i+1 ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
   int n;
   cout << "Enter a number: ";
   cin >> n;
   pattern3(n);
}