#include<iostream>
using namespace std;
int main (){

    system ("cls");


    int a;
    cout << "enter the number"<<endl;
    cin >> a;

    if (a >= 1 && a < 5){
        cout << "first half"<<endl;
    }
    else {
        if (a >= 6 && a < 10){
            cout << "second half"<<endl;
        }
        else {
            cout << "edge number"<<endl;
        }
    }


    int s;
    cout << " enter a number in between 0 to 9"<<endl;
    cin >> s;

    if (s == 2){
        cout << "even prime"<<endl;
    }
    else {
        if (s == 3 || s == 5 || s == 7){
            cout << "odd prime"<<endl;
        }
        else {
            cout << "not prime"<<endl;
        }
    }



    int hour;
    cout << " enter the hour"<<endl;
    cin >> hour;

    if (hour >= 5 && hour < 11){
        cout << "Good Morning";
    }
    else {
        if (hour >= 12 && hour < 16){
            cout << "Good Afternoon";
        }
        else {
            if (hour >= 17 && hour < 20){
                cout << "Good Evening";
            }
            else {
                cout << "Good Night";
            }
            }    }


int temp;
cout << " enter the temperature (in celsius)"<<endl;
cin >> temp;

if (temp == 0){
    cout << "Freezing";
}
else {
    if (temp > 0 && temp <= 15){
        cout << " cold";
    }
    else {
        if (temp >= 16 && temp <= 25){
            cout << "Pleasant";
        }
        else {
            if (temp >= 26 && temp <= 35){
                cout << " Warm";
            }
            else {
                cout << " Hot";
            }
        }
    }
}

}