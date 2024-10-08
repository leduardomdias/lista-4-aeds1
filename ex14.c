#include <stdio.h>

float func(int n){
    float nota = 0;
    float soma_aprovados = 0;
    int cont_aprovados = 0;

    for(int i = 1; i <= n; i++)
    {
        do {
            printf("Digite a nota do aluno %d (entre 0 e 10):\n", i);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10)
            {
                printf("Nota inválida! Por favor, insira um número entre 0 e 10.\n");
            }
        } while (nota < 0 || nota > 10);

        if (nota >= 6) {
            printf("Aluno %d aprovado!\n", i);
            soma_aprovados += nota;
            cont_aprovados++;
        } else {
            printf("Aluno %d reprovado!\n", i);
        }
    }

    if (cont_aprovados > 0) {
        return soma_aprovados / cont_aprovados;
    } else {
        return 0;
    }
}

int main(){
    int n;

    printf("Digite o número de alunos:\n");
    scanf("%d", &n);

    if (n > 0) {
        float media = func(n);

        if (media > 0) {
            printf("Média dos alunos aprovados = %.2f\n", media);
        } else {
            printf("Nenhum aluno foi aprovado.\n");
        }
    } else {
        printf("O número de alunos deve ser maior que zero.\n");
    }

    return 0;
}
