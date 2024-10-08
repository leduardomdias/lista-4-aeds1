#include <stdio.h>

void exibir_ordem_crescente(int a, int b, int c) {
    int temp;

    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (a > c) {
        temp = a; a = c; c = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }


    printf("Valores em ordem crescente: %d, %d, %d\n", a, b, c);
}

int main() {
    int n, i;
    int a, b, c;

    printf("Digite o número de conjuntos de 3 valores: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nConjunto %d:\n", i++);
        printf("Digite o primeiro valor: ");
        scanf("%d", &a);
        printf("Digite o segundo valor: ");
        scanf("%d", &b);
        printf("Digite o terceiro valor: ");
        scanf("%d", &c);

        exibir_ordem_crescente(a, b, c);
    }

    return 0;
}