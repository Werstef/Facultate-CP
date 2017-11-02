#include <iostream>
using namespace std;

int a,b;

void interchange(int* a, int* b){
    int aux=*a;
    *a=*b;
    *b=aux;
}

int main () {

    cin>>a>>b;

    interchange(&a, &b);

    cout<<a<<" "<<b;

    return 0;
}
