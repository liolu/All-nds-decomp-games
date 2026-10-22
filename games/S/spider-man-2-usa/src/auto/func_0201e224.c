/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201e318(M2C_UNK);                     /* extern */
M2C_UNK func_0201e51c();                            /* extern */
extern M2C_UNK data_0215b3d4;

void func_0201e224(M2C_UNK arg0, s32 arg1) {
    M2C_FIELD(&data_0215b3d4, s32 *, 0x54) = arg1;
    func_0201e51c();
    func_0201e318(arg0);
}
