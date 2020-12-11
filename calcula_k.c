#include <stdio.h>
#include "funcao.h"

float calcula_k(float m_k,float n_k,float t_k){
  float k;
  k = m_k/(n_k * t_k);
  return k;
}