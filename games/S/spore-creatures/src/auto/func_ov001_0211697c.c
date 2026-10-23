/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"
typedef struct {
    u8 a[4];
} Q;
typedef struct {
    s8 id;
    Q q;
    u8 p[0x7FB];
    s32 st;
} S;
void func_ov001_0211697c(S *o, s8 id, Q *s) {
    o->id = id;
    o->q  = *s;
    o->st = 5;
}
