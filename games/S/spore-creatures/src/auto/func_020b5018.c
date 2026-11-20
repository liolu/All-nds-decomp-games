#include "m2c.h"

M2C_UNK func_020b5074(s32);                         /* extern */
M2C_UNK func_020b55d0(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020b5688(void *);                      /* extern */
extern M2C_UNK data_020f1950;

void func_020b5018(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_020f1950, s32 *, 0x1C) != 0) {
        func_020b55d0(arg0, func_020b5074);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020b5688(arg0);
        return;
    }
    func_020b5074(arg1);
}
