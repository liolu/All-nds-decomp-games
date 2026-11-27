/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02078ee8();                            /* extern */
extern M2C_UNK data_020ff4bc;

void *func_0207a00c(void *arg0) {
    func_02078ee8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ff4bc;
    M2C_FIELD(arg0, s32 *, 0x1C0)  = 0;
    return arg0;
}
