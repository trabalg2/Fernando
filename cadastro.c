#include <stdio.h>
#include <stdlib.h>
//struct de cadastro do cliente
typedef struct cadastro{
  int codigo;
  char nome[75];
  char endereco[50];
  unsigned long long cpf;
  unsigned long long tel;
  char email[50];
  char sexo;
  char estadocivil[10];
  char datanasc[10];
}cliente;

void cadcli(cliente *cadc) {
  printf("codigo:\n");
  scanf("%d",cadc->codigo);
  printf("nome:\n");
  scanf("%s",cadc->nome);
  printf("endereco:\n");
  scanf("%s",cadc->endereco);
  printf("cpf:\n");
  scanf("%llu",cadc->cpf);
  printf("telefone:\n" );
  scanf("%llu",cadc->tel);
  printf("email:\n");
  scanf("%s",cadc->email);
  printf("sexo:\n");
  scanf("%c ",cadc->sexo);
  printf("estado civil:\n");
  scanf("%s",cadc->estadocivil);
  printf("data nascimento:\n");
  scanf("%s",cadc->.datanasc);
}
