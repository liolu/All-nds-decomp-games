/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f35c();                            /* extern */
extern M2C_UNK data_0210d1ac;
extern void *data_0212e824;

void *func_020dd854(void *arg0) {
    func_0200f35c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210d1ac;
    M2C_FIELD(arg0, s32 *, 0x20)   = 1;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    data_0212e824                  = arg0;
    return arg0;
}
