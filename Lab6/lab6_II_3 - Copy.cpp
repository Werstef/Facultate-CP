#include <iostream>
#define N 10

using namespace std;

float ident[N][N];

int main () {

    int row, col;
    for(row = 0; row < N; row++)
        for(col = 0; col < N; col++)
            if (row == col)
                ident[row][col] = 1.0;
            else
                ident[row][col] = 0.0;



    float *p = &ident[0][0];

    for (  ; p-&ident[0][0] != N*N ; p++) {

        if( ( p-&ident[0][0] ) % ( N+1 ) == 0)
            *p= 1.0;
        else
            *p= 0.0;

        cout<<*p<<" ";


    }
}
