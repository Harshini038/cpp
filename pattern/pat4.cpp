/*
 print this pattern
    *
    **
    ***
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){   
        int column=1;
        while(column<=row){
            cout<<"*";
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }

}

/*
 print this pattern
    1
    12
    123
    1234

    same logic except for cout give row 
    cout<<row;
 */

