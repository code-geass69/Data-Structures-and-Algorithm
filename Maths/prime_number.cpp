#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if(n % i == 0) cout << "Number is prime";
        else cout << "Number is not prime";
    }
    
}