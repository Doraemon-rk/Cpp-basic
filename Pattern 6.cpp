#include<iostream>
using namespace std;
int main (){
    
    for(int i=1 ; i<=4 ; i++){
        for (int j=1 ; j<=4 ; j++){
            if (i==1 || i==4){
                if (j==1 || j==4){
                    cout << "#";
                }
                else{
                    cout << "*"<< " ";
                }
            }
            else {
                cout << "*";
            }

        }
        cout << endl;
    }


}