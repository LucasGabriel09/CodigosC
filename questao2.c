#include <stdio.h>

int main(void) {
int num;
  printf("Digite o número: ");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("O número digitado é PAR!");
  }
  else{
    printf("O número digitado é ÍMPAR!");
  }
}
