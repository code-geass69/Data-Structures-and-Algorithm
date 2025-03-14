#include<iostream>

using namespace std;

int main(){
    int arr[] = {5, 6, 6, 7, 8 ,2, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == number){
            count++;
        }
    }
    cout << count;
}