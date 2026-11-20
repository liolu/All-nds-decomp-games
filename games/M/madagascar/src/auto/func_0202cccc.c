/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020d08a4;
extern s32 data_020d08a8;
extern s32 data_020d08ac;
extern s32 data_020d08b0;
extern s32 data_020d08b4;
extern s32 data_020d08b8;

void func_0202cccc(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if ((s32) data_020d08b4 < (s32) data_020d08b0) {
        temp_r0       = data_020d08b4 + data_020d08ac;
        data_020d08b4 = temp_r0;
        if (temp_r0 > (s32) data_020d08b0) {
            data_020d08b4 = data_020d08b0;
        }
    } else if ((s32) data_020d08b4 > (s32) data_020d08b0) {
        temp_r0_2     = data_020d08b4 - data_020d08ac;
        data_020d08b4 = temp_r0_2;
        if (temp_r0_2 < (s32) data_020d08b0) {
            data_020d08b4 = data_020d08b0;
        }
    }
    if ((s32) data_020d08a8 < (s32) data_020d08a4) {
        temp_r0_3     = data_020d08a8 + data_020d08b8;
        data_020d08a8 = temp_r0_3;
        if (temp_r0_3 > (s32) data_020d08a4) {
            data_020d08a8 = data_020d08a4;
        }
        return;
    }
    if ((s32) data_020d08a8 <= (s32) data_020d08a4) {
        return;
    }
    temp_r0_4     = data_020d08a8 - data_020d08b8;
    data_020d08a8 = temp_r0_4;
    if (temp_r0_4 < (s32) data_020d08a4) {
        data_020d08a8 = data_020d08a4;
    }
}
