#include <stdio.h>

float func(int n){
  float media = 0;
  float nota = 0;
  float soma = 0;

  for(int i=1;i<=n;i++)
  {
    printf("Digite a nota do aluno %d:\n", i);
    scanf("%f", &nota);
    soma += nota;
  }
  media = soma / n;
  return media;
}

int main(){
  int n;

  printf("Digite um numero de alunos:\n ");
  scanf("%d", &n);
  float media = func(n);
  printf("Media = %.2f", media);
  return 0;
}
