#include <stdio.h>
#include <stdlib.h>

struct Usuario {
  char nome[30];
  char endereco[50];
  int telefone;
  int rg[10];
}
struct Livro {
  char nome_livro[50];
  int cod_livro;
  int cod_estante[20];
  int posicao[15][10];
}
struct Emprestimo {
  struct Usuario *u;
  struct Livro *l;
  char DataEmprestimo;
  int TempoDeEmprestimo;
}

int main(int argc, char *argv[]) {
  printf("hello world");
  return EXIT_SUCCESS;
}
