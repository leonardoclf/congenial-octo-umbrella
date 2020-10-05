#include <stdio.h>


char * strcat ( char * destination, const char * source ) {
    int i, j;

    for (i = 0; destination[i] != '\0'; i++);
    for (j = 0; source[j] != '\0'; ) {
        destination[i++] = source[j++];
    }

    destination[i] = '\0';
    return destination;
}


int main() {
    char stA[90], stB[90];
    gets(stA);
    gets(stB);
    printf("%s\n", strcat(stA, stB));
    return 0;
}