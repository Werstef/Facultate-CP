#include <iostream>
#include <cmath>
using namespace std;

int x,y;

int hypotenuse1(int a, int b){
    double c;
    c = sqrt(a*a + b*b);

    return c;
}

void hypotenuse2(int a, int b, int* ip){

    *ip = sqrt(a*a + b*b);
}

int main () {
    int ip=0;

    cin>>x>>y;

    hypotenuse2(x, y, &ip);

    cout<<ip<<"\n";

    cout<<hypotenuse1(x, y);
    return 0;
}
