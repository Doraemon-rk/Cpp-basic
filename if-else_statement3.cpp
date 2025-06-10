#include<iostream>
using namespace std;

int main (){

    int x = 0;

    if (x == 0){
        cout << "ohh yes , x is zero "<<endl;
    }
    else{
        cout << "ohh no , x is not zero"<<endl;

    }

    int x = 65;
    if (x >= 65){
        cout << "you are eligible to retire "<<endl;
    }
    else{
       cout << "you are not eligible to retire "<<endl;
          
    }

    int a, b;

    cout << "hey please enter the value of a "<< endl;
    cin >> a;
    
     cout << "now please enter the value of b "<< endl;
    cin >> b;

    if(a==b){
        cout << "here both a and b are equal"<< endl;
    }
    else {
         cout << "here both a and b are not equal"<< endl;
         
    }


    int x , y ;
    cout << "hey please enter the value of x"<<endl;
    cin >> x;

    cout << "hey please enter the value of y"<<endl;
    cin >> y;

    if (x< y ){
        cout << "the multiplication of x and y :- " <<x*y << endl;
    }
    else{
        cout << " the division of x and y :- " << x/y << endl;

    }

    int x ;
    cout << "enter the value of x " << endl;
    cin >> x;

   
    if (x % 5 == 0 and x % 3 == 0){
        cout << "it is divisible 3 and 5";
    }
    else {
        cout << " it is not divisible 3 and 5";
    }


    int x;
    cout << "hey please enter the value of x";
    cin >> x;

    if (x % 4 == 0){
        cout << " it is a  leap year";
    }
    else {
        cout << " it is not a leap year";
    }


    int x , y;
    cout << "hey please enter the value of x ";
    cin >> x;

    cout << "now please enter the value of y ";
    cin >> y ;

    if (x > y){
        cout << "x is gretre then y";
    }
    else {
        cout << "x is less than y";

    }


}