#include<iostream>
using namespace std;


void liner(int a, int b){
    if(a<b) return;
    else{
        cout << a << endl;
        liner(a-1, b);
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    liner(n, 1);
}
