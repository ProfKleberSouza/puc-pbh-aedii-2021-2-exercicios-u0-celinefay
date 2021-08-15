#include <stdio.h>

int main(){

    int side1, side2, side3;

    scanf("%d %d %d",&side1,&side2,&side3);

    if(side1 == side2 && side2 == side3)
        printf("TRIANGULO EQUILÁTERO \n");
    else if(side1 == side2 || side2 == side3 || side3 == side1)
        printf("TRIANGULO ISOSCELES \n");
    else
        printf("TRIANGULO ESCALENO\n");

    return 0;
}
