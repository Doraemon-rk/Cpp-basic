#include<iostream>
using namespace std;
int main (){

    system ("cls");
    int a ;
    cout << " enter the value of a"<<endl;
    cin >> a;

    switch (a){
        case 1:
        cout << " Beginner";
        break;
        case 2:
        cout << " Learner";
        break;
        case 3:
        cout << " Intermediate";
        break;
        case 4:
        cout << " Advance";
        break;
        case 5:
        cout << " Expert";
        break;
        default :
        cout << " invalid ";
    }


    char color;

    cout << "enter the color"<<endl;
    cin >> color;


    switch (color){
        case 'R':
        cout << "RED";
        break;

        case 'G':
        cout << "GREEN";
        break;

        case 'B':
        cout << "BLUE";
        break;

        case 'Y':
        cout << "YELLOW";
        break;

        default :
        cout << " invalid grade ";
    }


    char grade ;
    cout << "enter the grade"<<endl;
    cin >> grade;

    switch ( grade){
        case 'A':
        cout << " Awesome"<<endl;
        break;
        case 'B':
        cout << " Brillint"<<endl;
        break;
        case 'C':
        cout << " Cool"<<endl;
        break;
        case 'D':
        cout << " Decent"<<endl;
        break;
        case 'F':
        cout << " Fail"<<endl;
        break;
        default:
        cout << "invaild grade";

     }

    int num1 , num2;
    char operand ;

    cout << " enter the first number"<< endl;
    cin >> num1 ;
    cout << " enter the second number"<< endl;
    cin >> num2 ;

    cout << " enter the expression with which you want to evaluate"<< endl;
    cin >> operand ;

    switch (operand){
        case '+':
        cout <<  num1 + num2<<endl;
        break;

        case '-':
        cout << num1 - num2<<endl;
        break;

        case '*':
        cout << num1 * num2<<endl;
        break;

        case '/':
        if (num2 = 0){
            cout << num1 / num2<<endl;
        }
        else {
            cout << "dividing a number by 0 is not possible"<< endl;
        }
        break;

        case 'A':
        if (num1 + num2 / 2){
            cout << num1 + num2 / 2 <<endl;
        }
        else {
            cout << "not average a number "<<endl ;
        }
        break;

        case 'g':
        if(num1 > num2){
            cout << "the first number " << num1 << " is greater" << endl;
            break;
        } 
        else{
            if(num1 < num2){
            cout << "the second number " << num2 << " is greater" << endl;
            break;
            } 
            else {
                cout << "both numbers are equal" << endl;
                break;
            }
        }

    case 'c':
         if(num1 < num2){
            cout << "the number " << num1 << " is smaller" << endl;
            break;
        } 
        else{
            if(num1 > num2){
            cout << "the number " << num2 << " is smaller" << endl;
            break;
            } 
            else {
                cout << "both numbers are equal" << endl;
                break;
            }
    }
    default:
    cout << "invalide";

}
}