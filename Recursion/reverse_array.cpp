// // Traditional method:
#include<iostream>
using namespace std;


// void reverseArray(int arr[], int n){
//     int start = 0, end = n-1;
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// void printArray(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
// }
// int main() {
//     int arr[] = {10, 11, 12, 5 , 6 , 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     reverseArray(arr, n);

//     cout << "Reversed array: ";
//     printArray(arr, n);
// }

// Recursion method 1:
// void ReverseArray(int arr[], int l, int n){
//     if(l >= n) return;
//     swap(arr[l], arr[n]);
//     ReverseArray(arr, l+1, n-1);
// }

// int main(){
//     int arr[] = {10, 11, 12, 5 , 6 , 100};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     ReverseArray(arr, 0, n-1);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// Recursion method 2:
void ReverseArray(int arr[],int i, int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    ReverseArray(arr, i+1, n);
}

int main(){
    int arr[] = {10, 11, 12, 5 , 6 , 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    ReverseArray(arr, 0, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}