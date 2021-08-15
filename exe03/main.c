#include <stdio.h>
/*
//int n;
int main(void) {
    int n = 0;

    //printf(" \n");
    scanf("%d", &n);

    printf("NUMERO ");

    if(n %2 != 0){ // to see if odd (divisible by 2)(not = to 0)
        printf("IMPAR ");
    }
    else if (n == 0){ // not impar or par
    }
    else{
        printf("PAR ");
    }

    if(n > 0){ // greater than zero than positive
        printf("POSITIVO");
    }
    else if (n == 0){
        printf("NEUTRO ");
    }
    else{
        printf("NEGATIVO");
    }


    return 0;
}
*/
int main(int argc, char *argv[]){
    int num = 0;

    scanf("%d", &num);

    if(num % 2 == 0){
        if(num > 0)
            printf("NUMERO PAR POSITIVO");
        else
            printf("NUMERO PAR NEGATIVO");
    }
    else{
        if(num > 0)
            printf("NUMERO IMPAR POSITIVO");
        else
            printf("NUMERO IMPAR NEGATIVO");
    }
    return 0;
}



