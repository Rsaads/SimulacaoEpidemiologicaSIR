#include <stdlib.h>
#include "funcao.h"
#include "structs.h"

dados* alocacao(int *tempo){
  dados *ponteiro = malloc(sizeof(dados));
  ponteiro->array_s=malloc(*tempo * sizeof(float));
  ponteiro->array_i=malloc(*tempo * sizeof(float));
  ponteiro->array_r=malloc(*tempo * sizeof(float));
  return ponteiro;
}