#include "m2c.h"
s32 func_ov000_021fe704(void *);
u32 *func_ov000_021fe70c(void *, s32);
s32 func_ov000_0220da08(void *, u32, u32, u32);
void func_ov000_0220dcd0(void *, u32 *, s32);
s32 func_ov000_0220dd54(u8 *p) {
    u32 *e;
    s32 i;
    u32 a, b, c;
top:
    i = func_ov000_021fe704(*(void **) (p + 0x5c)) - 1;
    if (i >= 0) {
        do {
            e = func_ov000_021fe70c(*(void **) (p + 0x5c), i);
            if (*(u16 *) ((u8 *) e + 0xc) == *(u16 *) (p + 0x66)) {
                a = e[0];
                b = e[2];
                c = e[1];
                if (func_ov000_0220da08(p, b, *(u32 *) (p + 0x44) + a, c) == 0) {
                    return 0;
                }
                func_ov000_0220dcd0(p, e, i);
                goto top;
            }
        } while (--i >= 0);
    }
    return 1;
}
