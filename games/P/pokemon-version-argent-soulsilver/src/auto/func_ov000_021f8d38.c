#include "m2c.h"
void func_ov000_02210e1c(s32, s32);
void func_ov000_02210de8(s32, s32);
u8 *func_ov000_021f957c(void);
extern u8 data_ov000_0221a968[];
extern u8 data_ov000_0221a969[];
extern s32 *data_ov000_0221a970[];

void func_ov000_021f8d38(s32 a, s32 b) {
    s32 t;
    switch (a) {
        case 8:
            func_ov000_02210de8(b, func_ov000_021f957c()[0x14]);
            return;
        case 10:
            func_ov000_02210de8(b, func_ov000_021f957c()[0x16]);
            return;
        case 0x32:
            func_ov000_02210de8(b, *(s32 *) (func_ov000_021f957c() + 0x200));
            return;
        case 0x33:
            func_ov000_02210de8(b, func_ov000_021f957c()[0x15]);
            return;
        case 0x34:
            func_ov000_02210de8(b, *(s32 *) (func_ov000_021f957c() + 0x20));
            return;
        case 0x35:
            func_ov000_02210de8(b, 3);
            return;
        case 0x36:
            func_ov000_02210de8(b, 1);
            return;
        default:
            t = a - 0x64;
            if (t < 0) {
                return;
            }
            if (t >= 0x9a) {
                return;
            }
            t = t * 0xc;
            if (data_ov000_0221a968[t] == 0) {
                return;
            }
            if (data_ov000_0221a969[t] != 0) {
                func_ov000_02210e1c(b, *(s32 *) ((u8 *) data_ov000_0221a970 + t));
                return;
            }
            func_ov000_02210de8(b, **(s32 **) ((u8 *) data_ov000_0221a970 + t));
            return;
    }
}
