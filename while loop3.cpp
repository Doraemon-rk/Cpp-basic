#include<iostream>
using namespace std;
int main (){

    int num = 5;
    while (num > 0){
        if (num == 3){
            break;
        }
        cout << num << " ";
        num --;  // output :- 5 4
    }
}