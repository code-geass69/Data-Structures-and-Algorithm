#include<iostream>
#include<vector>
using namespace std;

//method 1 ---> brute force
//TC --> O(NLOGN)
// void largest(vector<int>& arr, int n){
//     for (int i = 0; i <= n-1; i++)
//     {
//         int j = i;
//         while (j > 0 && arr[j] < arr[j - 1]){
//             swap(arr[j], arr[j - 1]);
//             j--;
//         }
//     }
//     int largest = arr[n-1];
//     cout << "Largest number in the array is: " << largest;
// }

// TC --> O(N)
void largest(vector<int>& arr, int n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Largest number in the array is: " << max;
    
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
    largest(arr, n);
    
}