#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter amount"<<endl;
    cin>>n;

    int note;
    cout<<"enter note required"<<endl;
    cin>>note;

    switch(note){
        case 100: cout<<"Number of 100 rupees note required: "<<endl;
        cout<<(n/100)<<endl;

        case 50:
        int n1=n-(n/100);
        cout<<"number of 50 rupees note required"<<endl;
        cout<<(n1/50)<<endl;

        case 20:
        int n2= n1- (n1/50);
        cout<<"number of 20 rupees note required"<<endl;
        cout<<(n2/20)<<endl;

        case 10:
        int n3= n2- (n2/20);
        cout<<"number of 10 rupees note required"<<endl;
        cout<<(n3/10)<<endl;



    }
     
}