/*
print pattern
    1
    21
    321
    4321
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row-col+1;   //for reversing i-j+1 for this patter 
            
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
