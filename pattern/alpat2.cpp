/*
 A
 BB
 CCC
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch=('A'+i-1);
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}

/*
 A
 BC
 DEF

  for this pattern its increasing so introduce a count variable 
  and increment

  char value ='A'

  cout<<value;
  value =value+1;

  for triangle pattern :
    row from 1 to n
      col from 1 to row

  for square pattern :
    row from 1 to n
      col from 1 to n



*/