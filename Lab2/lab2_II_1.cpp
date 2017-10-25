#include <iostream>
using namespace std;

int n,nr;

int main () {

    cin>>n;
    int e2=0,e5=0;

    for ( int i=1 ; i<=n ; i++ ){
        cin>>nr;
        while ( nr % 2 == 0 ){
            nr/=2;
            e2++;
        }
        while ( nr % 5 == 0 ){
            nr/=5;
            e5++;
        }
    }

    if( e2 > e5 )
        cout<<e5;
    else
        cout<<e2;

    return 0;
}
