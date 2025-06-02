#include <stdio.h>
int main(){
int a1,a2,a3;
printf("Digite o valor do primeiro triângulo: ");
scanf("%d", &a1);
printf("Digite o valor do segundo triângulo: ");
scanf("%d", &a2);
printf("Digite o valor do terceiro triângulo: ");
scanf("%d", &a3);
if(a1 == a2 && a1 == a3) {
  printf("O triângulo é equilátero! ");
}
else if(a1 == a2 || a1 == a3 || a2 == a3) {
  printf("O triângulo é isósceles!");
}
else {
  printf("O triângulo é escaleno! ");
}
}
