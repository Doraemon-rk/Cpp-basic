#include<iostream>
using namespace std;
int main (){
   
    system ("cls");
   
    int student ;
    cout << "enter the student attendance percentage  "<<endl;
    cin >> student;

    if (student == 100){
        cout << " Perfect Attendance !";
    }
    else {
        if (student >= 75 and student < 100){
            cout << " Allowed to sit in exam ";
        }
        else {
            cout << " Not allowed ";
        }
    }


    int a,b ;
    cout << " enter the value of a"<<endl;
    cin >> a;
    cout << " enter the value of b"<<endl;
    cin >> b;

    if ( a == b){
        cout << " consistent performer";
    }
    else {
        cout << " they are not equal";
    }


    int age ;
    cout << " enter the age"<<endl;
    cin >> age;

    if (age < 18){
        cout << " Too young";
    }
    else {
        if (age == 18){
            cout << " Just eligible";
        }
        else {
            cout << " Eligible";
        }
    }


    int x,y;
    cout << " enter the positive num"<<endl;
    cin >> x;
    cout << " enter the negative num"<<endl;
    cin >> y;

     if (x == y and y == x ){
        cout << "Same sign";
     }
     else {
        cout << " Different sign ";
     }



    int unit ;
    cout << " enter the electricity unit "<<endl;
    cin >> unit;

    if (unit < 100){
        cout << " Low usage";
    }
    else {
        if (unit >= 100 && unit < 300){
            cout << " Medium usage";
        }
        else {
            if(unit >=300){
                cout << " high usage";
            }
        }
    }

}