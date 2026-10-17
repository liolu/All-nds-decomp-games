/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200be28(M2C_UNK *);                   /* extern */
M2C_UNK func_02068b84();                            /* extern */
extern M2C_UNK data_020d00a8;

void func_0200f1dc(void *arg0, void *arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) != 0x1C) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s8 *, 0x14) = 1;
            return;
        case 2:
            M2C_FIELD(arg0, s8 *, 0xC) = 0;
            func_0200be28(&data_020d00a8);
            return;
        case 1:
            func_02068b84();
            return;
    }
}
