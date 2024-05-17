#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "biblioteca.h"

// Funcao para verificar e criar os arquivos clientes.dat e extrato.dat se necessário
void verificar_e_criar_arquivos() {
    // Verifica se o arquivo clientes.dat existe, se nao, cria-o
    FILE *arquivo_clientes = fopen("clientes.dat", "rb");
    if (arquivo_clientes == NULL) {
        arquivo_clientes = fopen("clientes.dat", "wb");
        if (arquivo_clientes == NULL) {
            printf("Erro ao criar o arquivo clientes.dat\n");
            exit(1);
        }
        fclose(arquivo_clientes);
    } else {
        fclose(arquivo_clientes);
    }

    // Verifica se o arquivo extrato.dat existe, se nao, cria-o
    FILE *arquivo_extrato = fopen("extrato.dat", "rb");
    if (arquivo_extrato == NULL) {
        arquivo_extrato = fopen("extrato.dat", "wb");
        if (arquivo_extrato == NULL) {
            printf("Erro ao criar o arquivo extrato.dat\n");
            exit(1);
        }
        fclose(arquivo_extrato);
    } else {
        fclose(arquivo_extrato);
    }
}

int main() {
    // Verificar e criar os arquivos clientes.dat e extrato.dat se necessário
    verificar_e_criar_arquivos();

    while (1) {
        printf("1: Novo cliente\n");
        printf("2: Apaga cliente\n");
        printf("3: Listar clientes\n");
        printf("4: Debito\n");
        printf("5: Deposito\n");
        printf("6: Extrato\n");
        printf("7: Transferencia entre contas\n");
        printf("8: Sair\n");
        printf("9: Relistar as opcoes\n\n");

        int op;
        printf("Digite a opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                NovoCliente();
                break;
            case 2:
                ApagaCliente();
                break;
            case 3:
                ListarClientes();
                break;
            case 4:
                Debito();
                break;
            case 5:
                Deposito();
                break;
            case 6:
                Extrato();
                break;
            case 7:
                TransferenciaEntreContas();
                break;
            case 8:
                printf("Voce saiu. Volte sempre!\n");
                return 0;
            case 9:
                printf("1: Novo cliente\n");
                printf("2: Apaga cliente\n");
                printf("3: Listar clientes\n");
                printf("4: Debito\n");
                printf("5: Deposito\n");
                printf("6: Extrato\n");
                printf("7: Transferencia entre contas\n");
                printf("8: Sair\n");
                printf("9: Relistar as opcoes\n\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    }

    return 0;
}