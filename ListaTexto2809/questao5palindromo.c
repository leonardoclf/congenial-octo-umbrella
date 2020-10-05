#include <stdio.h>
#include <string.h>


int main() {
    char st[30];
    int i, lenSt;

    printf("Digite uma palavra [max 30char]: ");
    gets(st);
    lenSt = strlen(st);

    for (i = 0; i < lenSt / 2; i ++) {
        if (st[i] == st[lenSt - 1 - i]) {
            continue;
        } else {
            return printf("Nao e palindromo\n");
        }
    }

    printf("%s e palindromo\n", st);
    return 0;
}