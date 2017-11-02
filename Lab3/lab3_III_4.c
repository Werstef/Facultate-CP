#include <stdio.h>

int N, nr;
int i, k;

int nr_prim (int nr){

    if(nr<2)
        return 0;
    if(nr==2)
        return 1;
    int i;
    for(i=2; i*i<=nr; i++)
        if( nr%i == 0 )
            return 0;

    return 1;
}

int main () {

    scanf("%d", &N);
    k=0; nr=1;

    while (k <= N){
        if (nr_prim(nr)){
            for (i=1; i<=nr; i++){
                printf("%d ", i);
                k++;
                if (k>N)
                    break;
            }
        }
        else{
            for (i=1; i<=nr; i++){
                printf("%d ", nr);
                k++;
                if (k>N)
                    break;
            }
        }
        nr++;
    }

    return 0;
}


