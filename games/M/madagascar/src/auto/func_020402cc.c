/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203c9cc(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0203d1c4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203d22c(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020bc0f0;

void func_020402cc(void *arg0) {
    func_0203d22c(arg0, 0x1C);
    func_0203d1c4(arg0, 0x1C, 0);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x1E;
    func_0203c9cc(arg0, &data_020bc0f0);
}
