#include "m2c.h"

M2C_UNK func_02049440(s32);                         /* extern */
s32 func_020962f0();                                /* extern */
extern s32 data_020efd9c;
extern void **data_020efdc0;

void func_02095e94(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r1;

    if (func_020962f0() != 0) {
        return;
    }
    temp_r1 = arg0 + 4 + (arg1 * 0x10);
    if (((u32) (M2C_FIELD(temp_r1, s32 *, 8) << 0x1F) >> 0x1F) != 0) {
        func_02049440(data_020efd9c);
        return;
    }
    M2C_FIELD(*data_020efdc0, M2C_UNK(**)(void **, s32, M2C_UNK), 0x2C)(data_020efdc0, M2C_FIELD(temp_r1, s32 *, 0xC), arg2);
}
