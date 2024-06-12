#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int randomNum = rand()%1001;
    int check;
    while( check!=randomNum ){
        cout<<"Guess the Random Number: ";
        cin>>check;
        if( check == randomNum ){
            cout<<"You guessed it right..."<<endl;
            break;
        }else if( check > randomNum ){
            cout<<"Random Number is smaller than you guessed "<<endl<<"try again :";
        }else{
            cout<<"Random Number is greater than you guessed "<<endl<<"try again :";
        }
    }
    return 0;
}