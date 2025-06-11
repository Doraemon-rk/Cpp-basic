#include<iostream>
using namespace std;
int main (){

    
    int n ;
    cout << "enter the number"<<endl;
    cin >> n;

    // First method
    for (int i=5 ; i<=n ; i=i+2){
        cout << i << " ";
    }

    //second method 
    for (int i=5 ; i<=n ;i++){
        if (i % 2 != 0){
            cout << i << " ";
        }
    }


}