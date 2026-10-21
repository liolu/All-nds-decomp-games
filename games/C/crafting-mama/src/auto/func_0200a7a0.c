#include "m2c.h"

M2C_UNK func_02009828(void *);                      /* extern */
s32 func_02009ca4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02009e50();                            /* extern */
M2C_UNK func_020181e8(void *);                      /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */

void func_0200a7a0(void *arg0, s32 arg1) {
    s32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_r5, s32 *, 0xC) & 4) {
        temp_r4                         = func_02019d04();
        M2C_FIELD(temp_r5, s32 *, 0xC)  = (s32) (M2C_FIELD(temp_r5, s32 *, 0xC) | 8);
        M2C_FIELD(temp_r5, s32 *, 0x14) = arg1;
        func_020181e8(temp_r5 + 0x18);
        func_02019d18(temp_r4);
        return;
    }
    func_02009828(temp_r5);
    if (func_02009ca4(arg0, 1) == 0) {
        return;
    }
    func_02009e50();
}
