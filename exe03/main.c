#include <stdio.h>

int n;
int main(void) {
  
  printf(" \n");
  scanf("%d", &n);
  
  printf("NUMERO\t");

  if(n %2 != 0){ // to see if odd (divisible by 2)(not = to 0) 
    printf("IMPAR\t");
  }
  else if (n == 0){ // not impar or par 
  }
  else{
    printf("PAR\t");
  }

  if(n > 0){ // greater than zero than positive    
    printf("POSITIVO\t");
  }
  else if (n == 0){
    printf("NEUTRO\t");
  }
  else{
    printf("NEGATIVO\t");
  }
  
  
  return 0;
}