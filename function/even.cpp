#include<iostream>
using namespace std;

bool isEven(int a){
    if(a%2==0){
        return 1;

    }
    return 0;
}


int main(){
    int n;
    cout<<"enter number to check odd or even "<<endl;
    cin>>n;

    bool res=isEven(n);
    if(res == 1){
        cout<<"number is even "<<endl;

    }
    else{
        cout<<"number is odd"<<endl;
    }
    //cout<<res<<endl;
    //return 0;

}