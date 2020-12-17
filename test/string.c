#include "string.h"

int test_create() {
  string* str = string_new();
  CHECK(str != NULL)
  CHECK(str->data == NULL)
  CHECK(str->size == 0)
  string_free(str);
  return 0;
}

int test_create_with_size() {
  string* str = string_with_length(10);
  CHECK(str != NULL)
  CHECK(str->data != NULL)
  CHECK(str->size == 10)
  for (size_t i = 0; i < 10; i++) {
    str->data[i] = 'f';
  }
  string_free(str);
  return 0;
}

int test_create_from_char_ptr() {
  char* test_str = "This is a Test";
  string* str = string_from_char_ptr(test_str);
  CHECK(str != NULL)
  CHECK(str->data != NULL)
  CHECK(str->size == 14)
  for (size_t i = 0; i < str->size; i++) {
    CHECK(str->data[i] == test_str[i])
  }
  string_free(str);
  return 0;
}

int string_test() {
  TEST(test_create, "Create")
  TEST(test_create_with_size, "Create with size");
  TEST(test_create_from_char_ptr, "Create from char* failed")
  return 0;
}