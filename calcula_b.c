#include "funcao.h"

float calcula_b(float n_b,float t_b,float s_b0,float i_b0){
  float b;
  b= n_b/(t_b*s_b0*i_b0);
  return b;
}