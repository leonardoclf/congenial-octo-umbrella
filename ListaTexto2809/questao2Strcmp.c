#include <stdio.h>


int strcmp ( const char * stA, const char * stB ) {
    int i;
    for (i = 0; stA[i] != '\0'; i++){
        if (stA[i] == stB[i]) {
            continue;
        } else {
            if (stA[i] > stB[i]) {
                return 1;
            } else {
                return -1;
            }
        }
    }
    return 0;    
}


int main() {
    char stA[100], stB[100];
    gets(stA);
    gets(stB);
    printf("%d\n", strcmp(stA, stB));
    return 0;
}