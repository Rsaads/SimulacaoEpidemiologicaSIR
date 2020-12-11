#include <stdlib.h>
#include <stdio.h>
#include "funcao.h"
#include "structs.h"

void lerarquivo(FILE *f,entrada *p,cenarios *cenario){
  float s0,i0,r0,h,n_b,t_b,s_b0,i_b0,m_k,n_k,t_k;
  int t;
  float k,b;
  float t_b2,t_k2;
  float h_t_b2,h_t_k2;
  fscanf(f,"%f %f %f %f %f %f %f %f %f %f %f %d %f %f %f %f",&s0,&i0,&r0,&h,&n_b,&t_b,&s_b0,&i_b0,&m_k,&n_k,&t_k,&t,&t_b2,&t_k2,&h_t_b2,&h_t_k2);

  cenario->t_b2 = t_b2;
  cenario->t_k2 = t_k2;
  cenario->bh_2=h_t_b2;
  cenario->kh_2=h_t_k2;

  b = calcula_b(n_b,t_b,s_b0,i_b0);
  k = calcula_k(m_k,n_k,t_k);
  p->s0=s0;
  p->i0=i0;
  p->r0=r0;
  p->h=h;
  p->b=b;
  p->k=k;
  p->t=t;
}