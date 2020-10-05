#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    int num, i;
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, num, i * num);
    }
}