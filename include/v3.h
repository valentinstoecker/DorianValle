#include <stdio.h>

#define VECTOR_TYPE double
typedef struct {
  VECTOR_TYPE data[3];
} v3;

v3 v3_new(VECTOR_TYPE x, VECTOR_TYPE y, VECTOR_TYPE z);

void v3_print(v3 v);

v3 v3_add(v3 v, v3 w);
v3 v3_sub(v3 v, v3 w);
v3 v3_mult(VECTOR_TYPE r, v3 v);

VECTOR_TYPE v3_dot(v3 v, v3 w);
VECTOR_TYPE v3_abs(v3 v);
VECTOR_TYPE v3_dist(v3 v, v3 w);