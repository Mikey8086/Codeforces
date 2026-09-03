#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include<assert.h>
//assert((table<13) && (table>0)); -> it checks the codition if it is true , it does nothing ,if it is false , it will abort whole program

#define F fflush(stdout);
//printf("something");F;
//this is a good way of explicitly flushing something out of the buffer, so there is no newline left in the buffer per say

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef i8 b8;
typedef i32 b32;

typedef float f32;
typedef double f64;

typedef struct {
  f32 x;
  f32 y;
} vec2f;

int main(void) {

  vec2f v = {.x = 1, .y = 2};
  vec2f* pv = &v;

  v = (vec2f){.x = 3};

// HACK: same 
  (*pv).x = 3;
  (*pv).y = 2;
  // or
  pv->x = 3;
  pv->y = 4;
// HACK: same 


  return 0;
}
