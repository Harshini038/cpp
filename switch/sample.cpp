#include<iostream>
using namespace std;

int main(){
    int num=2;

    cout<<endl;

    switch(num){

        case 1: cout<< "First "<<endl;
                break;

        case 2:cout<< "Second"<<endl;
               break;

        default: cout<< "it is default case"<<endl;

    }
}

/*
if it doesnt match any case,default case will run
*/