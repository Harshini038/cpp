
    /*
     1.
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
    //int i=1;

    while(row<=n){
        int star= n-row+1;
        while(star){
            cout<<"*";
            star=star-1;
        }

        int space1=1;
        while(space1<=row){
            cout<<" ";
            space1=space1+1;
        }
        cout<<endl;
        row=row+1;
         
    }

    while(row<=n){
        int space=1;
        while(space<=row){
            space =row -1;
            cout<<" ";
            space++;
            

        }
         int stars=1;
        while(stars<=n){
            stars=n-row+1;
            cout<<"*";
            stars=stars -1;

        }
        cout<<endl;
        row=row+1;
    }
    }