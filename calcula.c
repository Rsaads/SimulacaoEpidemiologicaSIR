#include <stdlib.h>
#include "funcao.h"
#include "structs.h"

void calcula(dados *variaveis,entrada*p,int time,float *tempo,cenarios *cenario){
  int cen;
  variaveis->array_s[0]=p->s0;
  variaveis->array_i[0]=p->i0;
  variaveis->array_r[0]=p->r0;

  for(int i =1 ;i<time;i++){
     variaveis->array_s[i]= variaveis->array_s[i-1]-p->h*p->b* variaveis->array_s[i-1]* variaveis->array_i[i-1];
     variaveis->array_i[i]= variaveis->array_i[i-1]+p->h*(p->b* variaveis->array_s[i-1]* variaveis->array_i[i-1]-p->k* variaveis->array_i[i-1]);
     variaveis->array_r[i]= variaveis->array_r[i-1]+p->h*p->k* variaveis->array_i[i-1];
    tempo[i] = tempo[i-1] + p->h;
  }
}