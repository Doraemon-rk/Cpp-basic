#include<iostream>
using namespace std;
int main (){

    int sum = 0;
    int n ;
    cout << "enter the numeber"<<endl;
    cin >> n;

    int i = 1;
    while (i <= n){
        sum = sum+i;
        i++;
    }
    cout << "the sum of the provided number from is 1 :- "<< sum << " "; 
}