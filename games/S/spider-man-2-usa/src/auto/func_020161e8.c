/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035d7c();                            /* extern */
extern M2C_UNK data_0210c314;

void *func_020161e8(void *arg0) {
    func_02035d7c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210c314;
    M2C_FIELD(arg0, s32 *, 0x30)   = 0;
    M2C_FIELD(arg0, s16 *, 0x34)   = 0;
    return arg0;
}
