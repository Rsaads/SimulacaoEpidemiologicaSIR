#ifndef funcao_h
#define funcao_h
#include <stdio.h>
#include "structs.h"

dados* alocacao(int *tempo);
void lerarquivo(FILE *f,entrada *p,cenarios *cenario);
void calcula(dados *variaveis,entrada*p,int time,float *tempo,cenarios *cenario);
float calcula_k(float m_k,float n_k,float t_k);
float calcula_b(float n_b,float t_b,float s_b0,float i_b0);

#endif