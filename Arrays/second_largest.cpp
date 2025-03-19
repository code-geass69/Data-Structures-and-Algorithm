#include<iostream>
#include<vector>
using namespace std;

//method 1 ---> brute force
//TC --> O(NLOGN + N)
// void second_largest(vector<int>& arr, int n){
//     for (int i = 0; i <= n-1; i++)
//     {
//         int j = i;
//         while (j > 0 && arr[j] < arr[j - 1]){
//             swap(arr[j], arr[j - 1]);
//             j--;
//         }
//     }
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if(arr[n-1] != arr[i]) {
//             int second_largest = arr[i];
//             cout << "Second Largest number in the array is: " << second_largest;
//             break;
//         }
//     }
    
// }

//TC --> O(2N) ---> Better sol
// void second_largest(vector<int>& arr, int n){
//     int max = arr[0];
//     int second_max = -1;
//     for (int i = 1; i < n; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     for(int i = 0; i <= n; i++){
//         if(arr[i] > second_max && arr[i] < max){
//             second_max = arr[i];
//         }
//     }
//     cout << "Second Largest number in the array is: " << second_max;
// }

//TC --> O(2N) ---> Optimal sol
void second_largest(vector<int>& arr, int n){
    int max = arr[0];
    int second_max = -1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > second_max){
            second_max = arr[i];
        }
    }
    cout << "The second largest number in the array is: " << second_max;
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
    second_largest(arr, n);
    
}