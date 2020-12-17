#include "string.h"

#include <stdlib.h>
#include <unistd.h>

SIZE_TYPE length(char* str) {
  char* it = str;
  while (*it != '\0') {
    it++;
  }
  return (SIZE_TYPE)(it - str);
}

void copy(char* dst, char* src, SIZE_TYPE length) {
  for (size_t i = 0; i < length; i++) {
    dst[i] = src[i];
  }
}

string* string_new() {
  string* str = malloc(sizeof(string));
  if (str == NULL) {
    return NULL;
  }
  str->size = 1;
  str->data = NULL;
  return str;
}

string* string_with_length(SIZE_TYPE length) {
  string* str = string_new();
  if (str == NULL) return NULL;
  str->data = malloc(sizeof(char) * length);
  if (str->data == NULL) {
    free(str);
    return NULL;
  }
  str->size = length;
  return str;
}

string* string_from_char_ptr(char* str) {
  SIZE_TYPE l = length(str);
  string* res = string_with_length(l);
  if (res == NULL) return NULL;
  copy(res->data, str, l);
  return res;
}

void string_free(string* str) {
  if (str->data != NULL) {
    free(str->data);
  }
  free(str);
}

void string_print(string* str) { write(1, str->data, str->size); }