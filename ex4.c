#include <stdio.h>

    float fatorial(int n) {
    float resultado = 1.0;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

    float calcularE(int n) {
    float S = 1.0; 
    
    for (int i = 1; i <= n; i++) {
        S += 1.0 / fatorial(i);
    }
    
    return S;
}

int main() {
    int n;
    
    printf("Digite um valor inteiro positivo (n): ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }
    
    float resultado = calcularE(n);
    printf("%.2f\n",resultado);
    
    return 0;
}