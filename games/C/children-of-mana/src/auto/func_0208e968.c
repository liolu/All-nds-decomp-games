/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208dfb4();                            /* extern */
extern M2C_UNK data_02102744;

void *func_0208e968(void *arg0) {
    func_0208dfb4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02102744;
    M2C_FIELD(arg0, s32 *, 0x1DC)  = 0;
    return arg0;
}
