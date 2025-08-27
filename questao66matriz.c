#include <stdio.h>
int main(void) {
int matriz[3][3], maior;
printf("Digite os números que serão armazenados: ");
    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        scanf("%d", &matriz[i][j]);
    }
        } 
maior = matriz[0][0];
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
if(matriz[i][j] > maior){
    maior = matriz[i][j];
}
}
}
printf("\nO maior valor é: %d", maior);
}
