#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// brute force
//  void rotate(vector<int>& arr, int n, int k){
//      int d = k % n;
//      vector<int> temp(d);
//      for(int i = 0; i < d; i++){
//          temp[i] = arr[i];
//      }
//      for(int i = d; i < n; i++){
//          arr[i - d] = arr[i];
//      }
//      for (int i = n - d; i < n; i++){
//          arr[i] = temp[i - (n-d)];
//      }
//      for (int i = 0; i < n; i++){
//          cout << arr[i] << " ";
//      }

// }
void rotate(vector<int> &arr, int n, int k)
{   
    k = k % n;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}


int main()
{
    int n, k;
    cout << "Enter a number elements in an arry: ";
    cin >> n;
    cout << "Enter steps to rotate the enter: ";
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, n, k);
}