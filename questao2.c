#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    num % 2 == 0 ? printf("Numero par\n") : printf("Numero impar\n");
}