/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019724(void *);                      /* extern */
s32 func_020281d0(s32, s32);                        /* extern */
M2C_UNK func_0202826c(void *, s32);                 /* extern */
M2C_UNK func_0203bca4(void *);                      /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern s32 data_020be4b4;
extern M2C_UNK data_020be51c;
extern M2C_UNK data_020be6ac;

void *func_02019b90(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;

    func_0202826c(arg0, *((M2C_UNK *) ((s8 *) &data_020be51c + (arg2 * 4))));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020be6ac;
    M2C_FIELD(arg0, s32 *, 0x50)   = arg3;
    M2C_FIELD(arg0, s32 *, 0x54)   = arg2;
    func_0203bca4(arg0 + 0x68);
    M2C_FIELD(arg0, s16 *, 0xD8) = 0;
    M2C_FIELD(arg0, s16 *, 0xDA) = 0;
    M2C_FIELD(arg0, s16 *, 0xDC) = 0;
    M2C_FIELD(arg0, s16 *, 0xDE) = 0x1F;
    M2C_FIELD(arg0, s16 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = arg1;
    var_r0                       = func_0207b068(0x50);
    if (var_r0 != 0) {
        var_r0 = func_020281d0(var_r0, data_020be4b4);
    }
    M2C_FIELD(arg0, s32 *, 0xE4) = var_r0;
    func_02019724(arg0);
    return arg0;
}
