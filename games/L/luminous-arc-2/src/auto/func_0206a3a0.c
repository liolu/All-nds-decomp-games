#include "m2c.h"

M2C_UNK func_020074fc(M2C_UNK, M2C_UNK *, s32);     /* extern */
M2C_UNK func_0207aaf0(M2C_UNK);                     /* extern */
extern M2C_UNK data_02151534;
extern M2C_UNK data_0216bc68;
extern M2C_UNK data_02175a4c;

void func_0206a3a0(M2C_UNK arg0) {
    func_020074fc(0, &data_02175a4c, 0xF660);
    func_020074fc(0, &data_0216bc68, 0x18);
    M2C_FIELD(&data_02151534, s32 *, 0) = 0;
    M2C_FIELD(&data_02151534, s32 *, 4) = 0;
    func_0207aaf0(arg0);
}
