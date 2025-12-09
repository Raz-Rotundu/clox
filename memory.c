#include <stdlib.h>

#include "memory.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
  if (newSize == 0) {
    free(pointer);
    return NULL;

  }

  void* result = realloc(pointer, newSize);
  // Exit if there is no usable memory available to realloc
  if(result == NULL) exit(1);
  return result;
}
