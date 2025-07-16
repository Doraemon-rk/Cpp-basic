#include<iostream>
using namespace std;
int main (){
     
//     1
//    1 2
//   1 2 3
//  1 2 3 4
 
 for (int i = 1; i <= 4; i++) {
 for (int s = 4; s >= i; s--) {
 cout << " ";
 }
 for (int j = 1; j <= i; j++) {
 cout << j << " ";
 }
 cout << endl;
 }
 
}