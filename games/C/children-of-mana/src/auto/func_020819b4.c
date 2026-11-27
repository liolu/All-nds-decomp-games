/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020aca84(s32);                         /* extern */
extern M2C_UNK data_02100678;
extern M2C_UNK data_02100c70;

void func_020819b4(void *arg0) {
    func_0200e8c8(&data_02100c70, &data_02100678);
    func_020aca84(M2C_FIELD(arg0, s32 *, 0x300));
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0x1C;
}
