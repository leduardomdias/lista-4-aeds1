#include <stdio.h>

int Primo(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return n > 1;
}

int menorPrimoMaiorOuIgual(int M) {
    while (!Primo(M)) M++;
    return M;
}

int maiorPrimoMenorOuIgual(int M) {
    while (!Primo(M) && M > 1) M--;
    return M;
}

int main() {
    int M;
    printf("Digite o numero M: ");
    scanf("%d", &M);

    printf("Maior primo <= M: %d\n", maiorPrimoMenorOuIgual(M));
    printf("Menor primo >= M: %d\n", menorPrimoMaiorOuIgual(M));

    return 0;
}
