#include <stdio.h>

int func(int medias, int n)
{
    for(int i = 0; i < n; i++)
    {

        printf("Digite a media do aluno %d:\n ", i+1);
        scanf("%d", &medias);
        if(medias >= 90)
        {
            printf("A\n");
        } else if(medias >= 80 && medias < 90)
        {
            printf("B\n");
        } else if(medias >= 70 && medias < 80)
        {
            printf("C\n");
        } else if(medias >= 60 && medias < 70)
        {
            printf("D\n");
        } else if(medias >= 40 && medias < 60)
        {
            printf("E\n");
        } else
        {
            printf("F\n");
        }
    }

}


int main()
{
    int n;

    printf("Digite um numero de alunos: ");
    scanf("%d", &n);

    return func(n, n);


}
