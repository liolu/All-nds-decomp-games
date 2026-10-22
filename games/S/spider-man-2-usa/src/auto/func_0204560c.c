/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02054544(s32, s32);                    /* extern */
extern s32 data_0215f8d4;
extern s32 data_0215f8d8;
extern s32 data_0215f8dc;
extern s32 data_0215f8e0;
extern s32 data_0215f8e4;
extern s32 data_0215f8e8;

void func_0204560c(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if ((s32) data_0215f8e4 < (s32) data_0215f8e0) {
        temp_r0       = data_0215f8e4 + data_0215f8dc;
        data_0215f8e4 = temp_r0;
        if (temp_r0 > (s32) data_0215f8e0) {
            data_0215f8e4 = data_0215f8e0;
        }
        func_02054544(0x0400006C, data_0215f8e4);
    } else if ((s32) data_0215f8e4 > (s32) data_0215f8e0) {
        temp_r0_2     = data_0215f8e4 - data_0215f8dc;
        data_0215f8e4 = temp_r0_2;
        if (temp_r0_2 < (s32) data_0215f8e0) {
            data_0215f8e4 = data_0215f8e0;
        }
        func_02054544(0x0400006C, data_0215f8e4);
    }
    if ((s32) data_0215f8d8 < (s32) data_0215f8d4) {
        temp_r0_3     = data_0215f8d8 + data_0215f8e8;
        data_0215f8d8 = temp_r0_3;
        if (temp_r0_3 > (s32) data_0215f8d4) {
            data_0215f8d8 = data_0215f8d4;
        }
        func_02054544(0x0400106C, data_0215f8d8);
        return;
    }
    if ((s32) data_0215f8d8 <= (s32) data_0215f8d4) {
        return;
    }
    temp_r0_4     = data_0215f8d8 - data_0215f8e8;
    data_0215f8d8 = temp_r0_4;
    if (temp_r0_4 < (s32) data_0215f8d4) {
        data_0215f8d8 = data_0215f8d4;
    }
    func_02054544(0x0400106C, data_0215f8d8);
}
