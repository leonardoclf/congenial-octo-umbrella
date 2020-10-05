#include <stdio.h>
#include <string.h>
#include <ctype.h>


char * oddEven(int num) {
    if (num % 2 == 0 ) {
        return "EVEN";
    } else {
        return "ODD";
    }
}

char * intValor(int num) {
    if (num > 0) {
        return "POSITIVE\n";
    } else if (num < 0) {
        return "NEGATIVE\n";
    } else {
        return "NULL\n";
    }
}

int main () {
    int count, num;
    scanf("%d", &count);

    while(count){
        scanf("%d", &num);
        if (num != 0) {
            printf("%s %s", oddEven(num), intValor(num));
        } else {
            printf("%s", intValor(num));
        }
        num = 0;
        count--;
    }
}