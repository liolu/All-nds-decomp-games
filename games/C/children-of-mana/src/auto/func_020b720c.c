/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028e30(void *, M2C_UNK);             /* extern */
M2C_UNK func_02077434(void *);                      /* extern */
M2C_UNK func_020775e0(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020776bc(void *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_020c3038();                                /* extern */
extern M2C_UNK data_02107c18;
extern M2C_UNK data_02107c1a;

s32 func_020b720c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        return 1;
    }
    func_02028e30(arg0 + 0x104, 2);
    func_020776bc(arg0 + 0x104, (M2C_FIELD(arg0, s32 *, 0x10) * 0xA6) + func_020c3038() + 0x70, 0, 1);
    func_020775e0(arg0 + 0x104, (M2C_FIELD(arg0, s32 *, 0x10) * 0xA6) + func_020c3038() + 0x80, 0, 1);
    func_02077434(arg0 + 0x104);
    M2C_FIELD(arg0, s32 *, 0x148)      = 8;
    M2C_FIELD(arg0, s32 *, 0x14C)      = 0x1000;
    M2C_FIELD(arg0, s8 *, 0x154)       = 0;
    M2C_FIELD(arg0, s8 *, 0x155)       = (s8) ((s8 *) &data_02107c1a)[M2C_FIELD(arg0, s8 *, 0x154)];
    M2C_FIELD(arg0, M2C_UNK **, 0x158) = &data_02107c18;
    M2C_FIELD(arg0, s32 *, 0x160)      = 1;
    M2C_FIELD(arg0, u8 *, 0xC)         = 1U;
    return 1;
}
