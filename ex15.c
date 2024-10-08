#include <stdio.h>
#include <stdbool.h>

bool calcularExpressao(bool A, bool B, bool C) {
    return (!A || (B && C));
}

int main() {

    bool A, B, C;


    printf("Digite o valor de A (0 ou 1): ");
    scanf("%d", (int*)&A);

    printf("Digite o valor de B (0 ou 1): ");
    scanf("%d", (int*)&B);

    printf("Digite o valor de C (0 ou 1): ");
    scanf("%d", (int*)&C);

    bool resultado = calcularExpressao(A, B, C);

    printf("Resultado da expressão (~A V (B & C)) = %d\n", resultado);

    return 0;
}

