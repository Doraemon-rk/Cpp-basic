#include<iostream>
using namespace std;
int main(){

    
    int n ;
    cout << "enter the number"<<endl;
    cin >> n;

    // First method
    for (int i=0 ; i<=n ; i=i+4){
        cout << i << " ";
    }

    //second method 
    for (int i=0 ; i<=n ;i++){
        if (i % 4 == 0){
            cout << i << " ";
        }
    }
}