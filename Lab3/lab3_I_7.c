#include <stdio.h>

int angle;

int main () {

    do{
        scanf("%d",&angle);
        if ( angle >90 || angle < 0){
            printf("Error: Out of range\n");
        }
        else
            break;
    } while(1);

    printf("%d",angle);

    return 0;
}
