#include<iostream>

using namespace std;

int summation(int i, int sum){
    if (i < 1) {
        return sum;
    }
    else{
        return summation(i - 1, sum + i);
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = summation(n , 0);
    cout << result;


}