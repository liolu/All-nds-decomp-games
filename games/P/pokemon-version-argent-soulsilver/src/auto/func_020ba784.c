/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u16 data_021109fc;
extern M2C_UNK data_021d94f8;

void func_020ba784(void) {
    s32 temp_r3;
    s32 var_r0;

    if ((s32) M2C_FIELD(&data_021d94f8, volatile s32 *, 0xC) <= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return;
    }
    temp_r3                                        = M2C_FIELD(&data_021d94f8, volatile s32 *, 0xC) - 1;
    M2C_FIELD(&data_021d94f8, volatile s32 *, 0xC) = temp_r3;
    if ((s32) data_021109fc > temp_r3) {
        data_021109fc = 0xFFFE;
    }
}
