#pragma once

#define SIZE_TYPE unsigned int

typedef struct {
  SIZE_TYPE size;
  char* data;
} string;

string* string_new();
string* string_with_length(SIZE_TYPE length);
string* string_from_char_ptr(char* str);

void string_print(string* str);

void string_free(string* str);