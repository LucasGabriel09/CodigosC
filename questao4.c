#include <stdio.h>

int main(void) {
int a1,a2,a3,a4,a5,a6,media;
printf("Digite o primeiro número: ");
scanf("%d", &a1);
printf("Digite o segundo número: ");
scanf("%d", &a2);
printf("Digite o terceiro número: ");
scanf("%d", &a3);
printf("Digite o quarto número: ");
 scanf("%d", &a4);
printf("Digite o quinto número: ");
scanf("%d", &a5);
 printf("Digite o sexto número: ");
 scanf("%d", &a6);
media = (a1+a2+a3+a4+a5+a6) / 6;
printf("O valor da média dos números é: %d", media);
}
