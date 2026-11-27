/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c3408(void *);                      /* extern */
M2C_UNK func_020d37e8(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_02108e18;

void *func_020bd0e4(void *arg0, s32 arg1) {
    void *var_r3;

    func_020d37e8(arg0, 0xB);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02108e18;
    M2C_FIELD(arg0, s32 *, 0x100)  = -1;
    M2C_FIELD(arg0, s32 *, 0x104)  = 0;
    M2C_FIELD(arg0, s32 *, 0x108)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x110)  = 0;
    M2C_FIELD(arg0, s16 *, 0x114)  = -1;
    M2C_FIELD(arg0, s16 *, 0x116)  = -1;
    M2C_FIELD(arg0, s16 *, 0x118)  = -1;
    M2C_FIELD(arg0, s16 *, 0x11A)  = -1;
    M2C_FIELD(arg0, s16 *, 0x11C)  = -1;
    M2C_FIELD(arg0, s32 *, 0x120)  = -1;
    M2C_FIELD(arg0, s32 *, 0x124)  = -1;
    M2C_FIELD(arg0, s16 *, 0x128)  = -1;
    M2C_FIELD(arg0, s16 *, 0x12A)  = -1;
    M2C_FIELD(arg0, s8 *, 0x12C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x12D)   = 0;
    M2C_FIELD(arg0, s32 *, 0x130)  = 0;
    M2C_FIELD(arg0, s32 *, 0x134)  = 0;
    M2C_FIELD(arg0, s8 *, 0x138)   = 0;
    M2C_FIELD(arg0, s8 *, 0x139)   = 0;
    M2C_FIELD(arg0, s8 *, 0x13A)   = 0;
    M2C_FIELD(arg0, s8 *, 0x13B)   = 0;
    M2C_FIELD(arg0, s32 *, 0x13C)  = 0;
    func_020c3408(arg0 + 0x140);
    M2C_FIELD(arg0, s32 *, 0x170) = 1;
    M2C_FIELD(arg0, s32 *, 0x174) = 0x1F;
    M2C_FIELD(arg0, s32 *, 0x178) = 0;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0x78;
    var_r3                        = arg0 + 0x188;
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) M2C_FIELD(arg0, s32 *, 0x17C);
    M2C_FIELD(arg0, s32 *, 0x184) = arg1;
    do {
        M2C_FIELD(var_r3, s32 *, 0)    = 0;
        M2C_FIELD(var_r3, s32 *, 4)    = 0;
        M2C_FIELD(var_r3, s16 *, 8)    = 0;
        M2C_FIELD(var_r3, s16 *, 0xA)  = 0;
        M2C_FIELD(var_r3, s16 *, 0xC)  = 0;
        M2C_FIELD(var_r3, s16 *, 0xE)  = 0;
        M2C_FIELD(var_r3, s16 *, 0x10) = -1;
        M2C_FIELD(var_r3, s16 *, 0x12) = 0;
        var_r3 += 0x14;
    } while (var_r3 != (arg0 + 0x1B0));
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    M2C_FIELD(arg0, s16 *, 0x16C) = 0;
    return arg0;
}
