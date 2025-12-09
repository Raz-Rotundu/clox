#ifndef clox_memory_h
#define clox_memory_h

#include "common.h"

// Macro calculates new capacity based on current capacity, with minimum size 8
#define GROW_CAPACITY(capacity) \
  ((capacity) < 8 ? 8 : (capacity) * 2)

// Macro to grow array to given capacity
#define GROW_ARRAY(type, pointer, oldCount, newCount) \
  (type*)reallocate(pointer, sizeof(type) * (oldCount), \
      sizeof(type) * (newCount))

// Function used for dynamic memory allocation in Clox(allocation, freeing, resizing existing allocation)
void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#endif
