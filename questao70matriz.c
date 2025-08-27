#include <stdio.h>
int main(void) {
int tabela[2][3];
int soma = 0;
printf("Digite os valores da matriz: \n");
for(int i = 0; i < 3; i++) {
for(int j = 0; j < 3; j++) {
    scanf("%d", &tabela[i][j]);
}
}
for (int i = 0; i < 3; i++) {
soma = 0;
for (int j = 0; j < 3; j++) {
    }
printf("Soma da linha %d: %d\n", i + 1, soma);
    }

     return 0;
}
