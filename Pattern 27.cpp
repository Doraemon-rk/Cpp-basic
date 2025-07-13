#include<iostream>
using namespace std;
int main (){

  // 1
  // 1 2
  // 1   3
  // 1     4
  // 1 2 3 4 5

   for (int i=1 ; i<=5 ; i++){
      for (int j=1 ; j<=i ; j++){
          //cout << j << " ";
          if ( i==1 || i==5 || i==j || j==1|| j==6){
            cout << j << " ";
          }
          else {
            cout << " " << " ";
          }
      }
      cout << endl;
     }
}