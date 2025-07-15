#include<iostream>
using namespace std;
int main (){

// 1 
// 1 2 1 
// 1 2 3 2 1 
// 1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 

  for (int i= 1 ; i<=5 ; i++){
    
    for ( int j=1 ; j<=i ; j++){

      cout << j << " ";
    }

    for ( int k=i-1 ; k>=1 ; k--){

      cout << k << " ";
    }


    cout << endl;
  }
}