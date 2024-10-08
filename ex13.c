#include <stdio.h>

float soma_S(int n){
    float soma_S = 0;
    for(int i = 1; i <= n; i++){
        soma_S += 1.0 / i ;
    }
    return soma_S;
}

int main(){
    int n;

    scanf("%d", &n);

    float resultado = soma_S(n);
    printf("%.2f", resultado);
    return 0;
}
