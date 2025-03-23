#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& arr, int n){
    int temp = arr[0];
    for(int i = 0; i <= n-2; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    rotate(arr, n);
}