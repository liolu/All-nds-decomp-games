/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204d9ec(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_02080fb8;
extern M2C_UNK data_02124324;

void *func_020384f8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0204d9ec(arg0, &data_02080fb8);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02124324;
    M2C_FIELD(arg0, s32 *, 0x24)   = arg1;
    M2C_FIELD(arg0, s32 *, 0x28)   = arg3;
    return arg0;
}
