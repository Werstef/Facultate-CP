#include <iostream>

using namespace std;

int n;
int v[101];
int minimum;
int maximum;

void minmax(int a[], int *min, int *max){
    *min=a[0];
    *max=a[0];
    for(int i=1; i<n; i++){
        if(a[i] > *max)
            *max=a[i];
        if(a[i] < *min)
            *min=a[i];
    }
}


int main () {

    cin>>n;


    for(int i=0; i<n; i++)
        cin>>v[i];

    minmax(v, &minimum, &maximum);

    cout<<minimum<<" "<<maximum;

    return 0;
}
