#include <stdio.h>
int main(void) {
int num[2][3];
int soma = 0;
printf("Digite os números: ");
    for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
        scanf("%d", &num[i][j]);
        soma += num[i][j];
    }
     }
printf("A soma de todos os elementos é: %d", soma);
}
