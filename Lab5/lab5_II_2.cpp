#include <iostream>

using namespace std;

int v[1001];
int n;

int main () {

    cin>>n;
    int s=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        s++;
        if(s==2){
            v[i+1]=v[i];
            v[i]=(v[i+1] + v[i-1])/2;
            n++;
            i++;
            s=1;
        }
    }

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    return 0;
}
