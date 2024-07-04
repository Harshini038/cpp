
     /*

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

    int row=1;
    while(row<=n){
        int space=1;
        while(space<=row){
            space=row -1;
            cout<<" ";
            space = space +1;

        }
        int star=1;
        while(star<=n){
            star =n-row+1;
            cout<<"*";
            star = star -1;
        }
        cout<<endl;
        row=row+1;
        
    }
   }