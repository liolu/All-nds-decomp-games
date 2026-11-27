/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_020faf0c;

void *func_020140d8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020faf0c;
    M2C_FIELD(arg0, s32 *, 0x404)  = 0x64;
    func_02001cc8(arg0 + 4, 0, 0x400);
    return arg0;
}
