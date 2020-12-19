#include "buffer.h"

buffer* buffer_create() {
  buffer* buf = malloc(sizeof(buffer));
  if (buf == NULL) return NULL;
  buf->data = malloc(sizeof(char));
  if (buf->data == NULL) {
    free(buf);
    return NULL;
  }
  buf->capacity = 1;
  buf->size = 0;
  return buf;
}

void buffer_append(buffer* buf, char* data, uint64_t size) {
  if (buf->capacity < buf->size + size) {
    uint64_t new_cap = buf->capacity * 2;
    while (new_cap < buf->size + size) {
      new_cap *= 2;
    }
    buf->data = realloc(buf->data, new_cap);
    buf->capacity = new_cap;
  }
  memcpy(&buf->data[buf->size], data, size);
  buf->size += size;
}

void buffer_append_buffer(buffer* buf1, buffer* buf2) {
  buffer_append(buf1, buf2->data, buf2->size);
}

void buffer_free(buffer* buf) {
  free(buf->data);
  free(buf);
}