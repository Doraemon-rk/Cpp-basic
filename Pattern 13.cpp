#include<iostream>
using namespace std;
int main (){

      for (int i=1 ; i<=5 ; i++){
        for (int j=1 ; j<=5 ; j++){
            if (i==1 || i==5 ){
                if (j==1 || j==5){
                    cout << "*";
                } 
            }
            else{
                if (i==2 || i==4){
                    if (j==2 || j==4 ){
                        cout << "*";
                    }
                }
            }
            if (i==3){
                if (j==3){
                    cout <<"*";
                }
                else {
                    cout << " " ;
                }
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}