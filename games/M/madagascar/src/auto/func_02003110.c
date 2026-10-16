/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207b040(s32);                         /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bce54;

void *func_02003110(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bce54;
    func_0207b040(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    return arg0;
}
