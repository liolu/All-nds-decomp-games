#include "m2c.h"

M2C_UNK func_020913a8(u16, M2C_UNK);                /* extern */
M2C_UNK func_020914bc(void *);                      /* extern */
extern M2C_UNK data_020d8104;
extern M2C_UNK data_020e759c;
extern u8 data_020e8f50;

void func_020914e4(void *arg0, u8 arg1) {
    s32 temp_r0;
    u8 var_r4;

    var_r4 = arg1;
    if (data_020e8f50 != 0) {
        var_r4 = ((s8 *) &data_020d8104)[var_r4];
    }
    if (M2C_FIELD(arg0, u16 *, 0xC) != var_r4) {
        func_020914bc(arg0);
        M2C_FIELD(arg0, u16 *, 0xC) = (u16) var_r4;
        func_020913a8((u16) var_r4, 0);
    }
    temp_r0                      = (var_r4 * 0x38) + (s32) &data_020e759c;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r0 + 0x1C);
    M2C_FIELD(arg0, s16 *, 0xE)  = (s16) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18), u8 *, 0xE);
}
