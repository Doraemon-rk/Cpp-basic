#include<iostream>
using namespace std;
int main (){

    int i = 2;
    while (i <= 100){
        if (i % 2 == 0){
            cout << i << " ";
            i=i+2;
        }
    }
}