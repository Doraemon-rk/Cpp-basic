#include<iostream>
using namespace std;
int main (){

    
//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 


  int n = 5; // total number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        // Print increasing numbers: 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers: i-1 to 1
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

}