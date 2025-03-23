#include<iostream>
#include<vector>
using namespace std;

int liner(vector<int>& arr, int n, int k){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
       
    }
    return -1;
}

int main()
{
    int n, k;
    cout << "Enter a number elements in an array: ";
    cin >> n;
    cout << "Enter number to find in array: ";
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = liner(arr, n, k);
    cout << "Element is present at index " << result << endl;
}