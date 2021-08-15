#include <stdio.h>
// Write a program that loads a 10-element array and displays the array values in reverse order.

int main(void) {
    int num, num1;

    scanf("%d", &num);

    for(int i = 1; i < num; i++){
        scanf("%d", &num1);
        // printf("%d", i);
    }

    printf("\n");

    for(int i = 0; i < num; i++){
        printf("%d\n", i + 1);
    }

    return 0;
}