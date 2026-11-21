#include "m2c.h"
typedef struct {
    u8 a, b, c, d;
} Q;
typedef struct {
    s8 id;
    Q q;
    u8 p[0x7FB];
    s32 st;
} S;
void func_ov000_022111f8(S *o, s8 id, Q *s) {
    o->id = id;
    o->q  = *s;
    o->st = 5;
}