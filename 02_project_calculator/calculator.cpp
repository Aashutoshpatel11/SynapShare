#include<iostream>
using namespace std;

int main(){
    int a,b,task;
    cout<<"Enter the number of operation from the given list:"<<endl;
    cout<<"1: add"<<endl<<"2: substract"<<endl<<"3: multiply"<<endl<<"4: divide"<<endl;
    cin>>task;
    cout<<"Enter number : ";
    cin>>a;
    cout<<"Enter number : ";
    cin>>b;


    switch(task){
        case 1:cout<<a+b<<endl;
        break;
        case 2:cout<<a-b<<endl;
        break;
        case 3:cout<<a*b<<endl;
        break;
        case 4:cout<<a/b<<endl;
        break;
    }
    return 0;
}