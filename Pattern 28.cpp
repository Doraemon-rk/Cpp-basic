#include<iostream>
using namespace std;
int main (){

  //      1
  //     1 2
  //    1   3
  //   1     4
  //  1 2 3 4 5

    for (int i=1 ; i<=5 ; i++){

    for (int j=i ; j<=5 ; j++){
      cout << " ";
    }
    for (int k=1 ; k<=i ; k++){
      // cout << "* ";
      if (k==1 || i==1 ||i==k || i==5 ){
        cout << k << " ";
      }else {
        cout << " "<< " ";
      }
    }
    cout << endl;
  }

}