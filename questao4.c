#include <stdio.h>


int main(){

    int ano;
    printf("Digite um ano valido(numero inteiro positivo): ");
    scanf("%d", &ano);
    (ano % 400 == 0 || ano % 100 != 0) && (ano % 4 == 0) ? printf("Ano bissexto\n") : printf("Ano não bissexto\n");

}
