
#include <stdio.h>

int main(void) {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c){ // diff cases where a less than b and (&&) b less than c
        printf("MENOR = %d\n", a);
    }
    else if (b < a && a < c){
        printf("MENOR = %d\n", b);
    }
    else {
        printf("MENOR = %d\n", c);
    }

    if (a > b && b > c){ // compare with && to ensure both cases are showen
        printf("MAIOR = %d\n", a);
    }
    else if (b > a && a > c){
        printf("MAIOR = %d\n", b);
    }
    else{
        printf("MAIOR = %d\n", c);
    }

    return 0;
}