#include <stdio.h>


int main()
{
    char nomes[3][50];
    float medias[3];
    char reprovados[3][50];
    int qtdReprovados = 0;

    // Entradas
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome do aluno %d:\n", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a média do aluno %d:\n", i + 1);
        scanf("%f", &medias[i]);
    }

    // Processamento
    for (int i = 0; i < 3; i++)
    {
        if (medias[i] < 6.0)
        {
            strcpy(reprovados[qtdReprovados], nomes[i]);
            qtdReprovados++;
        }
    }

    // Saídas
    printf("Alunos com média abaixo de 6.0:\n");
    for (int i = 0; i < qtdReprovados; i++)
    {
        printf("%s\n", reprovados[i]);
    }

    printf("\nTodos os nomes dos alunos:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", nomes[i]);
    }
    return 0;
}
