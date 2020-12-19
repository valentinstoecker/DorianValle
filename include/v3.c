#include "v3.h"

#include <math.h>

v3 v3_new(VECTOR_TYPE x, VECTOR_TYPE y, VECTOR_TYPE z) {
  v3 v;
  v.data[0] = x;
  v.data[1] = y;
  v.data[2] = z;
  return v;
}

void v3_print(v3 v) { printf("(%f, %f, %f)", v.data[0], v.data[1], v.data[2]); }

v3 v3_add(v3 v, v3 w) {
  v3 res;
  res.data[0] = v.data[0] + w.data[0];
  res.data[1] = v.data[1] + w.data[1];
  res.data[2] = v.data[2] + w.data[2];
  return res;
}

v3 v3_sub(v3 v, v3 w) {
  v3 res;
  res.data[0] = v.data[0] - w.data[0];
  res.data[1] = v.data[1] - w.data[1];
  res.data[2] = v.data[2] - w.data[2];
  return res;
}

v3 v3_mult(VECTOR_TYPE r, v3 v) {
  v3 res;
  res.data[0] = r * v.data[0];
  res.data[1] = r * v.data[1];
  res.data[2] = r * v.data[2];
  return res;
}

VECTOR_TYPE v3_dot(v3 v, v3 w) {
  return v.data[0] * w.data[0] + v.data[1] * w.data[1] + v.data[2] * w.data[2];
}

VECTOR_TYPE v3_abs(v3 v) { return sqrt(v3_dot(v, v)); }

VECTOR_TYPE v3_dist(v3 v, v3 w) { return v3_abs(v3_sub(v, w)); }