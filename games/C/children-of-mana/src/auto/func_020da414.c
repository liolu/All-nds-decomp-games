/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020aac90();                              /* extern */
M2C_UNK func_020d8ed0(void *);                      /* extern */
extern M2C_UNK data_0210cac8;

void *func_020da414(void *arg0) {
    u32 var_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210cac8;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = -1;
    M2C_FIELD(arg0, s32 *, 0x10)   = -1;
    func_020d8ed0(arg0 + 0x14);
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, u32 *, 0x1B4) = 0U;
    M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C4) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
    M2C_FIELD(arg0, s8 *, 0x1CD)  = 0;
    M2C_FIELD(arg0, u32 *, 0x1B4) = (u32) ((u32) (M2C_FIELD(func_020aac90(), u8 *, 0x431) << 0x1C) >> 0x1C);
    var_r0                        = M2C_FIELD(arg0, u32 *, 0x1B4);
    if ((s32) var_r0 < 1) {
        var_r0 = 1;
    } else if ((s32) var_r0 > 8) {
        var_r0 = 8;
    }
    M2C_FIELD(arg0, u32 *, 0x1B4) = var_r0;
    M2C_FIELD(arg0, u32 *, 0x1B4) = (u32) (M2C_FIELD(arg0, u32 *, 0x1B4) - 1);
    return arg0;
}
