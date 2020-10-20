#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct tipoDespesa {
    float R;
    float D;
};

struct Projeto {
    float valor;
    struct tipoDespesa tipoDespesa;
};


int main() {
    struct Projeto projetos[10];

    for (size_t i = 0; i < 10; i++) {
        projetos[i].valor = 0;
        projetos[i].tipoDespesa.D = 0;
        projetos[i].tipoDespesa.R = 0;
    }
    

    int  escolha, count = 0; 
    while (true) {
        printf("Digite numero [0-9] de projeto para cadastro ou -1 para encerrar o programa: ");
        scanf("%d", &escolha);
        
        if (escolha == -1) {
            break;
        } else if (escolha <= -2 || escolha > 9) {
            printf("Numero invalido de projeto\n");
        } else {
            printf("Digite o valor do projeto: ");
            scanf("%f", &projetos[escolha].valor);
            printf("Digite o valor das Receitas do projeto %d: ", escolha);
            scanf("%f", &projetos[escolha].tipoDespesa.R);
            printf("Digite o valor das Despesas do projeto %d: ", escolha);
            scanf("%f", &projetos[escolha].tipoDespesa.D);
        }
    }
    printf("\nImprimindo relatorios\n");
    for (size_t i = 0; i < 10; i++) {
        printf("Projeto numero %d\n", i);
        printf("Valor do projeto = R$%0.2f\n", projetos[i].valor);
        printf("Saldo final do projeto = R$%0.2f\n", projetos[i].tipoDespesa.R - projetos[i].tipoDespesa.D);
        printf("\n");
    }
    return 0;
}