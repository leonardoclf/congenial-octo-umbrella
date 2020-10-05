#include <stdio.h>
#include <string.h>


int even(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}


int main () {

    int c=5, tentativa, res=0;
    while(c) {
        scanf("%d", &tentativa);
        res += even(tentativa);
        tentativa = 0;
        c--;
    }
    printf("%d valores pares\n", res);


}
