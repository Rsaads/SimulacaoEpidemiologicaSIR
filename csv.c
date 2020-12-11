#include <stdio.h>
#include "funcao.h"
#include "csv.h"
#include "structs.h"

void imprimevalores(int time,dados *variaveis,FILE *f2,float *tempo){
  for(int i =0 ;i<time;i++){
    fprintf(f2,"%f,%f,%f,%.1f\n", variaveis->array_s[i], variaveis->array_i[i], variaveis->array_r[i],tempo[i]);
  }
}