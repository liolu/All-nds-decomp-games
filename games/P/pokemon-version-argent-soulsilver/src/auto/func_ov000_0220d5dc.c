#include "m2c.h"
typedef struct {
    u8 pad[0xc];
    s32 state;
    u8 pad2[0x9c - 0x10];
    s32 h;
} O;
s32 func_ov000_0220d410(O *, s32, s32);
s32 func_ov000_021fe704(s32);
s32 func_ov000_0220c788(O *, s32, s32, s32, s32);
s32 func_ov000_0220c424(O *, s32, s32, s32);
s32 func_ov000_0220d5dc(O *o, s32 a, s32 b) {
    s32 st = o->state;
    if (st != 5 && st != 6) {
        if (func_ov000_0220d410(o, a, b) == 0) {
            return 0;
        }
    } else {
        if (func_ov000_021fe704(o->h) != 0) {
            return func_ov000_0220c788(o, 0, a, b, 1) != 0;
        }
        if (func_ov000_0220c424(o, a, b, 1) == 0) {
            return 0;
        }
    }
    return 1;
}
