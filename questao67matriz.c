#include <stdio.h>
int main(void) {
int matriz[3][2];
printf("Digite os números da matriz: ");
for(int i = 0; i < 3; i++){
for(int j = 0; j < 2; j++){
    scanf("%d ", &matriz[i][j]);
}
}
printf("Números Pares: ");
    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
        if(matriz[i][j] % 2 == 0) {
            printf("%d ", matriz[i][j]);
        }
    }
    }
    
    printf("\n");
}
