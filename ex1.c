#include <stdio.h>

void calcular_media(float nota1, float nota2, float nota3, char tipo) {
    if (tipo == 'A') {
        float media_aritmetica = (nota1 + nota2 + nota3) / 3;
        printf("Média Aritmética: %.2f\n", media_aritmetica);
    } else if (tipo == 'P') {
        float media_ponderada = (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
        printf("Média Ponderada: %.2f\n", media_ponderada);
    } else {
        printf("Tipo inválido. Use 'A' para média aritmética ou 'P' para média ponderada.\n");
    }
}

int main() {
    int n, i;
    float nota1, nota2, nota3;
    char tipo;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        printf("Digite 'A' para média aritmética ou 'P' para média ponderada: ");
        scanf(" %c", &tipo);  
        
        calcular_media(nota1, nota2, nota3, tipo);
    }

    return 0;
}