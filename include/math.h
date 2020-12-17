#define VECTOR_TYPE double
#include <math.h>
typedef struct {
  VECTOR_TYPE data[3];
} v3;

v3 v3_new(VECTOR_TYPE data[3]);

v3 v3_add(v3 v, v3 w);
v3 v3_sub(v3 v, v3 w);
v3 v3_mult(VECTOR_TYPE r, v3 v);
VECTOR_TYPE v3_abs(v3 v);
VECTOR_TYPE v3_dist(v3 v, v3 w);