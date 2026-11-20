/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
M2C_UNK func_0203d1f8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203d22c(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_0207f714;

void func_0203f730(void *arg0) {
    func_0203d1f8(arg0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x16;
    func_0203d22c(arg0, 0x12);
    func_02002720(&data_0207f714);
}
