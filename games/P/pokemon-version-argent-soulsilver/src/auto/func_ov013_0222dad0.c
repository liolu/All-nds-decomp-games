#include "m2c.h"

s32 func_020ccd3c(s32, s32);
void func_ov013_0223abd8(s32);
void func_ov013_02227c48(u16, u16, u16, u16);
extern u8 data_ov013_0224f528;
extern u16 data_ov013_022453d2[];
extern u16 data_ov013_022453d6[];
extern u16 data_ov013_022453d4[];
extern u16 data_ov013_022453d8[];

void func_ov013_0222dad0(s32 a) {
    u32 i;
    if (a == 1) {
        data_ov013_0224f528 = func_020ccd3c(data_ov013_0224f528 + 2, 3);
    } else {
        data_ov013_0224f528 = func_020ccd3c(data_ov013_0224f528 + 1, 3);
    }
    func_ov013_0223abd8(8);
    i = data_ov013_0224f528;
    func_ov013_02227c48(*(u16 *) ((u8 *) data_ov013_022453d2 + i * 8), *(u16 *) ((u8 *) data_ov013_022453d6 + i * 8),
                        *(u16 *) ((u8 *) data_ov013_022453d4 + i * 8), *(u16 *) ((u8 *) data_ov013_022453d8 + i * 8));
}
