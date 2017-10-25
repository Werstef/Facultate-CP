#include <iostream>
using namespace std;

int nr, minim, maxim;

int main (){

    cin>>nr;
    int n=nr;
    cin>>nr;
    minim=nr;
    maxim=nr;
    for ( int i=2 ; i<=n ; i++){
        cin>>nr;
        if ( nr > maxim )
            maxim = nr;
        if ( nr < minim )
            minim = nr;
    }

    cout<<minim<<" "<<maxim;

    return 0;
}
