#include <iostream>
using namespace std;

bool palindrome(int i, string s, int n) {
    if (i >= n / 2) return true;  // Base case: If we checked half of the string, it's a palindrome
    if (s[i] != s[n - i - 1]) return false;  // If mismatch found, return false
    return palindrome(i + 1, s, n);  // Continue checking
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int n = s.size();  // Corrected syntax to get size of string
    bool result = palindrome(0, s, n);
    cout << (result ? "Palindrome" : "Not a Palindrome") << endl;
    return 0;
}
