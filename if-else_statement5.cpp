#include<iostream>
using namespace std;
int main (){

    system("cls");

    int grade;
    cout << " enter the marks "<<endl;
    cin >> grade;

    if (grade >= 90){
        cout << " A grade"<<endl;
    }
    else {
        if ( grade >= 80 && grade < 90){
            cout << "B grade"<<endl;
        }
        else {
            if (grade >= 70 && grade < 80){
                cout << " C grade "<<endl;
            }
            else {
                if ( grade >= 60 && grade < 70){
                    cout << " D grade "<<endl;
                }
                else {
                    cout << "fail"<<endl;
                }
            }
        }



    int num ;
    cout << " enter the value of num "<<endl;
    cin >> num;

    if ( num > 0){
        cout << " positive"<<endl;
    }
    else{
        if ( num < 0 ){
            cout<< " negative "<<endl;
        }
        else {
            cout << " zero"<<endl;
        }
    }


    int month;
    cout << " enter the month number (1-12)"<<endl;
    cin >> month;

    if (month >= 1 && month < 2){
        cout << "january";
    }
    else {
        if ( month >= 2 && month < 3){
            cout << "february";
        }
        else {
            if (month >= 3 && month < 4){
                cout << " march";
            }
            else {
                if ( month >= 4 && month < 5){
                    cout << " april ";
                }
                else {
                    if ( month >= 5 && month < 6){
                        cout << " may";
                    }
                    else {
                        if (month >= 6 && month < 7){
                            cout << " june ";
                        }
                        else {
                            if ( month >= 7 && month < 8){
                                cout << " july";
                            }
                            else {
                                if (month >= 8 && month < 9){
                                    cout << " august";
                                }
                                else {
                                    if ( month >= 9 && month < 10){
                                        cout << " september";
                                    }
                                    else {
                                        if (month >= 10 && month < 11){
                                            cout << " october";
                                        }
                                        else {
                                            if (month  >= 11 && month < 12){
                                                cout << " november";
                                            }
                                            else {
                                                if (month >= 12 && month < 13){
                                                    cout << "december";
                                                }
                                                else {
                                                    cout << " invailde ";
                                                }
                                            }
                                        }
                                    }
                                }
                                
                        
                        }

                    }
                }
            }
        }
    }

}

int speed ;
cout << "enter the speed " << endl;
cin >> speed ;

if (speed < 40){
    cout << " slow";
}
else {
    if (speed > 40 && speed < 80){
        cout << " moderate";
    }
    else {
        if ( speed >= 80 ){
            cout << " fast";
        }
    }
}



int age ;
cout << " enter the age " << endl;
cin >> age ;

if (age >= 0 && age < 12){
    cout << " child";
}
else {
    if (age >= 13 &&age < 19){
        cout << " teenager";
    }
    else {
        if ( age >= 20 && age < 59){
            cout << " Adult ";
        }
        else {
            if (age >= 60){
                cout << " senior";
            }
        }
    }
}




int r ;
cout << " enter check the number "<< endl ;
cin >> r ;

if (r > 10){
    cout << " even";
}
else {
    if ( r < 10){
        cout << " odd";
    }
    else {
        cout << "or something";
    }
}


int worked ;
cout << " enter the  worked time "<< endl;
cin >> worked;

if (worked >= 8){
    cout << " overtime ";
}
else {
    if ( worked >= 6 and worked <= 8){
        cout << " normal time ";
    }
    else {
        if (worked < 6){
            cout << " less time ";
        }
    }
}


int income ;
cout << " enter the value of income"<<endl;
cin >> income;

if (income <= 1L){
    cout << " low income ";
}
else {
    if (income >= 1L and income <= 5L){
        cout << " Middle";
    }
    else {
        if (income >= 5L ){
            cout << " high income ";
        }
    }
}


}    
}
