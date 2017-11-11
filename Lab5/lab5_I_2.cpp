#include <iostream>
using namespace std;


unsigned int v[1001];
unsigned int n;

int main () {

    cin>>n;

    cin>>v[0]>>v[1];

    int r = v[1] - v[0];

    int ok=1;

    for( int i=2; i<n; i++){
            cin>>v[i];
        if(v[i-1] != v[i] - r){
            ok=0;
            break;
        }
    }

    if(ok)
        cout<<"The numbers are in arithmetical progression";
    else
        cout<<"The numbers are not in arithmetical progression";

    return 0;
}
