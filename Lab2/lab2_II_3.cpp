#include <iostream>
#include <cmath>
using namespace std;

int a,b,c,x1,x2;

int main () {

    cin>>a>>b>>c;

    int D = pow(b,2) - ( 4*a*c );

    if( D > 0){
        x1 = ( -b - sqrt(D) ) /  2*a ;
        x2 = ( -b + sqrt(D) ) /  2*a ;
        cout<<x1<<" "<<x2;
    }
    else
        if ( D == 0){
            x1=x2= -b / 2*a;
            cout<<x1<<" "<<x2;
        }
        else
            cout<<"The solutions are complex numbers";




    return 0;
}
