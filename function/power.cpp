#include<iostream>
using namespace std;

int power(int a,int b){
    int ans =1;
    
    for(int i =1;i<=b;i++){
        ans=ans*a;

    }
    //cout<<ans<<endl;
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<ans;

    return 0;
}