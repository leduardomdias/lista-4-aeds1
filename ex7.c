#include <stdio.h>

int main() {
    int n1 = 0, n2 = 0;

    printf("Digite 2 numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    if (&n1 > &n2) {
        printf("Maior endereco: %p\n", &n1);
    } else {
        printf("Maior endereco: %p\n", &n2);
    } 

    return 0;
}
