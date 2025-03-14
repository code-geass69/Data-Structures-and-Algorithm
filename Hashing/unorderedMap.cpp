#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    cout << "Occurrences of all elements:\n";
    for(auto it : mpp) {  
        cout << it.first << " appears " << it.second << " times\n";
    }
}