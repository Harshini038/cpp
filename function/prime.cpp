#include<iostream>
using namespace std;


//1 - prime num
//0 - not a prime
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n;
    cin>>n;
    int res=isPrime(n);
    if(res==1){
        cout<<"prime";
    }
    else{
    cout<<"not prime";
    }
}