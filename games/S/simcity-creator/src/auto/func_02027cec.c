#include "m2c.h"

s32 func_02091a30(s32);                             /* extern */
M2C_UNK func_020b0b74(M2C_UNK *);                   /* extern */
M2C_UNK func_020b0bbc(M2C_UNK *);                   /* extern */
s32 func_020b0bf4(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_020b0c90(M2C_UNK *);                   /* extern */
M2C_UNK func_020b0f04(M2C_UNK *, s32, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020c821c;
extern M2C_UNK data_020c8758;

void func_02027cec(void *arg0, s32 arg1) {
    u8 sp4[88];

    func_020b0b74(sp4);
    if (func_020b0bf4(sp4, &data_020c8758) != 0) {
        func_020b0f04(sp4, *((M2C_UNK *) ((s8 *) &data_020c821c + (arg1 * 4))), func_02091a30(M2C_FIELD(arg0, s32 *, 0x62E4)),
                      0x28, 0x800);
        func_020b0c90(sp4);
    }
    func_020b0bbc(sp4);
}
