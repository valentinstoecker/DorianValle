#include "main.h"

#include <stdlib.h>

int test_main() {
  CHECK(!system("./build/main < ./test/inout/in > ./test/inout/out"))
  FILE* po = fopen("./test/inout/expected", "r");
  CHECK(po != NULL)
  FILE* co = fopen("./test/inout/out", "r");
  CHECK(co != NULL)
  while (1) {
    int cpo = getc(po);
    int cco = getc(co);
    CHECK(cpo == cco)
    if (cco == EOF) break;
  }
  return 0;
}