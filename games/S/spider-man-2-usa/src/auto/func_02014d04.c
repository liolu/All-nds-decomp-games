/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02014cd8(M2C_UNK);
void func_02015044(M2C_UNK);

s32 func_02014d04(s32 arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4) + 1;
    if (temp_r4 < (s32) M2C_FIELD((void *) func_02014cd8(arg0), s32 *, 8)) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r4;
    }
    func_02015044(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) == temp_r4) {
        return 1;
    }
    return 0;
}
