#include<iostream>
#include<vector>
#include<set>
using namespace std;


// void arr_union(vector<int>& arr1, vector<int>& arr2, int num1, int num2){
//     set<int> st;
//     for (int i = 0; i < num1; i++)
//     {
//         st.insert(arr1[i]);
//     }
//     for (int i = 0; i < num2; i++)
//     {
//         st.insert(arr2[i]);
//     }
//     vector<int> temp;
//     for(auto it : st){
//         temp.push_back(it);
//     }
    

//Optimal       
void arr_union(vector<int>& arr1, vector<int>& arr2, int num1, int num2) {
    int i = 0, j = 0;
    vector<int> unionArr;

    while (i < num1 && j < num2) {
        if (arr1[i] <= arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < num1) {  // Fix: Increment i to avoid infinite loop
        if (unionArr.empty() || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;  // Fix: Increment i
    }

    while (j < num2) {
        if (unionArr.empty() || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    for (int x : unionArr) {
        cout << x << " ";
    }
}

int main()
{
    int num1, num2;
    cout << "Enter a number elements in an array 1: ";
    cin >> num1;
    cout << "Enter a number elements in an array 2: ";
    cin >> num2;
    vector<int> arr1(num1);
    vector<int> arr2(num2);
    for (int i = 0; i < num1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < num2; i++)
    {
        cin >> arr2[i];
    }
    arr_union(arr1, arr2, num1, num2);
}