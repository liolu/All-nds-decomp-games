#include "m2c.h"

M2C_UNK func_020d1f34(s32);                         /* extern */
void *func_020a5520();                              /* extern */
M2C_UNK func_020a5698(void *, M2C_UNK);             /* extern */
M2C_UNK func_020a56ac(void *, M2C_UNK);             /* extern */
M2C_UNK func_020a56c0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020a5e58(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_r1;
    void *temp_r0;

    temp_r0 = func_020a5520();
    if (temp_r0 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(temp_r0, u8 *, 8);
    switch (temp_r1) {                              /* irregular */
        case 7:
            M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x24) + 1);
            func_020a5698(temp_r0, 0);
            M2C_FIELD(temp_r0, u8 *, 8) = 9U;
            return;
        case 8:
            M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x24) + 1);
            func_020a5698(temp_r0, 0);
            M2C_FIELD(temp_r0, u8 *, 8) = 0U;
            if (M2C_FIELD(temp_r0, s32 *, 4) != 2) {
                return;
            }
            M2C_FIELD(temp_r0, s32 *, 4) = 0;
            func_020d1f34(M2C_FIELD(temp_r0, s32 *, 0));
            return;
        case 4:
            M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x24) + 1);
            func_020a56ac(temp_r0, 0);
            M2C_FIELD(temp_r0, u8 *, 8) = 6U;
            return;
        default:
            func_020a56c0(arg0, arg1, arg2, 0);
            return;
    }
}
