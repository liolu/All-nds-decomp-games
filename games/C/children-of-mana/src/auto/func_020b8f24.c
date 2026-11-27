/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b9d74();                            /* extern */
extern M2C_UNK data_021083e0;

void *func_020b8f24(void *arg0) {
    func_020b9d74();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021083e0;
    M2C_FIELD(arg0, s32 *, 0x248)  = 0;
    return arg0;
}
