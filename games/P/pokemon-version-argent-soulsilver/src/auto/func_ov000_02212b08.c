#include "m2c.h"
typedef struct S {
    s32 p0;
    s32 f4;
    s32 p8;
    s32 pc;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
} S;
s32 func_ov000_02212370(void *);
void func_ov000_02212424(S *, s32);

void func_ov000_02212b08(S *s) {
    while (s->f10 < s->f4 && s->f1c > 0) {
        func_ov000_02212424(s, func_ov000_02212370(&s->f14));
    }
}
