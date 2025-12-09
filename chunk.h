#fndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

// A module which defines code representation
// A chunk is  a sequence of bytecode

// Represents the opCodes of the virtual machine
typedef enum {
  OP_RETURN,
  
} OpCode;

// A dynamic array containing the bytes of the code(chunk)
typedef struct {
  int count;
  int capacity;
  uint8_t* code;
} Chunk;

// Initialize a new chunk
void initChunk(Chunk* chunk);

// Add bytes to chunk
void writeCHunk(Chunk* chunk, uint8_t byte);

// Free memory from chunk
void freeChunk(Chunk* chunk);

#endif
