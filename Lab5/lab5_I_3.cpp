#include <iostream>

using namespace std;

int a[50][50];
int n;
int p1,p3,s2,s4;

int main () {

    cin>>n;
    p1 = 1;
    p3 = 1;
    s2 = 0;
    s4 = 0;

    for(int i=0; i<n ;i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(j>i && i+j<n-1)
                p1*=a[i][j];
            if(i>j && i+j<n-1)
                s2+=a[i][j];
            if(i>j && i+j>n-1)
                p3*=a[i][j];
            if(j>i && i+j>n-1)
                s4+=a[i][j];
        }
    }
    cout<<"\n";
    cout<<p1<<" "<<s2<<" "<<p3<<" "<<s4;

    return 0;
}
