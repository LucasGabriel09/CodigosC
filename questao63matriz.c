#include <stdio.h>
int main(void) {
int numeros[2][2];
printf("Digite os números que deseja armazenar: ");
    for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
    scanf("%d", &numeros[i][j]);
    }
}

printf("Números digitados: ");
     for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
    printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }
}
