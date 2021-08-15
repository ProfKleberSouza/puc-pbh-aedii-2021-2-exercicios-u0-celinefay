#include <stdio.h>

int main(void) {

    int value, number, c[15], MAIOR, MENOR;

    printf(" ");
    scanf("%d", &number);

    // step 1 is to read the n elements in an array
    for (int i; i <= number - 1; i++){
        printf(" ");
        scanf("%d", &c[i]);
    }

    // step 2 to say the n largest elemet found
    MAIOR = c[0];

    for (int i = 0; i < number; i++){
        if (c[i] > MAIOR){
            MAIOR = c[i];
        }
    }

    //step 3 to say the n smallest element found
    MENOR = c[0];

    for (int i = 0; i < number; i ++){
        if (c[i] < MENOR){
            MENOR = c[i];
        }
    }

    printf("MENOR: %d\n", MENOR);
    printf("MAIOR: %d\n", MAIOR);

    return 0;
}