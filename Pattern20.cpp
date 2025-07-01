#include<iostream>
using namespace std;
int mian(){

    
       // Hollow Diamond  Pyramid

//       * 
//      * * 
//     *   * 
//    *     * 
//   *       * 
//  *         * 
//  *         * 
//   *       * 
//    *     * 
//     *   * 
//      * * 
//       * 

    for (int i=1 ; i<=6 ; i++){

    for (int j=i ; j<=6 ; j++){
      cout << " ";
    }
    for (int k=1 ; k<=i ; k++){
      // cout << "* ";
      if (k==1 || i==1 ||i==k  ){
        cout << "* ";
      }else {
        cout << " "<< " ";
      }
    }
    cout << endl;
  }
  for (int i=6 ; i>=1 ; i--){

    for (int j=i ; j<=6 ; j++){
      cout << " ";
    }
    for (int k=1 ; k<=i ; k++){
      // cout << "* ";
      if (k==1 || i==1 ||i==k  ){
        cout << "* ";
      }else {
        cout << " "<< " ";
      }
    }
    cout << endl;
  }
}