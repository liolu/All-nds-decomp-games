#include "m2c.h"

u8 *func_ov000_021fae34(s32);
long long func_020d34b0(void);
void func_ov000_021fcbd4(void *, void *, s32, s32);
extern u8 data_02108fe4;
extern u8 data_02108fec;

void func_ov000_021fc588(s32 a0) {
    u8 *p = func_ov000_021fae34(0x10);
    switch (a0) {
        case 3:
            *(long long *) (p + 0xCB0) = func_020d34b0();
            func_ov000_021fcbd4(&data_02108fe4, &data_02108fec, *(s8 *) (p + 0xD11), 0x200000);
            break;
        case 4:
            *(long long *) (p + 0xCB0) = func_020d34b0();
            func_ov000_021fcbd4(p + 0x474 + p[0xD0F] * 0xC0, p + 0x47C + p[0xD0F] * 0xC0,
                                *(u16 *) (p + 0x4A6 + p[0xD0F] * 0xC0) - 1, 0x300000);
            break;
        case 5:
            *(long long *) (p + 0xCB0) = func_020d34b0();
            func_ov000_021fcbd4(&data_02108fe4, p + 0x304 + p[0xD0F] * 0x24, *(s8 *) (p + 0xD11), 0x300000);
            break;
    }
}
