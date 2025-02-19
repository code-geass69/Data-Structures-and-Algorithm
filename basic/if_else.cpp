#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n < 10){
        cout << "Less than 10" << endl;
    }
    else if (10 < n < 20 )
    {
        cout << "Between 10 and 20" << endl;
    }
    else{
        cout << "Greater than 20" << endl;
    }
    
}