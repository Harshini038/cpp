/*
print
1.
    *
   **
  ***
 ****

2.
 ****
 ***
 **
 *

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int row =1;
    //first pattern
    while(row<=n){
        //print space 
        int space =n -row;
        while(space){
            cout<<" ";
            space =space -1;
        }

        //print stars
        int col =1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row=row+1;
    }

    //second pattern



}