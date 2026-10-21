/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b7f60(M2C_UNK);

void func_020bc018(s32 arg0) {
    s32 temp_r0;

    if (arg0 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if ((temp_r0 != 0) && !(M2C_FIELD(arg0, s32 *, 0x10) & 2)) {
        func_020b7f60(temp_r0);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) | 0x8000);
    if (!(M2C_FIELD(arg0, s32 *, 0x10) & 1)) {
        return;
    }
    func_020b7f60(arg0);
}
