// Pattern 3:
// This or similar based on input size
// 1
// 1 2  
// 1 2 3  
// 1 2 3 4

#include<iostream>
using namespace std;

void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " " ;
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