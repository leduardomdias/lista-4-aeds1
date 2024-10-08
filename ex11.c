#include <stdio.h>

int func(int n1, int n2, int n3){
    int menor;

    if (n1 < n2 && n1 < n3){
        menor = n1;
    } else if (n2 < n1 && n2 < n3){
        menor = n2;
    } else {
        menor = n3;
    }
    

    return menor;
}

int main() {
    int n1, n2, n3;

    scanf("%d%d%d", &n1, &n2, &n3);

    int resultado = func(n1, n2, n3);
    printf("%d", resultado);

    return 0;
}