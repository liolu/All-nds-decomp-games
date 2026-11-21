#include "m2c.h"
extern u8 *data_ov013_0224f5c4;
void func_020d4994(void *, s32, s32);
void func_ov013_0223a910(s32);
void func_ov013_0223a824(s32 a) {
    u8 *p = data_ov013_0224f5c4 + (a << 8);
    func_020d4994(p, 0, 0xEF);
    p[0xE7] = 0xFF;
    func_ov013_0223a910(a);
}
