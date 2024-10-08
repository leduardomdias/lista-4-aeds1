#include <stdio.h>

void teste(int n, int *b, int *k) {
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {  
            *b = i;        
            *k = n / i;    
            break;         
        }
    }
}

int main() {
    int n, b, k;

    printf("Digite o valor de n:\n");
    scanf("%d", &n);

    teste(n, &b, &k);

    printf("b = %d, k = %d\n", b, k);

    return 0;
}
