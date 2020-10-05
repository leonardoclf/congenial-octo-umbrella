#include <stdio.h>


char * strcpy( char * destination, const char * source ) {
    int i; 
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';

    return destination;
}


int main () {
  
    char st[100], stCopy[100];
    
    gets(st);
    strcpy(stCopy, st);
    printf("%s\n", stCopy);
    return 0;
} 
