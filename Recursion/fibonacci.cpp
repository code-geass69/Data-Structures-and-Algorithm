//Pattern 0 1 1 2 3 5 8 13 
//Traditional method
// #include <iostream>
// #include <vector> 

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (n <= 0) {
//         cout << "Invalid input. n should be >= 1" << endl;
//         return 1;
//     }

//     vector<int> a(n); 
//     a[0] = 0;
//     if (n > 1) {
//         a[1] = 1;
//         for (int i = 2; i < n; i++) {
//             a[i] = a[i - 1] + a[i - 2];
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


//Recursion 
#include<iostream>
using namespace std;

int f(int n){
    if(n <= 1) return n;
    return f(n-1) + f(n-2);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << f(i) << " "; 
    }
    
    return 0;
}
