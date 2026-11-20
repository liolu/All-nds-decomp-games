/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201a1ac(M2C_UNK, M2C_UNK);

extern s32 data_0215b3d4;

void func_02019698(s32 arg0, s32 arg1) {
    if ((arg1 == 0) && (M2C_FIELD(arg0, u8 *, 0x58) == 0)) {
        data_0215b3d4 = M2C_FIELD(arg0, s32 *, 0x54) + 1;
    } else {
        data_0215b3d4 = M2C_FIELD(arg0, s32 *, 0x54);
    }
    func_0201a1ac(arg0, arg1);
}
