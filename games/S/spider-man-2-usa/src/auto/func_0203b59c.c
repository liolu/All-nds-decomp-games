/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201e054();                            /* extern */
extern M2C_UNK data_021244e4;

void *func_0203b59c(void *arg0, s32 arg1) {
    func_0201e054();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021244e4;
    M2C_FIELD(arg0, s32 *, 0x34)   = arg1;
    return arg0;
}
