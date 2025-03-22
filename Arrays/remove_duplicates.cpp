//Remove duplicates from sorted array
#include <iostream>
#include <set>
#include <vector>
using namespace std;

//Brute Force
// void removeDuplicates(vector<int>& arr) {
//     set<int> s(arr.begin(), arr.end()); 
//     vector<int> arr2(s.begin(), s.end());
//     for (int num : arr2) {
//         cout << num << " ";
//     }
//     cout << endl;
// }

//Optimal
int removeDuplicates(vector<int>& arr, int n) {
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
        
    }
    return i+1;
    
}

int main(){
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int newLength = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}