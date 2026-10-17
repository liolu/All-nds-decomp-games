/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e50(s32, M2C_UNK);                /* extern */
M2C_UNK func_02000e58(s32, M2C_UNK);                /* extern */
M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
M2C_UNK func_0203d0b0(void *);                      /* extern */
M2C_UNK func_0203d1c4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203d22c(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_0207f714;

void func_0203d160(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x17;
    func_0203d22c(arg0, 0x14);
    func_02000e50(M2C_FIELD(arg0, s32 *, 0x1BC) + 4, 0);
    func_02000e58(M2C_FIELD(arg0, s32 *, 0x1BC) + 4, 0x80);
    func_0203d1c4(arg0, 0x14, 0);
    func_02002720(&data_0207f714);
    func_0203d0b0(arg0);
}
