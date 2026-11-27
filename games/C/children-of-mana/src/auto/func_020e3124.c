/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e2998(void *, void *);              /* extern */
extern M2C_UNK data_0210e2e0;

void *func_020e3124(void *arg0) {
    s32 var_r5;
    void *var_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210e2e0;
    var_r5                         = 0;
    M2C_FIELD(arg0, s32 *, 0x188)  = 0;
    M2C_FIELD(arg0, s32 *, 0x18C)  = -1;
    M2C_FIELD(arg0, s32 *, 0x190)  = 0;
    M2C_FIELD(arg0, s32 *, 0x194)  = 0;
    M2C_FIELD(arg0, s32 *, 0x198)  = 0;
    M2C_FIELD(arg0, s32 *, 0x19C)  = 0;
    M2C_FIELD(arg0, s16 *, 0x1A0)  = -1;
    M2C_FIELD(arg0, s16 *, 0x1A2)  = -1;
    M2C_FIELD(arg0, s16 *, 0x1A4)  = -1;
    M2C_FIELD(arg0, s16 *, 0x1A6)  = -1;
    M2C_FIELD(arg0, s16 *, 0x1A8)  = -1;
    M2C_FIELD(arg0, s32 *, 0x1AC)  = -1;
    M2C_FIELD(arg0, s32 *, 0x1B0)  = -1;
    M2C_FIELD(arg0, s16 *, 0x1B4)  = -1;
    M2C_FIELD(arg0, s16 *, 0x1B6)  = -1;
    M2C_FIELD(arg0, s8 *, 0x1B8)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1B9)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1BC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0)  = 0;
    M2C_FIELD(arg0, s8 *, 0x1C4)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1C5)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1C6)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1C7)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C8)  = 0;
    M2C_FIELD(arg0, s32 *, 0x228)  = 0;
    M2C_FIELD(arg0, s32 *, 0x22C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x230)  = 0;
    M2C_FIELD(arg0, s32 *, 0x234)  = 0;
    M2C_FIELD(arg0, s32 *, 0x238)  = 0;
    M2C_FIELD(arg0, s32 *, 0x23C)  = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x240)  = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x244)  = 0;
    M2C_FIELD(arg0, s32 *, 0x248)  = 0;
    M2C_FIELD(arg0, s8 *, 0x250)   = 0;
    M2C_FIELD(arg0, s8 *, 0x251)   = 0;
    var_r4                         = arg0 + 8;
    do {
        func_020e2998(arg0, var_r4);
        var_r5 += 1;
        var_r4 += 0x30;
    } while (var_r5 < 8);
    return arg0;
}
