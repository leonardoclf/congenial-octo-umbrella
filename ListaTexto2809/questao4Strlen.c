#include <stdio.h>


size_t strlen (const char * str) {
    size_t i;
    for (i = 0; str[i] != '\0'; i++) {
        continue;
    }
    return i;
}


int main() {

    char st[100];
    gets(st);
    printf("%d\n", strlen(st));
    return 0;
}