#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    printf("====================================\n");
    printf("\n");
    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo:\n");
    printf("\n");

    Territorio territorio[5];

    for (size_t i = 0; i < 5; i++) {
        printf("----- Cadastrando Territorio: %d -----\n", i + 1);

        printf("Nome do territorio: ");
        fgets(territorio[i].nome, 30, stdin);
        territorio[i].nome[strcspn(territorio[i].nome, "\n")] = '\0';

        printf("Cor do exercito (ex: Azul, Verde etc.): ");
        fgets(territorio[i].cor, 10, stdin);
        territorio[i].cor[strcspn(territorio[i].cor, "\n")] = '\0';

        printf("Numero de tropas: ");
        scanf("%d", &territorio[i].tropas);
        getchar(); // limpa o '\n'

        printf("\n");
    }

    printf("Cadastro inicial concluído com sucesso\n");
    printf("\n");

    printf("==========================================\n");
    printf("      MAPA DO MUNDO - ESTADO INICIAL      \n");
    printf("==========================================\n");

    printf("\n");

    for (size_t i = 0; i < 5; i++)
    {
        printf("TERRITORIO %d\n", i + 1);
        printf("- Nome: %s\n", territorio[i].nome);
        printf("- Dominado por: Exercito %s\n", territorio[i].cor);
        printf("- Tropas: %d\n", territorio[i].tropas);
        printf("\n");
    }

    return 0;
}