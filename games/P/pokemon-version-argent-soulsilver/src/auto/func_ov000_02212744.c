#include "m2c.h"

u32 func_ov000_021ff388(void);
void func_ov000_022123a4(void *, void *);
void func_ov000_02213064(void *, void *, s32);
void func_ov000_02212cf0(void *, void *, void *);
s32 func_ov000_02213ff4(void *, s32);
extern void *data_ov000_0221a0d8[];

void func_ov000_02212744(u8 *arg0, u8 *arg1, s8 *arg2, s32 arg3) {
    s32 i;
    s32 len;

    if (*arg2 != 0) {
        return;
    }
    arg2 += 5;
    arg3 -= 5;
    if (arg1[0x14] & 4) {
        i = 0;
        if (*(s32 *) (arg0 + 0x40) > 0) {
            do {
                len = func_ov000_02213ff4(arg2, arg3);
                if (len < 0) {
                    break;
                }
                func_ov000_02212cf0(arg1, data_ov000_0221a0d8[arg0[0x2C + i]], arg2);
                i++;
                arg2 += len;
                arg3 -= len;
            } while (i < *(s32 *) (arg0 + 0x40));
        }
        arg1[0x14] |= 0x41;
    } else {
        func_ov000_02213064(arg1, arg2, arg3);
        arg1[0x14] |= 0x43;
    }
    arg1[0x14] &= 0xF3;
    *(u32 *) (arg1 + 0x1C) = func_ov000_021ff388() - *(u32 *) (arg1 + 0x1C);
    func_ov000_022123a4(arg0 + 8, arg1);
    (*(void (**)(void *, s32, void *, s32))(arg0 + 0x44))(arg0, 0, arg1, *(s32 *) (arg0 + 0x48));
}
