
 #include <stdio.h>

    int main(void) {
    int num[3][3];
    printf("Digite os números: ");
    for(int i=0; i < 3; i++) {
     for(int j=0; j < 3; j++){
        scanf("%d", &num[i][j]);
    }
    } 
        printf("Números digitados: ");
        for(int i=0; i < 3; i++) {
         for(int j=0; j < 3; j++){
            printf("%d", num[i][j]);
        
    
    }
        }
        return 0;
    }
