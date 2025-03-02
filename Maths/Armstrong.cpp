#include<iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int og = n;
    int new_last_digit;
    int sum = 0;
    while (n > 0) {
        int last_digit = n % 10;
        n = n / 10;
        new_last_digit = last_digit * last_digit * last_digit;
        sum += new_last_digit;
    }
    if(sum == og) cout << "Number is Armstrong";
    else cout << "Number is not Armstrong";
}