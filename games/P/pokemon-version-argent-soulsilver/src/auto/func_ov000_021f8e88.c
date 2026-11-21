#include "m2c.h"

void func_ov000_02210dbc(s32, s32);
extern u8 data_ov000_0221a968[];

void func_ov000_021f8e88(s32 a, s32 b) {
    s32 i;
    u8 *p;
    switch (a) {
        case 0:
            func_ov000_02210dbc(b, 8);
            func_ov000_02210dbc(b, 0xA);
            func_ov000_02210dbc(b, 0x32);
            func_ov000_02210dbc(b, 0x33);
            func_ov000_02210dbc(b, 0x34);
            func_ov000_02210dbc(b, 0x35);
            func_ov000_02210dbc(b, 0x36);
            p = data_ov000_0221a968;
            for (i = 0; i < 0x9A; i++) {
                if (*p != 0) {
                    func_ov000_02210dbc(b, *p);
                }
                p += 0xC;
            }
            break;
        case 1:
        case 2:
            break;
    }
}
