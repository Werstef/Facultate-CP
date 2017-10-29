#include <stdio.h>
#include <math.h>

int Sum_of_squares(int n){

    int sum=0;
    int i;
    for ( i=1; i<=n; i++){
        sum+=pow(i,2);
    }

    return sum;
}

int main () {

    int a;
    scanf("%d", &a);

    printf("Sum of the first n square powers is: %d \n", Sum_of_squares(a) );

    float power=1;

    for (int i=1; i<=31; i++)
        power*=2;

    power=floor(sqrt(power));

    printf("%f", power );
    //1860
    return 0;
}
