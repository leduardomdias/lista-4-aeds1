6
#include <stdio.h>

void calcular_media_salario() {
    float salario, soma_salarios = 0;
    int num_familias = 0;
    
    while (1) {
        printf("Digite o salário da família (ou 0 para terminar): ");
        scanf("%f", &salario);
        
        if (salario == 0) {
            break;
        }
        
        soma_salarios += salario; 
        num_familias++; 
    }
    
    if (num_familias > 0) {
        float media_salario = soma_salarios / num_familias;
        printf("\nMédia de salário da população: %.2f\n", media_salario);
    } else {
        printf("Nenhuma família foi cadastrada.\n");
    }
}

int main() {
    calcular_media_salario(); 
    
    return 0;
}