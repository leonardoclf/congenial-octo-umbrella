#include <stdio.h>
#include <string.h>

int main () {
  
    char st[90], stCopia[90];
    while(1) {
        printf("\nDigite um frase [max 90char] ou digite / para sair do prog: ");
        gets(st);
        if (st[0] == '/') {
            return printf("\nFim do programa");
        } else {
            strcpy(stCopia, st);
            printf("\nFoi digitado: %s\n", stCopia);
        }
    }
} 
