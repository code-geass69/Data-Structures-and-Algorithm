// Pattern 7:
// This or similar based on input size
//       *
//     * * *
//   * * * * *
// * * * * * * *

#include <iostream>
using namespace std;
// void pattern7(int n){
//     for(int i = 0; i <= n; i++){
//         for(int j = 1; j < n-i+1 ; j++){
//             cout << " ";
//         }
//         for(int k = 0; k <= i; k++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        //space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << "-";
        }
        //star
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        //space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << "-";
        }
        cout << endl;
       
    }
}


int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    pattern7(n);
}