#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            //cout<<"Not a prime";
            isprime=0;         //checking if numbers between 2 and n-1 are divisible by n
            break;
        }
    }

    if(isprime==0){
        cout<<"not a prime"<<endl;
    
    }
    else{
        cout<<"is a prime number"<<endl;
    }

}


//continue -skips iteration
//code under continue,is unreachable