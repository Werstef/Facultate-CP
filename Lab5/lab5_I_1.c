#include <stdio.h>

int v[100];
int i,n;

int main () {

    scanf("%d", &n);
    int s=0;

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    for(i=1; i<n-1; i++){
        if( v[i] == (v[i-1] + v[i+1])/2)
            s++;
    }

    printf("%d", s);
    return 0;
}
