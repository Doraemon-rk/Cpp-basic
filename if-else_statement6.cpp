#include<iostream>
using namespace std ;
 int main (){

   system ("cls");
    int day;
    cout << " enter the day" << endl;
    cin >> day;

    switch (day){
        case 1:
        cout << "Monday" << endl;
        break;
        case 2:
        cout << " tuesday" << endl;
        break;
        case 3:
        cout << " wednesday" << endl;
        break;
        case 4 :
        cout << "thursday" << endl;
        break;
        case 5 :
        cout << " friday"<< endl;
        break;
        case 6:
        cout << "saturday" << endl;
        break;
        case 7 :
        cout << " sunday"<< endl;
        break;
        default :
        cout << "invailde "<<endl;
    }

    int month;
    cout << " enter the month"<<endl;
    cin >> month;

    switch (month){
        case 1 :
        cout << " january "<< endl;
        break;
        case 2 :
        cout << " february"<< endl;
        break;
        case 3 :
        cout << " march "<< endl ;
        break;
        case 4 :
        cout << " april"<< endl;
        break;
        case 5 :
        cout << " may "<< endl;
        break;
        case 6 :
        cout << " june "<< endl;
        break;
        case 7 :
        cout << " july "<< endl;
        break;
        case 8:
        cout << " august"<< endl;
        break;
        case 9:
        cout << " september"<< endl;
        break;
        case 10 :
        cout << "october "<< endl;
        break;
        case 11:
        cout << " november"<< endl;
        break;
        case 12 :
        cout << " december"<<endl;
        break;
        default :
        cout << " invailed "<< endl;
    }
    


    int num;
    cout << " enter the num"<<endl;
    cin >> num;

    switch (num){
        case 1:
        cout << "one " << endl;
        break;
        case 2:
        cout << " two" << endl;
        break;
        case 3:
        cout << " three" << endl;
        break;
        case 4:
        cout << " four" << endl;
        break;
        case 5:
        cout << " five" << endl;
        break;
        default :
        cout << " invailde";
    }


    int symbol;
    cout << "enter the symbol"<< endl;
    cin >> symbol;

    switch (symbol){
        case '+':
        cout << " Add "<< endl;
        break;
        case '-':
        cout << " Subtract "<<endl;
        break;
        case '*':
        cout << " Multiply "<<endl;
        break;
        case '/':
        cout << " Divide "<<endl;
        break;
        default :
        cout << " invailde "<<endl;

    }



    char grade ;
    cout << " enter the remark"<<endl;
    cin >> grade ;
 
    switch (grade ){
        case 'A':
        cout << "  excellent "<< endl;
        break;
        case 'B':
        cout << " Good"<< endl;
        break;
        case 'C':
        cout << "Average"<<endl;
        break;
        case 'D':
        cout << "poor"<< endl;
        break;
        case 'F':
        cout << " Fail"<<endl;
        break;
        default :
        cout << " invailde"<<endl;

    }


     char menu;
     cout << " enter the menu"<<endl;
     cin >> menu;

     switch (menu){
        case 'A':
        cout << "+"<<endl;
        break;
        case 's':
        cout << "-"<<endl;
        break;
        case 'm':
        cout << "*"<<endl;
        break;
        case 'd':
        cout << "/"<<endl;
        break;
        default :
        cout << " invailde"<<endl;
    
     }


    int digit;
    cout << " enter the digit (0-9)"<<endl;
    cin >> digit;

    switch (digit){
        case 0:
        cout << " even number"<<endl;
        break;
        case 1:
        cout << " odd number"<<endl;
        break;
        case 2:
        cout << " even number"<<endl;
        break;
        case 3:
        cout << " odd number"<<endl;
        break;
        case 4:
        cout << " even number"<<endl;
        break;
        case 5:
        cout << " odd number"<<endl;
        break;
        case 6:
        cout << " even number"<<endl;
        break;
        case 7:
        cout << " odd number"<<endl;
        break;
        case 8:
        cout << " even number"<<endl;
        break;
        case 9:
        cout << " odd number"<<endl;
        break;
        default :
        cout << " invalide "<<endl;
        
    }


    char vowel;
    cout << " enter the alphabhet in small latter"<<endl;
    cin >> vowel;

    switch (vowel){
      case 'a':
      cout << "vowel";
      break;

      case 'e':
      cout << " vowel";
      break ;

      case 'i':
      cout << "vowel";
      break;

      case 'o':
      cout << "vowel";
      break;

      case 'u':
      cout << "vowel";
      break;

      default :
      cout << "consonant";
      break;

    }


   int shape;
   cout << " enter the corresponding shape"<< endl;
   cin >> shape ;

   switch (shape){
      case 1:
      cout << " Circle"<< endl;
      break;
      case 2:
      cout << " Square"<<endl;
      break;
      case 3:
      cout << " triangle"<<endl;
      break;
      case 4:
      cout << " Rectangle"<<endl;
      break;
      default :
      cout << " invalide"<<endl;
   }





    int a;
    cout << " enter the a (1-3)"<< endl;
    cin >> a;

    switch (a){
      case 1:
      cout << " C++ "<<endl;
      break;
      case 2:
      cout << " Python "<<endl;
      break;
      case 3:
      cout << " Java "<<endl;
      break;
      default :
      cout << " invalide"<<endl;

    }



   int ATM;
   cout << " enter the information for ATM"<<endl;
   cin >> ATM;

   switch (ATM){
      case 1:
      cout << " Balance check"<<endl; 
      break;
      case 2:
      cout << " Withdraw"<<endl;
      break;
      case 3:
      cout << " Deposit"<<endl;
      break;
      case 4:
      cout << " Exit"<<endl;
      break;
      default :
      cout << " invalide"<<endl;
      
   }
 }