#include <stdio.h>

int main() {
    float v1, v2, v3, v4, av = 0;

    printf("");
    scanf("%f %f %f %f", &v1, &v2, &v3, &v4);

    av = ((v1 + v2 + v3 + v4) / 4.00);

    if(av > 6){
        printf("NOTA = %.1f (APPROVED)", av);
    }
    else{
        printf("NOTA = %.1f (NOT APPROVED)", av);
    }


    return 0;
}