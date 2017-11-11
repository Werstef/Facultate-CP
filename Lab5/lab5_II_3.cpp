#include <iostream>

using namespace std;

int n,i;


int main () {

    cin>>n;
    int k=0;

    for(i=1; ; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
            k++;
            if(k==n)
                 break;
        }
    if(k==n)
        break;
    }

    return 0;
}
