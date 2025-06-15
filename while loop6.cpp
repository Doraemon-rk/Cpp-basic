#include<iostream>
using namespace std;
int main (){

    int fact = 1;
    int n;
    cout << "enter the number"<<endl;
    cin >> n;

    int i = n;
    while (i >= 1){
        fact = fact*i;
        i--;
    }
    cout << "the factorial of a given number is :-"<< fact <<" ";
}