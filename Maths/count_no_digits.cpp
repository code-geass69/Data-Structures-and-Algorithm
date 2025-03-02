#include<iostream>
#include<math.h>
using namespace std;
// int main() {
//     int N;
//     cout << "Enter a number: ";
//     cin >> N;
//     int count = 0;
//     while (N > 0)
//     {
//         // int last_digit = N % 10;
//         N = N/10;
//         count += 1;
//     }
//     cout << "Number of Digits: " << count;
// }

// Method 2 //

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = (int) (log10(n) + 1);

    cout << "Number of digits: " << count;
}
