#include "m2c.h"
typedef struct {
    u8 v : 4;
} BF;
void func_020d4a50(void *, u8 *, s32);
u8 func_ov000_021fc170(u8 *);
extern u8 data_ov000_02216078;
extern u8 data_ov000_02216088;
extern u8 data_ov000_02217bac;

u8 func_ov000_021fc084(u8 *p) {
    u8 r5;
    u8 *r4;
    u32 t;
    r4 = p + 0x300;
    r5 = func_ov000_021fc170(p);
    r4 = r4 + r5 * 0x24;
    t  = ((BF *) (p + 0xD0C))->v;
    if (t == 0 || t == 4) {
        func_020d4a50(&data_ov000_02217bac, r4 + 4, 8);
        r4[3] = 8;
        r4[1] = 6;
        r5 += 1;
        r4 += 0x24;
    }
    t = ((BF *) (p + 0xD0C))->v;
    if (t == 0 || t == 7) {
        func_020d4a50(&data_ov000_02216078, r4 + 4, 8);
        r4[3] = 8;
        r4[1] = 9;
        r5 += 1;
        r4 += 0x24;
    }
    t = ((BF *) (p + 0xD0C))->v;
    if (t == 0 || t == 8) {
        func_020d4a50(&data_ov000_02216088, r4 + 4, 0xB);
        r4[3] = 0xB;
        r4[1] = 0xA;
        r5 += 1;
    }
    return r5;
}
