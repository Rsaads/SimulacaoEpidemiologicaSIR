#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"
#include "csv.h"
#include "structs.h"

int main() {
  //CRIAÇÂO DO ARQUIVO DE ENTRADA
  int time;
  FILE *f;
  f = fopen("entrada.txt","r");
  if(f == NULL){
    printf("Erro na abertura do arquivo");
    system("pause");
    exit(1);
  }
  //Leitura dos valores no arquivo de entrada.
  entrada *p = malloc(sizeof(entrada));
  cenarios *cenario =malloc(sizeof(cenarios));
  lerarquivo(f,p,cenario);
  time = p->t * 10 * 24;

  //ALOCAÇÂO DINÂMICA DOS VETORES
  dados *variaveis = alocacao(&time);
  float *tempo = malloc(time * sizeof(float));
  tempo[0] = p->h;
  calcula(variaveis,p,time,tempo,cenario);
  
  //ABERTURA DO ARQUIVO DE SAIDA
  FILE *f2;
  f2 = fopen("saida.csv","w+");
  if(f2 == NULL){
    printf("Erro na abertura do arquivo");
    system("pause");
    exit(1);
  }
  /*
  Impressão dos números de indivíduos suscetíveis,número de indivíduos infectados e número de indivíduos removidos ao longo do tempo.
  */
  imprimevalores(time,variaveis,f2,tempo);
  fclose(f);
  fclose(f2);

  free(tempo);
  free(p);
  desaloca_struct(variaveis);
  return 0;
}