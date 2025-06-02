#include <stdio.h>
int main(){
float fh, c;
  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%f", &fh);
  c = (fh - 32) * 5/9;
  printf("A temperatura em celsius é: %f", c);
}
