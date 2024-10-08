9.
    #include <stdio.h>
    int main(){
      int x, *p, **q;
      p = &x;
      q = &p;
      x = 10;
      printf("%d\n", &q); // <--- erro nessa linha, está imprimindo o endereço de q, e não o valor de x.
      return 0;
    }
//printf("%d\n", **q);: A expressão **q referencia q para acessar p e depois referencia p para acessar x, resultando em 10 no printf.