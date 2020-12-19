#include "v3.h"

int v3_new_test() {
  v3 test = v3_new(1, -1.5, 1.5);
  CHECK(test.data[0] == 1)
  CHECK(test.data[1] == -1.5)
  CHECK(test.data[2] == 1.5)
  return 0;
}

int v3_add_sub_test() {
  v3 v = v3_new(1, -2, 0.5);
  v3 w = v3_new(-1, -2, -0.5);
  v3 a = v3_add(v, w);
  CHECK(a.data[0] == 0)
  CHECK(a.data[1] == -4)
  CHECK(a.data[2] == 0)
  v3 s = v3_sub(a, w);
  CHECK(v.data[0] == s.data[0])
  CHECK(v.data[1] == s.data[1])
  CHECK(v.data[2] == s.data[2])
  return 0;
}

int v3_dot_test() {
  CHECK(v3_dot(v3_new(1, 0, 0), v3_new(0, 1, 1)) == 0)
  CHECK(v3_dot(v3_new(1, 0, 0), v3_new(2, 1, 1)) == 2)
  return 0;
}

int v3_abs_test() {
  CHECK(v3_abs(v3_new(1, 2, 2)) == 3.0)
  CHECK(v3_abs(v3_new(1, -2, 2)) == 3.0)
  return 0;
}

int v3_mult_test() {
  v3 v = v3_new(1, 0, -4);
  v3 w = v3_add(v3_add(v, v), v3_mult(-2.0, v));
  CHECK(w.data[0] == 0)
  CHECK(w.data[1] == 0)
  CHECK(w.data[2] == 0)
  return 0;
}

int v3_dist_test() {
  CHECK(v3_dist(v3_new(1, 2, 3), v3_new(-1, 2, 3)) == 2)
  return 0;
}

int v3_test() {
  TEST(v3_new_test, "New")
  TEST(v3_add_sub_test, "Add_Sub")
  TEST(v3_mult_test, "Mult")
  TEST(v3_dot_test, "Dot")
  TEST(v3_abs_test, "Abs")
  TEST(v3_dist_test, "Dist")
  return 0;
}