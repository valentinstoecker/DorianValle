#pragma once
#include <stdio.h>

#define TEST(func, name)          \
  if (func()) {                   \
    printf("%s failed!\n", name); \
    return 1;                     \
  }

#define CHECK(clause) \
  if (!(clause)) return 1;
