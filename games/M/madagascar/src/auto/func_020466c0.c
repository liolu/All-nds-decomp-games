/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
M2C_UNK func_0203922c();                            /* extern */
extern M2C_UNK data_0207f6fc;

void func_020466c0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30C) = (s32) M2C_FIELD(arg0, s32 *, 0x1E0);
    func_0203922c();
    func_02002720(&data_0207f6fc);
}
