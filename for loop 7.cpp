#include<iostream>
using namespace std;
int main (){

    
    int a , b;

    cout << "enter the value of a"<<endl;
    cin >> a;

    cout << "enter the value of b"<<endl;
    cin >> b;

    for (int i=a ; i>=b ; i--){
        cout << i << " ";
    }
}