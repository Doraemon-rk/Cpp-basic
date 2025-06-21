#include<iostream>
using namespace std;
int main (){

    for (int i=1 ; i<=4 ; i++){
        for (int j=1 ; j<=4 ; j++){
            if (i==1){
                cout << 1 << " ";
            }
            else {
                if (i==2){
                    cout << "*"<< " ";
                }
                else {
                    if (i==3){
                        cout << "#"<< " ";
                    }
                    else{
                        cout << 3 << " ";
                    }
                }
            }
        }
        cout << endl;
    }

}