#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int>& arr, int n){
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }   
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

    bubble_sort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 
    return 0;

}