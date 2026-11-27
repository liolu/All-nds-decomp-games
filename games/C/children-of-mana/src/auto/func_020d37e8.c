/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bee74();                            /* extern */
extern M2C_UNK data_0210bc00;

void *func_020d37e8(void *arg0) {
    func_020bee74();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210bc00;
    M2C_FIELD(arg0, s32 *, 0xF8)   = 0;
    M2C_FIELD(arg0, s16 *, 0xFC)   = 0;
    return arg0;
}
