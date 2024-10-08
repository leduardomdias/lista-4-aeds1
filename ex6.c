#include <stdio.h>

int triangulo(int x, int y, int z){
    if (x < y + z && y < x + z && z < x + y) {
      
        if (x == y && y == z) {;
            return 1; 
        } else if (x == y || x == z || y == z) {;
            return 2; 
        } else {;
            return 3; 
        }
    } else {
        printf("Nao e um triangulo valido\n");
        return 0; 
    }
}

int main() {
    int x, y, z, n;

    printf("Quantos triangulos serao?\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite os valores dos lados do triangulo %d: \n", i + 1);
        scanf("%d %d %d", &x, &y, &z);

        int tipo = triangulo(x, y, z);
        if (tipo == 0) {
            printf("Nao e um triangulo valido\n");
        } else if (tipo == 1) {
            printf("Triangulo equilatero\n");
        } else if (tipo == 2) {
            printf("Triangulo isoceles\n");
        } else if (tipo == 3) {
            printf("Triangulo escaleno\n");
        }
    }

    return 0;
}
