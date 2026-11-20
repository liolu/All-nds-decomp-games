/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004104(M2C_UNK);                     /* extern */
M2C_UNK func_0204c8cc(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0204cd18();                                /* extern */
extern M2C_UNK data_02086fe4;
extern s32 data_0215b3d4;

void func_0200443c(M2C_UNK arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 9) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 0xC) {
        return;
    }
    if ((data_0215b3d4 + 1) == 0xE) {
        func_0204c8cc(func_0204cd18(), &data_02086fe4, 0);
    }
    func_02004104(arg0);
}
