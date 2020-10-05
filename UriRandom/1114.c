#include <string.h>
#include <stdio.h>


int main () {

    char senha[] = "2002";
    char tentativa[10] = "";
    while (gets(tentativa) != NULL) {

        if (strcmp(senha, tentativa) == 0) {
            printf("Acesso Permitido\n");
            return 0;
        } else {
            printf("Senha Invalida\n");
        }
    }

}