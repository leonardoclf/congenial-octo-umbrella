#include <stdio.h>
#define TRUE 1

int main(){
    int escolha;
    while(TRUE){
        printf("Digite uma opção de 1-9(Opcao 0 termina o prog): ");
        scanf("%d", &escolha);
        
        switch (escolha){
        case 0:
            return printf("Fim do programa. Ate logo.\n");
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            break;
        default:
            if (escolha < 0 || escolha > 9){
                printf("Escolha invalida\n");
                break;
            }
        }
    }
}