#include <stdio.h>
#include <cstring>

int main() {
    float p1, p2, media;
    int faltas;
    char situacao[12];
    const float mediaMinima = 4.0;
    const float mediaExame = 7.0;
    const int maximoFaltas = 36;

    printf("Atividade 04\n");
    printf("Este programa irá retornar a situação do aluno "
           "baseado na média das notas P1 e P2 e o número de FALTAS.\n");

    printf("Digite a nota P1: ");
    scanf("%f", &p1);

    printf("Digite a nota P2: ");
    scanf("%f", &p2);

    printf("Digite o número de FALTAS: ");
    scanf("%i", &faltas);

    media = (p1 + p2) / 2;

    printf("\n");
    printf("Sua MÉDIA é: %.1f\n", media);
    printf("FALTAS: %d\n", faltas);

    if (faltas > maximoFaltas || media < mediaMinima) {
        strcpy(situacao, "Reprovado");
    } else if (media < mediaExame) {
        strcpy(situacao, "Exame final");
    } else {
        strcpy(situacao, "aprovado");
    }

    printf("\n");
    printf("----------------------------\n");
    printf("- SITUAÇÃO: %s\n", situacao);
    printf("----------------------------\n");

    return 0;
}
