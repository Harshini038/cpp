/*
 print this pattern
    123
    123
    123
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){   
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
/*
to print
321
321
321

give cout as n-j+1
this will reverse the numbers from 1-n to n-1


*/