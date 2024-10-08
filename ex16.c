#include <stdio.h>

int func(int n, int k)
{
    int digito;
    for (int i = 1; i < k; i++)
    {
        digito = n % 10;
        n /= 10;
    }

    return digito;
}

int main()
{
    int n, k;

    printf("Digite um numero para n:\n");
    scanf("%d", &n);
    printf("Digite um numero para k < n:\n");
    scanf("%d", &k);

    int resultado = func(n, k);
    printf("O %d digito de %d da direita para esquerda eh %d\n", k, n, resultado);

    return 0;
}