/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0204c1b0(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    if (M2C_FIELD(arg0, u8 *, 0x2A) == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r1 > 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (temp_r1 - 1);
    }
    if (M2C_FIELD(arg0, u8 *, 0x28) == 0) {
        return;
    }
    temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r1_2) {                            /* irregular */
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 7;
                M2C_FIELD(arg0, s32 *, 0x20) = 1;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 0xCD);
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
            return;
        case 1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 7;
                M2C_FIELD(arg0, s32 *, 0x20) = 0;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 0xCD);
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
            return;
    }
}
