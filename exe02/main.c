#include <stdio.h>

int main(void) {
  float T, V, R, D, L; // time, average speed, average yield, distance, liter  

  //printf(" \n");
  scanf("%f %f %f", &T, &V, &R);

  D = T * V;  //distance 

  L = D / R;  // amount of liters 
  
  printf("R = %.f\n", R);
  printf("V = %.f\n", V);
  printf("T = %.f\n", T);
  printf("D = %.f\n", D);
  printf("L = %.f\n", L);
  return 0;
}