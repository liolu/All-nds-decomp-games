/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010538(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02093e7c();                            /* extern */
extern M2C_UNK data_020f9dc4;
extern M2C_UNK data_02105620;

void *func_020a0370(void *arg0, s32 arg1, s32 arg2) {
    func_02093e7c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02105620;
    M2C_FIELD(arg0, s32 *, 0x38)   = 1;
    M2C_FIELD(arg0, s32 *, 0x3C)   = arg1;
    M2C_FIELD(arg0, s32 *, 0x40)   = -1;
    M2C_FIELD(arg0, s32 *, 0x44)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = (s32) * ((M2C_UNK *) ((s8 *) &data_020f9dc4 + (arg1 * 4)));
    M2C_FIELD(arg0, s32 *, 0x4C)   = -1;
    M2C_FIELD(arg0, s32 *, 0x50)   = arg2;
    func_02010538(arg0 + 0x60, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s8 *, 0x78)  = 1;
    M2C_FIELD(arg0, s8 *, 0x79)  = 0;
    M2C_FIELD(arg0, s8 *, 0x7A)  = 0;
    M2C_FIELD(arg0, s8 *, 0x7B)  = 0;
    return arg0;
}
