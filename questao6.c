#include <stdio.h>

int main(){
    int primeiroElem = 1, numElem, razao;
    
    printf("Digite a quantidade de elementos da PG(num inteiro positivo): ");
    scanf("%d", &numElem);
    printf("Digite a razao da PA(num inteiro): ");
    scanf("%d", &razao);
    
    for (int i=0; i < numElem; i ++){
        printf("%d\n", primeiroElem);
        primeiroElem *= razao;
    }
}