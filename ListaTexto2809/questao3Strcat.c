#include <stdio.h>
#include <string.h>

int main() {

    char stA[90], stB[90];

    while(1) {
        printf("\nDigite uma frase [max 90char] ou digite / para sair do prog: ");
        gets(stA);
        if (stA[0] != '/') {
            printf("\nDigite outra frase [max 90char]: ");
            gets(stB);
            strcat(stA, stB);
            printf("Soma das strings digitadas: %s", stA);
        } else {
            return printf("Fim do programa\n");
        }  
    }
}