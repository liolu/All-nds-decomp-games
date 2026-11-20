#include "m2c.h"

M2C_UNK func_02004f74(s32);                         /* extern */
M2C_UNK func_020054dc(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020055ac(void *);                      /* extern */
extern M2C_UNK data_021478e0;

void func_02004f18(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_021478e0, s32 *, 0x1C) != 0) {
        func_020054dc(arg0, func_02004f74);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020055ac(arg0);
        return;
    }
    func_02004f74(arg1);
}
