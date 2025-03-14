#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Input array size and elements
    string s;
    cout << "Enter a string: ";
    cin >> s;    
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a'] +=1;
    }
    cout << "Occurrences of all elements:\n";
    for(int i = 0; i < 26; i++) {
        if(hash[i] > 0) {  
            cout << char(i + 'a') << " appears " << hash[i] << " times\n";
        }
    }
    return 0;
}

