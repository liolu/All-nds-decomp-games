#include "m2c.h"

M2C_UNK func_020b0018(s32, void *);                 /* extern */
M2C_UNK func_020b01c0(s32, void *);                 /* extern */
M2C_UNK func_020b01d4(s32, void *);                 /* extern */

void func_020adecc(void *arg0, void *arg1) {
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg1, u16 *, 4);
    if (M2C_FIELD(arg1, s16 *, 0x1E) != temp_r2) {
        M2C_FIELD(arg1, s16 *, 0x1E) = (s16) temp_r2;
        func_020b0018(M2C_FIELD(arg0, s32 *, 0x94), arg1 + 0x10);
    }
    M2C_FIELD(arg1, s16 *, 0x18) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg1, s16 *, 0x1A) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
    func_020b01c0(M2C_FIELD(arg0, s32 *, 0x94), arg1 + 0x10);
    func_020b01d4(M2C_FIELD(arg0, s32 *, 0x94), arg1 + 0x10);
}
