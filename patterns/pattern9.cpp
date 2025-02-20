// Pattern 9:
// This or similar based on input size
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * * 
//        *
// Combination of pattern 7 + pattern 8
#include <iostream>
using namespace std;


void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        //space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        //star
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << " ";
        }
        //space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << "-";
        }
        cout << endl;
       
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        //space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        //star
        for (int j = 0; j < 2*n-(2*i + 1); j++)
        {
            cout << "*";
        }
        //space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
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
    pattern8(n);
}