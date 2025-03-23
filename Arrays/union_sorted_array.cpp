#include<iostream>
#include<vector>
#include<set>
using namespace std;


void arr_union(vector<int>& arr1, vector<int>& arr2, int num1, int num2){
    set<int> st;
    for (int i = 0; i < num1; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < num2; i++)
    {
        st.insert(arr2[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
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