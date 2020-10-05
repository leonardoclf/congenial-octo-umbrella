#include <stdio.h>





int main() {
    int num, foundEven = 6;
    scanf("%d", &num);
    while (foundEven) {
        if (num % 2 !=0){
            printf("%d\n", num);
            foundEven--;
        }
        num++;
    }
}