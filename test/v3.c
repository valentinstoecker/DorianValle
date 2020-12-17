#include "v3.h"

int v3_abs_test() {
  CHECK(v3_abs(v3_new(1, 2, 2)) == 3.0)
  CHECK(v3_abs(v3_new(1, -2, 2)) == 3.0)
  return 0;
}

int v3_test() {
  TEST(v3_abs_test, "Abs");
  return 0;
}