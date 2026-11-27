/* near start: 8 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern u8 *data_ov001_02196c6c;
extern void MI_CpuCopy8(u8 *, u8 *, s32);
extern s32 func_ov001_02184a0c(void);
extern s32 func_ov001_021850d4(u8 *);
extern s32 func_ov001_021849f8(void);
extern s32 func_ov001_021850ac(s32);

void func_ov001_02185ee4(s32 x, s32 y, u8 *z) {
    u8 *r5;
    u16 r7;
    s32 r;
    u8 *src;

    r5 = data_ov001_02196c6c;
    if (*(u8 *) (r5 + 0xA93) == 1) {
        *(u16 *) (*(u8 **) (data_ov001_02196c6c + 0xAB0))     = (u16) x;
        *(u16 *) (*(u8 **) (data_ov001_02196c6c + 0xAB0) + 2) = (u16) y;
        MI_CpuCopy8(z, *(u8 **) (data_ov001_02196c6c + 0xAB0) + 4, 0x40);
    } else {
        *(s32 *) (r5 + 0x204)                                = *(s32 *) (r5 + 0x204) + 1;
        *(u16 *) (*(u8 **) (data_ov001_02196c6c + 0xAB0))    = 0xBC;
        *(u8 *) (*(u8 **) (data_ov001_02196c6c + 0xAB0) + 4) = *(u8 *) (data_ov001_02196c6c + 0xA92);
    }
    r = func_ov001_02184a0c();
    if (r != 5) {
        return;
    }
    if (func_ov001_021850d4(data_ov001_02196c6c) == 0) {
        *(s32 *) (data_ov001_02196c6c + 0x204) = *(s32 *) (data_ov001_02196c6c + 0x204) + 4;
        return;
    }
    if (*(u8 *) (data_ov001_02196c6c + 0xA93) == 0) {
        *(s32 *) (data_ov001_02196c6c + 0x204) = *(s32 *) (data_ov001_02196c6c + 0x204) + 1;
    } else {
        *(s32 *) (data_ov001_02196c6c + 0x204) = 0;
        r                                      = func_ov001_021849f8();
        if (r != 3) {
            *(u8 *) (data_ov001_02196c6c + 0xA90) = 0x1B;
            return;
        }
    }
    r7 = 0;
    do {
        src = (u8 *) func_ov001_021850ac(r7);
        if (src != 0) {
            MI_CpuCopy8(src, data_ov001_02196c6c + 0x100 + r7 * 0x44, 0x44);
            *(s32 *) (data_ov001_02196c6c + 0x208 + r7 * 4) = 1;
        } else {
            *(s32 *) (data_ov001_02196c6c + 0x208 + r7 * 4) = 0;
        }
        r7++;
    } while (r7 < 2);
}
