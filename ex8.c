#include <stdio.h>

void func(int a, int b, int c) {
    printf("Nome_da_Variable: a | Endereco: %p | Valor: %d \n", (void*)&a, a);
    printf("Nome_da_Variable: b | Endereco: %p | Valor: %d \n", (void*)&b, b);
    printf("Nome_da_Variable: c | Endereco: %p | Valor: %d \n", (void*)&c, c);
}

int main() {
    int a, b, c;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d%d%d", &a, &b, &c);

    func(a, b, c);

    return 0; 
}
