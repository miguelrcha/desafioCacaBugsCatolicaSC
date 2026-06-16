#include <stdio.h>

int main() {
    char nome[50]
    int nota1, nota2, nota3;
    float media;

    printf("=== Sistema de Notas ===\n");
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite a nota 1 (0 a 10): ");
    scanf("%d", nota1);

    printf("Digite a nota 2 (0 a 10): ");
    scanf("%d", &nota2);

    printf("Digite a nota 3 (0 a 10): ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua media foi: %d\n", media);

    if (media = 7.0) {
        printf("Parabens, %s! Voce foi APROVADO!\n", nome);
    } else {
        printf("Que pena, %s. Voce foi reprovado.\n", nome);
    }

    return 0;
}
