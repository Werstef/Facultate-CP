#include <iostream>
using namespace std;

int a[3][32];
int i, j;
int avMin, avMax, tmMin, tmMax;

void averageTemps(int a[3][32], int &averMin, int &averMax){
    averMin=0;
    averMax=0;
    for(int i=1; i<=2; i++){
        for(int j=1; j<=31; j++){
            if(i==1)
                averMin+=a[i][j];
            else
                averMax+=a[i][j];
        }
    }
    averMax/=31;
    averMin/=31;
}

void maxTemps(int a[3][32], int &tempMin, int &tempMax){
    tempMin=a[1][1];
    tempMax=a[2][1];

    for(int i=1; i<=2; i++){
        for(int j=1; j<=31; j++){
            if(i==1 && a[i][j]<tempMin)
                swap(a[i][j],tempMin);
            if(i==2 && a[i][j]>tempMax)
                swap(a[i][j],tempMax);
        }
    }
}

int main () {

    for(i=1; i<=2; i++)
        for(j=1; j<=31; j++)
            cin>>a[i][j];

    averageTemps(a, avMin, avMax);

    maxTemps(a, tmMin, tmMax);

    cout<<avMin<<" "<<avMax<<"\n";

    cout<<tmMin<<" "<<tmMax;

    return 0;
}
