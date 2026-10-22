/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002b64(void *, M2C_UNK);             /* extern */
M2C_UNK func_02002bc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02002bf4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02002c1c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0204c8cc(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0204cd18();                                /* extern */
extern M2C_UNK data_02087074;

void func_02003774(void *arg0) {
    func_02002c1c(arg0, 0xD, 1, 0);
    func_02002bf4(arg0, 0, 0);
    func_02002bc8(arg0, 0, 0);
    func_02002b64(arg0, 4);
    M2C_FIELD(arg0, s32 *, 0x370) = 0x1A;
    func_0204c8cc(func_0204cd18(), &data_02087074, 0);
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x78;
}
