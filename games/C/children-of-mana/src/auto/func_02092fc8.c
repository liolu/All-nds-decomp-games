/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02042430();                            /* extern */
extern M2C_UNK data_02102ba8;

void *func_02092fc8(void *arg0) {
    func_02042430();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02102ba8;
    M2C_FIELD(arg0, s32 *, 0x214)  = 0;
    M2C_FIELD(arg0, s32 *, 0x218)  = 0;
    M2C_FIELD(arg0, s32 *, 0x21C)  = 0;
    M2C_FIELD(arg0, s16 *, 0x220)  = -1;
    M2C_FIELD(arg0, s16 *, 0x222)  = -1;
    return arg0;
}
