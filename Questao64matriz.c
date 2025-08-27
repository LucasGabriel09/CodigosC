#include <stdio.h>
int main(void) {
int num[3][3];
printf("Digite os números da matriz: ");
    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
    scanf("%d", &num[i][j]); 
}
    }
    printf("\nDiagonal principal:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", num[i][i]);
    }

    printf("\n");
}
