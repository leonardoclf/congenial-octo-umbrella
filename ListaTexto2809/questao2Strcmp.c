#include <stdio.h>
#include <string.h>

int main() {

    char stA[90], stB[90];

    while(1) {
        printf("\nDigite uma frase [max 90 char] ou digete / para sair do prog: ");
        gets(stA);
        if (stA[0] != '/') {
            printf("\nDigite outra frase: ");
            gets(stB);
            if (strcmp(stA, stB)) {
                printf("\nSao diferentes\n");                
            } else {
                printf("\nSao iguais\n");
            }
        } else {
            return printf("Fim do prog\n");
        }  
    }
}