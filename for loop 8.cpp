#include<iostream>
using namespace std;
int main (){

    int n;
    cout << "enter the number"<<endl;
    cin >> n;

    int sum = 0;

    for (int i=1 ; i<=n ; i++){
        sum = sum+1;
        cout << i <<" ";
    }
        cout << "the total sum is :- "<< sum << endl; 
    
}