#ifndef structs_h
#define structs_h

typedef struct{
  float *array_s;
  float *array_i;
  float *array_r;
}dados;

typedef struct{
  float s0;
  float i0;
  float r0;
  float h;
  float b;
  float k;
  int t;
}entrada;

typedef struct{
  float t_b2;
  float t_k2;
  float bh_2;
  float kh_2;
}cenarios;

typedef struct{
  float N_b, T_b, S_b0, I_b0, T_b2, tb;
}dadosB;
typedef struct{
  float m_k, n_k, T_k, T_k2, tk;
}dadosK;

#endif