#include <stdio.h>

int main(void) {

    int num;

    do{
        //printf(" \n");
        scanf("%d", &num);

        if(num > 0 ){
            printf("POSITIVO\n");
            // break;
        }
        else if(num == 0){
            break;
        }
        else{
            printf("NEGATIVO\n");
            // break;
        }

    }while(num != 0);


    return 0;
}