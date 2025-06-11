#include<iostream>
using namespace std ;
int main (){

    int x , y , c;
    cout << "enter the number of x"<<endl;
    cin >> x;

    cout << " enter the number of y"<<endl;
    cin >> y ;

    cout << "enter the number of c"<<endl;
    cin >> c;

    int n;
    cout << "enter the number "<<endl;
    cin >> n;

    for (int i=1 ; i<=n ; i++){
        c = (x+y)/2;
        cout << c << " ";
        x = x + 2;
        y = y + 3;
        cout << "number of loop :-" << i << endl;
        
    }
}