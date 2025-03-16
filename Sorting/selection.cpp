#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int>& arr, int n){
    for (int i = 0; i < n-1; i++)
    {
        int mini = i;
        for (int j = i; j <= n-1; j++)
        {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    
}

int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        arr.push_back(value);
    }

    selection_sort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 
    return 0;

}