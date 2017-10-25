#include <iostream>
#define swap(T,X,Y)  T aux X, X=Y , X=aux
#define multiply(X,Y) X*Y
using namespace std;

int a,b;

int main () {

    cin>>a>>b;

    swap(int,a,b);

    cout<<a<<" "<<b<<"\n";

    multiply(a,b);
    cout<<a<<" "<<b;
    return 0;
}
