#include<iostream>
using namespace std;

int fib(int n){
    int t1=0;
    int t2=1;
    int t3;
  
    for(int i=0;i<n;i++){

    
    
    t3= t2+t1;
    t1=t2;
    t2=t3;

    }
 return t3;

}

int main(){
    int n;
    cout<<"enter nth term of fibonacci series"<<endl;
    cin>>n;

    int ans= fib(n);
    cout<<ans<<endl;
}
