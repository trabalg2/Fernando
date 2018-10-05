#ifndef CADASTRO_H
#define CADASTRO_H

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


//função que cadastra o cliente
void cadcli(cliente *cadc) {
}

#endif
