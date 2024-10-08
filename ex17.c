//a) Valores escritos na tela após a execução:
//Após a execução do código, os valores que serão escritos na tela são:
2, 5
//b) Comentários detalhados sobre cada linha do programa:
int a = 5, b = 2; // Declara duas variáveis inteiras, 'a' e 'b', e as inicializa com 5 e 2, respectivamente.

troca(&a, &b); // Chama a função 'troca' passando os endereços de 'a' e 'b'. Os valores de 'a' e 'b' serão manipulados diretamente através dos ponteiros.

printf("\n%i, %i", a, b); // Imprime os valores atuais de 'a' e 'b' após a troca, que agora são 2 e 5, respectivamente.

void troca(int *x, int *y){ // Declara a função 'troca' que recebe dois ponteiros para inteiros.
    int aux; // Declara uma variável auxiliar 'aux' para armazenar temporariamente um valor.

    aux = *x;   // Armazena o valor apontado por 'x' (valor de 'a', que é 5) em 'aux'. Agora, aux = 5.
    *x = *y;    // Atribui o valor apontado por 'y' (valor de 'b', que é 2) a 'x' (ou seja, a 'a'). Agora, 'a' = 2.
    *y = aux;   // Atribui o valor de 'aux' (que era 5) ao valor apontado por 'y' (ou seja, a 'b'). Agora, 'b' = 5.
}
