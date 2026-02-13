#include <stdio.h>
#include <string.h>

// Definição de constante para quantidade de territórios
#define TotalTerritorios 5

// Criação de Struct Territorio.
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

// Função para remover o ENTER do fgets
void removerEnter(char str[]) {
    str[strcspn(str, "\n")] = '\0';
}

// Função para limpar todo o buffer do teclado
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

    struct Territorio territorios[TotalTerritorios];

    printf("=====================================\n");
    printf("     CADASTRO DOS TERRITORIOS      \n");
    printf("=====================================\n");

    // Cadastro dos Territórios.
    for (int i = 0; i < TotalTerritorios; i++) {

        printf("\n------------------------------\n");
        printf("    Cadastre o Territorio %d\n", i + 1);
        printf("------------------------------\n");

        printf("Nome do Territorio : ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Cor do Exercito (ex: Azul, Roxo): ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        printf("Numero de Tropas : ");
        scanf("%d", &territorios[i].tropas);
        getchar();
    }

    // Exibição dos territórios cadastrados.
    printf("\n\n===============================\n");
    printf("    TERRITORIOS CADASTRADOS\n");
    printf("===============================\n");

    for (int i = 0; i < TotalTerritorios; i++) {

        printf("\n---------------------------------\n");
        printf("Territorio %d\n", i + 1);
        printf("-----------------------------------\n");
        printf("Nome do Territorio : %s\n", territorios[i].nome);
        printf("Cor do Exercito : %s\n", territorios[i].cor);
        printf("Numero de Tropas : %d\n", territorios[i].tropas);
    }

    return 0;
}