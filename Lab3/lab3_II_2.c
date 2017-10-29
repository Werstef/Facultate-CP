#include <stdio.h>

int a;


int Fibonacci(int term1, int term2, int nr){

    int suma = term1+term2;

    if (suma > nr){
        return suma-term1;
    }
    else
        Fibonacci(term2, suma, nr);
}


int main () {

    scanf("%d", &a);

    int t1=1;
    int t2=1;

    while(t1+t2 < a){
        int sum=t1+t2;
        t1=t2;
        t2=sum;
    }

    printf("%d\n", t2);
    printf("%d",Fibonacci(1, 1, a));
    return 0;
}
