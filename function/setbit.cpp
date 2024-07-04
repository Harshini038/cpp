#include<iostream>
#include<math.h>
using namespace std;

/*int dec_to_bin(int a){

   int i=0;
   int ans=0;
    while(a!=0){
        int bit = a&1;
        ans = (bit * pow(10,i) +ans );
        a = a>>1;
        i++;
        
    }
    return ans;  
}*/

int countset(int n){
    
    int count=0;
    while(n!=0){
        int bit =n&1;
        if(bit==1){
            count++;
        }
    n=n>>1;
    }
    return count;
}

int setbit(int a,int b){
    //int bit1=dec_to_bin(a);
    //int bit2=dec_to_bin(b);

    int counta=countset(a);
    int countb=countset(b);

    int setbits=counta+countb;
    return setbits;


}

int main(){
    int a,b;
    cin>>a>>b;
    int res =setbit(a,b);
    cout<<res<<endl;

}