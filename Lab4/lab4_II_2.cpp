#include <iostream>
#include <cmath>
#define PI 3.141592

using namespace std;

int n;
double a, b, c, d, x;

int functionA(int a, int b, int c, int d, int x, int n){

    int y= a*pow(x,2*n) + b*pow(x, 2) + c*x + d;

    return y;
}

double functionC(int a, int b, int c, int x){

    return a*pow(x,2) + b*x + cos(PI * c);
}

int main () {

    cin>>a>>b>>c>>d>>x>>n;

    cout<<functionA(a, b, c, d, x, n)<<"\n";

    cout<<functionC(a, b, c, x);

    return 0;
}
