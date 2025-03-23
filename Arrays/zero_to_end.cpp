#include<iostream>
#include<vector>
using namespace std;

//TC ---> O(n)
//SC ---> O(n) extra space complexity
// void zeros(vector<int>& arr, int n){
//     vector<int> temp;
//     for(int i = 0; i < n; i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }
//     int nz = temp.size();
//     for (int i = 0; i < nz; i++)
//     {
//         arr[i] = temp[i];
//     }
//     for (int i = nz; i < n; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
    
// }

//Optimal
//TC --> O(n)
//SC --> O(1) extra space complexity
void zeros(vector<int>& arr, int n){
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    for (int  i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}

int main()
{
    int n;
    cout << "Enter a number elements in an arry: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    zeros(arr, n);
}