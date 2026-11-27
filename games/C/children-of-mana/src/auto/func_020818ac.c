/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020af550(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02100914;
extern M2C_UNK data_02100c0c;

void func_020818ac(void *arg0) {
    func_0200e8c8(&data_02100c0c, &data_02100914);
    func_020af550(M2C_FIELD(arg0, s32 *, 0x300), 0x14);
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0x1E;
}
