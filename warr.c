#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;


int main() {
    printf("====================================\n");
    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo:\n");


    Territorio territorio[5]; // Armazena os territórios dentro de um vetor

    for (size_t i = 1; i <= 5; i++)
    {
        printf("----- Cadastrando Territorio: %d -----\n", i);

        printf("Nome do territorio: ");
        fgets(territorio[i].nome, 30, stdin);
        territorio[i].cor[strcspn(territorio[i].cor, "\n")] = '\0'; // remove o espaço para não ocorrer nenhum erro

        printf("Cor do exercito: (ex: Azul, Verde etc.): ");
        fgets(territorio[i].cor, 10, stdin);
        territorio[i].cor[strcspn(territorio[i].cor, "\n")] = '\0';

        printf("Numero de tropas: ");
        scanf("%d", &territorio[i].tropas);

        printf("\n");

    };
    
}