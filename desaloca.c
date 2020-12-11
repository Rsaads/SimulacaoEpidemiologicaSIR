#include <stdlib.h>
#include "csv.h"
#include "funcao.h"
#include <stdio.h>
#include "structs.h"

void desaloca_struct(dados *variaveis){
  free(variaveis->array_s);
  free(variaveis->array_i);
  free(variaveis->array_r);
  free(variaveis);
}