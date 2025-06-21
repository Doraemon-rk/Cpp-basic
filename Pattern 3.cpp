#include<iostream>
using namespace std;
int main (){
    
    for (int i=1 ; i<=4 ; i++){
        for (int j=1 ; j<=4 ; j++){
            if (j==1 || j==4){
                cout << "*"<< " ";
            }
            else {
                if (j==1){
                    cout << 1 << " ";
                }
                else {
                    cout << 2 << " ";
                }
            }
        }
        cout << endl;
    }
}