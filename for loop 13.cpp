#include<iostream>
using namespace std;
int main (){
    
    int sum=0;
    for (int i=0 ; i<=100 ; i=i+2){
        if (i%2 ==0){
            cout << i << " ";
        }
        sum=sum +i;
    }
    cout << endl;
    cout << " sum of the last number :- "<< sum<< " ";
}