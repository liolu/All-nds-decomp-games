/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bc13c(M2C_UNK, M2C_UNK);
M2C_UNK func_020bcb6c(M2C_UNK);
void func_020bcbe8(M2C_UNK);
void func_020bcc84(M2C_UNK, M2C_UNK);
void func_020bd274(M2C_UNK);

extern M2C_UNK data_020f54b0;

s32 func_020bce50(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;

    temp_r6 = (arg1 * 0x24) + (s32) &data_020f54b0;
    if (*(M2C_UNK *) arg0 != 0) {
        func_020bd274(arg0);
    }
    if ((u32) M2C_FIELD(temp_r6, u16 *, 8) >= (u32) M2C_FIELD(temp_r6, u32 *, 0x18)) {
        temp_r0_2 = func_020bc13c(temp_r6, 0);
        if (temp_r0_2 == 0) {
            return 0;
        }
        if (arg2 < (s32) M2C_FIELD(temp_r0_2, u8 *, 0x3D)) {
            return 0;
        }
        func_020bcbe8(temp_r0_2);
        goto block_8;
    }
block_8:
    temp_r0 = func_020bcb6c(arg2);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020bcc84(temp_r6, temp_r0);
    *(M2C_UNK *) temp_r0 = arg0;
    *(M2C_UNK *) arg0    = temp_r0;
    return temp_r0;
}
