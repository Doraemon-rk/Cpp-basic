#include<iostream>
using namespace std ;
int main (){

int sleep;
cout << " enter the sleeping hour"<<endl;
cin >> sleep;

if (sleep >= 8 && sleep < 10){
    cout << " Well rested";
}
else {
    if ( sleep >= 10){
        cout << " Oversleeping ";
    }
    else {
        cout << "Lack of sleep";
    }
}


int age ;
cout << " enter the age"<<endl;
cin >> age;

if (age > 10 and age <= 18 ){
    cout << "Minor";
}
else {
    if (age <= 10){
        cout << " Child";
    }
    else {
        cout << " Adult";
    }
}


int working ;
cout << " enter the working hour "<<endl;
cin >> working ;

if (working >= 8 and working < 12 ){
    cout << " Efficient";
}
else {
    if (working > 12 ){
        cout << " overworking";
    }
    else {
        cout << " Underutilized";
    }
}

}