#include <inttypes.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  uint64_t size;
  uint64_t capacity;
  char* data;
} buffer;

buffer* buffer_create();

void buffer_append(buffer* buf, char* data, uint64_t size);
void buffer_append_buffer(buffer* buf1, buffer* buf2);

void buffer_free(buffer* buf);