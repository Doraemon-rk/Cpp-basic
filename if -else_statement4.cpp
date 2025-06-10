#include <iostream>
using namespace std;

int main(){

    system("cls");

int age ;
cout << " enter the age " <<endl;
cin >> age;

if ( age >= 18 && age < 60){
    cout << "adult";
}
else {
        cout << "senior citizen";
    }

    
int num ;
cout << " enter the number"<< endl;
cin >> num;

if (num % 2 ==  0){
    cout << " yes it is even ";
}
else {
        cout << " no it is not even";
    }



int r;
cout << " enter the number" << endl;
cin >> r ;


if (r >= 100 && r < 100){
    cout << " it is a positive";
}
else {
        cout << " greater than 100";  
}



int radha , shyam;
cout << " enter the 1st   " <<endl;
cin >> radha;
cout << " enter the 2nd " << endl;
cin >> shyam ;

if (radha == shyam ){
    cout << " if they are equal";
}
else {
    if (radha > shyam ){
        cout << " radha is greater";
    }
    else {
        cout << " shyam is greater";
    }
}


int temp;
cout << "enter the temp"<< endl;
cin >> temp;

if (temp > 30 && temp < 40){
    cout << " hot ";
}
else {
        cout << " very hot ";
}


int marks ;
cout << " enter the marks "<< endl;
cin >> marks ;

if (marks >= 33 && marks < 75){
    cout << " pass";
}
else{
        cout << "Distinction";
    }

char a;
cout << " enter the alphabhet in small letters"<<endl;
cin >> a;

if (a == 'a'|| a == 'e' || a == 'i' || a == 'o' || a == 'u' ){
    cout << " yes it is a vowel "<<endl;
}
else {
    cout << "no it is not a vowel"<<endl;
}
}