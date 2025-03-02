#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;  // Store the original number
    int reverse_num = 0;

    while (n > 0) {
        int last_digit = n % 10;
        reverse_num = (reverse_num * 10) + last_digit;
        n = n / 10;
    }

    return original == reverse_num; 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    bool result = isPalindrome(n);
    cout << "Is the number a palindrome? " << (result ? "Yes" : "No") << endl;

    return 0;
}
