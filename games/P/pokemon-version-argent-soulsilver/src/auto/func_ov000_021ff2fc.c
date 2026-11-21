#include "m2c.h"
extern void func_020e7f30(u8 *, void *, u8);
extern u8 data_ov000_02217e70;
void func_ov000_021ff2fc(u8 *a, u8 *b) {
    u32 i = 0;
    s32 j = 0;
    do {
        func_020e7f30(b + j, &data_ov000_02217e70, a[i]);
        i++;
        j += 2;
    } while (i < 16);
}