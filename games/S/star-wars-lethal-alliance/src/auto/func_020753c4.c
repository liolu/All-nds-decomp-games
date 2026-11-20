/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02075370(s32);                             /* extern */
extern M2C_UNK data_020ea6a0;

void *func_020753c4(s32 arg0) {
    s32 temp_r0_2;
    void *temp_r0;

    if (func_02075370(1 << arg0) == 0) {
        return NULL;
    }
    temp_r0_2                                          = arg0 * 0x14;
    *((M2C_UNK *) ((s8 *) &data_020ea6a0 + temp_r0_2)) = arg0;
    temp_r0                                            = (M2C_UNK *) ((s8 *) &data_020ea6a0 + temp_r0_2);
    M2C_FIELD(temp_r0, s32 *, 8)                       = 0;
    return temp_r0;
}
