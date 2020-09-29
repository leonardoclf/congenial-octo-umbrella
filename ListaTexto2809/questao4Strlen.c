#include <stdio.h>
#include <string.h>

int main() {

    char st[100];

    while(1){
        printf("Digite uma frase até 100char ou digite / para encerar: ");
        gets(st);
        if (st[0] == '/') {
            return printf("Prog encerrado");
        } else {
            printf("Numero de char digitado: %d\n", strlen(st));
        }
    }
}