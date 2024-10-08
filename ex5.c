#include <stdio.h>
#include <math.h>


float soma_S(int n){
    float soma_S = 0;
    for(int i = 1; i <= n; i++){
        soma_S += (pow(i,2) + 1) / (i + 3) ;
    }
    return soma_S;
}

int main(){
    int n;

    printf("Digite um numero para a equacao: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    float resultado = soma_S(n);
    printf("%.3f", resultado);

    return 0;
}