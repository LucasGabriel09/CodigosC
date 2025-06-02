#include <stdio.h>
int main(){
int a1,a2,a3;
printf("Digite o primeiro valor: ");
scanf("%d",&a1);
printf("Digite o segundo valor: ");
scanf("%d",&a2);
printf("Digite o terceiro valor: ");
scanf("%d",&a3);
if (a1 >= a2 && a1 >= a3) {
printf("O número com maior valor é: %d", a1);
} 
else if (a2 >= a1 && a2 >= a3) {
  printf("O número com maior valor é: %d", a2);
    } 
else {
      printf("O número com maior valor é: %d", a3);
    }
    }
