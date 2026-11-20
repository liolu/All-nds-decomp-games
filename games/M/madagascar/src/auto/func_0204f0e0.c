/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204f308();                            /* extern */
extern M2C_UNK func_0204ee80;
extern M2C_UNK func_0204f044;

void func_0204f0e0(void *arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x1A8);
    if (arg1 == 0) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), s32 *, 8) == 0) {
            M2C_FIELD(temp_r4, M2C_UNK **, 4) = &func_0204f044;
        } else {
            M2C_FIELD(temp_r4, M2C_UNK **, 4) = &func_0204ee80;
            func_0204f308(arg0);
            M2C_FIELD(temp_r4, s32 *, 0x28) = 0;
            M2C_FIELD(temp_r4, s32 *, 0x2C) = 0;
            M2C_FIELD(temp_r4, s32 *, 0x34) = 0;
        }
        M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 4;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0)(arg0);
}
