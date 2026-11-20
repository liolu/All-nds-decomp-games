/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_020522b4(void *, s32);
M2C_UNK func_0205a3bc(M2C_UNK);
void func_0205a438(void *);
void func_0205a4d4(s32, void *);
void func_0205a880(s32 **);

extern M2C_UNK data_020da078;

s32 func_0205a668(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;

    temp_r6 = (arg1 * 0x1C) + (s32) &data_020da078;
    if (*(M2C_UNK *) arg0 != 0) {
        func_0205a880((s32 **) arg0);
    }
    if ((u32) M2C_FIELD(temp_r6, u16 *, 8) >= (u32) M2C_FIELD(temp_r6, u32 *, 0x18)) {
        temp_r0_2 = func_020522b4((void *) temp_r6, 0);
        if (temp_r0_2 == 0) {
            return 0;
        }
        if (arg2 < (s32) M2C_FIELD(temp_r0_2, u8 *, 0x3D)) {
            return 0;
        }
        func_0205a438((void *) temp_r0_2);
        goto block_8;
    }
block_8:
    temp_r0 = func_0205a3bc(arg2);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0205a4d4(temp_r6, (void *) temp_r0);
    *(M2C_UNK *) temp_r0 = arg0;
    *(M2C_UNK *) arg0    = temp_r0;
    return temp_r0;
}
