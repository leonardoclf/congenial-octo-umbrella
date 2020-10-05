#include <stdio.h>
    

int pressao(int a, int b) {
    return a - b;
}


int main() {

    int pressaoDesejada = 0 , pressaoLida = 0;
    scanf("%d", &pressaoDesejada);
    scanf("%d", &pressaoLida);

    printf("%d\n", pressao(pressaoDesejada, pressaoLida));

    return 0;
}