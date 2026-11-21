#include "m2c.h"

typedef struct Obj29dc {
    s32 *tab;
    s32 base;
} Obj29dc;

s32 func_ov013_0222bafc(Obj29dc *o, s32 i) {
    return o->base + o->tab[i & 0xffff];
}
