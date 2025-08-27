#include <stdio.h>
int main(void) {
int m[2][2];
printf("Digite os valores da matriz: ");
for(int i = 0; i < 2; i++) {
for(int j = 0; j < 2; j++) {
    scanf("%d", &m[i][j]);
}
}
 printf("Matriz original: ");
for(int i = 0; i < 2; i++) {
for(int j = 0; j < 2; j++) {
    printf("%d ", m[i][j]);    
    }
    printf("\n");
    }

     printf("Matriz invertida: ");
    for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
        printf("%d ", m[j][i]);
        }
        printf("\n");
        }


}
