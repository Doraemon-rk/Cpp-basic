#include<iostream>
using namespace std;
int main (){

    // ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

int n = 5; 

    for (int i = 1; i <= n; i++) {
        for (int s = 8; s >= i; s--) {
            cout << "*";
        }
        for (int j = 1; j <= i; j++) {
            cout << i;
            if (j != i) {
                cout << "*";
            }
        }
        for (int s = 8; s >=  i; s--) {
            cout << "*";
        
        cout << endl;
    }
}


}