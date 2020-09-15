#include <stdio.h>

int main(){
    int i, res = 1;
    printf("Digite um número: ");
    scanf("%d", &i);
    
    for ( ; i > 1; i--)
        res *= i;
    
    printf("Fatorial: %d\n", res);
}