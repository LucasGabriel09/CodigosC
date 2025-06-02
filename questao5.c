#include <stdio.h>

int ano;
printf("Digite o ano que você deseja saber se é bissexto: ");
  scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
      printf("O ano é bissexto!\n");
    } else {
      printf("O ano não é bissexto!\n");
    }
