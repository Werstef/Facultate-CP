#include <iostream>
using namespace std;

int nr;

int main () {

    cin>>nr;

    for( int d=2; d*d<=nr ; d++)
        if ( nr % d == 0)
            cout<<"Not prime";

    cout<<"Prime";

    return 0;
}
