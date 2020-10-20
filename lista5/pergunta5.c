#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// FUNC DE MSG DE MENU PARA USER 
void menuInicial() {
    printf("Seleção de Menu: \n");
    printf("1 - Cria uma conta\n");
    printf("2 - Consulta de saldo\n");
    printf("3 - Depositar um valor\n");
    printf("4 - Sacar um valor\n");
    printf("5 - Encerrar conta\n");
    printf("0 - Sair do programa\n");
    printf("Digite uma opção: ");
}


// ESTURTURA DE CONTA 
typedef struct {
    char * nome[103];
    int numConta;
    float saldo;
    int senha;
    int chave;
    bool ativa;
} conta;


int main () {
    // Var do Menu
    int escolhaMenu;
    bool menu = true;

    // Var criacao de conta
    conta novaConta;
    char novoNome[103];
    int novaNum, novaSenha, novaChave;
    float valorInicial;

    // Var genericas de uso
    int num, senha, chave;
    char escolhaBin; 
    
    while(menu) {
        menuInicial();
        scanf("%d", &escolhaMenu);
        
        switch (escolhaMenu) {
        // sair
        case 0:
            menu = false;
            break;

        // criar conta
        case 1:
            getchar();
            printf("Criando nova conta\n");
            
            printf("Digite seu nome: ");
            fgets(novoNome, 103, stdin);
            
            printf("Digite novo numero de conta: ");
            scanf("%d", &novaNum);
                        
            printf("Digite o valor inicial da conta: ");
            scanf("%f", &valorInicial);
            
            printf("Digite a senha: ");
            scanf("%d", &novaSenha);
            
            printf("Digite uma chave de segurança: ");
            scanf("%d", &novaChave);

            strcpy(novaConta.nome, novoNome);
            novaConta.numConta = novaNum;
            novaConta.saldo = valorInicial;
            novaConta.senha = novaSenha;
            novaConta.chave = novaChave;
            novaConta.ativa = true;
            break;

        // Consulta de Saldo
        case 2:
            printf("Consulta de Saldo\n");
            printf("Digite o num da conta: ");
            scanf("%d", &num);
            if (num == novaConta.numConta && novaConta.ativa) {
                printf("Seu saldo: R$%0.2f\n", novaConta.saldo);
            } else {
                printf("Numero de conta inexistente");
            }
            break;
        
        // deposito
        case 3:
            printf("Deposito na conta\n");
            printf("Digite o num da conta: ");
            scanf("%d", &num);
            if (num == novaConta.numConta && novaConta.ativa == true) {
                printf("Nome da conta selecionada: %s\n", novaConta.nome);
                printf("Essa conta que deseja deposita (S/N): ");
                getchar();
                scanf("%c", &escolhaBin);
                if (escolhaBin == 'S') {
                    printf("Digite o valor que deseja depositar na conta escolhida: ");
                    scanf("%d", &num);
                    novaConta.saldo += num;
                    printf("Novo saldo: R$%0.2f", novaConta.saldo);
                } else {
                    printf("Operacao cancelada");
                    break;
                }
            } else {
                printf("Nome da conta inexistente");
                break;
            }
            break;


        // Sacar valor da Conta;
        case 4:
            printf("Menu de Saque\n");
            printf("Digite o num da conta: ");
            scanf("%d", &num);
            printf("Digite a senha da conta: ");
            scanf("%d", &senha);
            if (num == novaConta.numConta && senha == novaConta.senha) {
                printf("Digite o valor desejado: ");
                scanf("%0.2f", &num);
                if (novaConta.saldo - num <= 0) break;
                printf("Digite a chave de seguranca: ");
                scanf("%d", &chave);
                if (chave != novaConta.chave) break;
                novaConta.saldo -= num;
                printf("Operacao completa");
            }
            break;

        // Encerrar conta
        case 5:
            printf("Encerramento de conta\n");
            printf("Digite o num da conta para ser encerrado: ");
            getchar();
            scanf("%d", &num);
            if (num == novaConta.numConta && novaConta.ativa == true) {
                printf("Nome da conta selecionada: %s\n", novaConta.nome);
                printf("Para cancelar digite a senha da conta: ");
                getchar();
                scanf("%d", &senha);
                printf("Para cancelar digite a chave de seguranca: ");
                getchar();
                scanf("%d", &chave);
                if (senha == novaConta.senha && chave == novaConta.chave) {
                    novaConta.ativa = false;
                    printf("Conta desativada\n");
                } else {
                    printf("Senha ou Chave errada\n");
                    break;
                }
            }
            break;
            
        default:
            printf("Escolha invalida");
            break;
        }
        printf("\n");
        getchar();
    }
    return 0;
}


