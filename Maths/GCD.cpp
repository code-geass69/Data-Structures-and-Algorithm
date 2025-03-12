#include <iostream>
using namespace std;
//Method 1
// int main()
// {
//     int n1, n2;
//     cout << "Enter first number: ";
//     cin >> n1;
//     cout << "Enter second number: ";
//     cin >> n2;
//     int gcd;
//     for (int i = 1; i <= min(n1, n2); i++)
//     {
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//            gcd = i;
//         }
//     }
//     cout << "GCD of the numbers is " << gcd;
// }

//Method 2
// int main()
// {
//     int n1, n2;
//     cout << "Enter first number: ";
//     cin >> n1;
//     cout << "Enter second number: ";
//     cin >> n2;
//     for (int i = min(n1,n2); i >= 1; i--)
//     {
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             cout << "GCD of the numbers is " << i;
//             break;
//         }
//     }
// }

//Method 3 -- Euclidean Method
int main()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    int gcd;
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2) n1 = n1%n2;
        else n2 = n2 % n1;
    }
    if (n1 == 0) gcd = n2;
    else gcd = n1;
    cout << "GCD of the numbers is " << gcd;
    
}