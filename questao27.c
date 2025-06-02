#include <stdio.h>
int main(){
int prod;
float nv;
float nv2;
printf("Digite o valor do produto: ");
scanf("%d", &prod);
if (prod < 100){
  nv = prod + (prod * 0.10);
  printf("O novo valor do produto é: %f", nv);
}
  if (prod >= 100){
    nv2 = prod + (prod * 0.20);
    printf("O novo valor do produto é: %f", nv2);
  }
}
