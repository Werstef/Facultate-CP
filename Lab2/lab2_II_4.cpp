#include <iostream>
using namespace std;

int x, y;

int main () {

    cin>>x>>y;

    if ( x>0 && y>0 )
        cout<<"Quadrant I";
    if ( x<0 && y>0 )
        cout<<"Quadrant II";
    if ( x<0 && y<0 )
        cout<<"Quadrant III";
    if ( x>0 && y<0 )
        cout<<"Quadrant IV";
    if ( x==0 && y==0 )
        cout<<"Origin";

    return 0;
}
