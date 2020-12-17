#include "include/hello_world.h"
#include "include/string.h"

int main() {
  hello_world();
  string* test = string_from_char_ptr("Test");
  string_print(test);
  string_free(test);
  return 0;
}
