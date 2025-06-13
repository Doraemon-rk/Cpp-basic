#include<iostream>
using namespace std;
int main (){

    int num ;
    cout << "enter the value of n"<<endl;
    cin >> num;

    bool isprime = true;

    for (int i=2 ; i<num ; i++){
        if (num % i==0){
            isprime = false;
            break;
        }
    }

    if (isprime == true){
        cout << "yes it is a prime number"<<endl;
    }
    else {
        cout << "it is not a prime number "<<endl;
    }
}
