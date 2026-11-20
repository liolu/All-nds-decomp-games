/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02039944();                            /* extern */
extern M2C_UNK data_020c4c14;

void *func_02046b14(void *arg0) {
    func_02039944();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c4c14;
    M2C_FIELD(arg0, s32 *, 0x308)  = 0;
    return arg0;
}
