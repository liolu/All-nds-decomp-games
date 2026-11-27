#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(s32, s32);                    /* extern */
M2C_UNK _Z31InvalidateInstructionCacheRangePKvj(s32, s32);                    /* extern */
M2C_UNK func_020d4994(s32, M2C_UNK, s32);           /* extern */

void func_020d8764(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = temp_r5 + M2C_FIELD(arg0, s32 *, 0xC);
    _Z31InvalidateInstructionCacheRangePKvj(temp_r4, temp_r6);
    _Z24InvalidateDataCacheRangePKvj(temp_r4, temp_r6);
    func_020d4994(temp_r4 + temp_r5, 0, temp_r6 - temp_r5);
}
