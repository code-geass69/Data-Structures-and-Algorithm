#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Input array size and elements
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int hash[100000] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }
    int max_freq = 0, min_freq = INT_MAX;
    int max_element = -1, min_element = -1;
    
    cout << "Occurrences of all elements:\n";
    for(int i = 0; i < 100000; i++) {
        if(hash[i] > 0) {  
            cout << i << " appears " << hash[i] << " times\n";
            if(hash[i] > max_freq) {
                max_freq = hash[i];
                max_element = i;
            }
            if(hash[i] < min_freq) {
                min_freq = hash[i];
                min_element = i;
            }
        }
    }
    cout << "Element with highest occurrence: " << max_element << " appears " << max_freq << " times\n";
    cout << "Element with lowest occurrence: " << min_element << " appears " << min_freq << " times\n";
    return 0;
}

