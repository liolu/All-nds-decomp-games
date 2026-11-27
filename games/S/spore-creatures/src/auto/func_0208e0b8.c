#include "m2c.h"

typedef struct {
    unsigned short x;
    unsigned short y;
} PackedCoordinates;

typedef struct {
    s32 x;
    s32 y;
} FixedCoordinates;

extern void func_0208e084(void *destination, void *source);

s32 func_0208e0b8(void *source, s32 flag) {
    FixedCoordinates c;
    s32 x;
    s32 y;
    s32 r;

    func_0208e084(&c, source);
    x = c.x >> 12;
    y = c.y >> 12;
    r = x * y;
    if (flag == 0) {
        r *= 2;
    }
    return (r + 3) & ~3;
}
