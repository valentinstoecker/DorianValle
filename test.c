#include "test/test.h"

#include "test/main.h"
#include "test/string.h"
#include "test/v3.h"

int main() {
  TEST(string_test, "String")
  TEST(v3_test, "V3")
  TEST(test_main, "Main")
  return 0;
}
