#include <stdio.h>

int a[1001], b[1001], c[2003];
int Nr_Elements_a, Nr_Elements_b;


int main () {

    scanf("%d", &Nr_Elements_a);
    scanf("%d", &Nr_Elements_b);
    int i,j;

    for(i=1; i<=Nr_Elements_a; i++)
        scanf("%d", &a[i]);

    for(j=1; j<=Nr_Elements_b; j++)
        scanf("%d", &b[j]);

    i=1,j=1;
    int Nr_Elements_c=0;

    while (i<=Nr_Elements_a && j<=Nr_Elements_b){
        if (a[i] < b[j])
            c[++Nr_Elements_c]=a[i++];
        else
            c[++Nr_Elements_c]=b[j++];
    }

    for (; i<=Nr_Elements_a; i++)
        c[++Nr_Elements_c]=a[i];

    for(; j<=Nr_Elements_b; j++)
        c[++Nr_Elements_c]=b[j];

    for( i=1; i<=Nr_Elements_c; i++)
        printf("%d ", c[i]);

    return 0;
}
