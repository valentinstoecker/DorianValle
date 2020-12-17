#include <stdio.h>

#include "include/hello_world.h"
#include "include/string.h"
#include "include/v3.h"

int main() {
  hello_world();
  string* test = string_from_char_ptr("Test");
  string_print(test);
  string_free(test);
  printf("\n");
  v3_print(v3_new(1, 2, 3));
  printf("\n");
  v3_print(v3_new(10, -20, 30));
  printf("\n");
  return 0;
}
