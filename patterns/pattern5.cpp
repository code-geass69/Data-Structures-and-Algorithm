// Pattern 5:
// This or similar based on input size
// * * * * * 
// * * * * 
// * * * 
// * *
// * 

#include<iostream>
using namespace std;

void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i+1 ; j++){
            cout << "* ";
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