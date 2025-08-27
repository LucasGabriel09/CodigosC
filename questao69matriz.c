#include <stdio.h>
int main(void) {
int tabela[2][3];
printf("Digite os valores da matriz: \n");
for(int i = 0; i < 2; i++) {
for(int j = 0; j < 3; j++) {
    scanf("%d", &tabela[i][j]);
}
}
printf("Matriz digitada: \n");
for(int i = 0; i < 2; i++) {
for(int j = 0; j < 3; j++) {
    printf("%d ",tabela[i][j]);
}
    printf("\n");
}
   
}
