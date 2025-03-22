#include <iostream>
#include <vector>
using namespace std;

bool sorted(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true; 
}
int main()
{
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (sorted(arr, n))
    {
        cout << "Array is sorted.\n";
    }
    else
    {
        cout << "Array is not sorted.\n";
    }
}