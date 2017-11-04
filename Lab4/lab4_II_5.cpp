#include <iostream>
#include <cstdlib>
using namespace std;

int v[11];
int minim,maxim;

void FindMinMax(int a[], int &minim, int &maxim){
    minim=maxim=a[1];

    for(int i=1; i<=10; i++){
        if(a[i] < minim)
            swap(minim, a[i]);
        if(a[i] > maxim)
            swap(maxim, a[i]);
    }

}

int main () {

    for(int i=1; i<=10; i++){
        v[i]= rand()%100 + 1;
    }

    FindMinMax(v, minim, maxim);

    cout<<minim<<" "<<maxim;

    cout<<"\n"<<rand()%100+1<<" ";
    cout<<"\n"<<rand()%100+1<<" ";
    cout<<"\n"<<rand()%100+1<<" ";
    cout<<"\n"<<rand()%100+1<<" ";

    return 0;
}


