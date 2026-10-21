#include "m2c.h"

M2C_UNK func_02037024(s32);                         /* extern */
M2C_UNK func_0203732c(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020373e4(void *);                      /* extern */
extern M2C_UNK data_0215dabc;

void func_02036fc8(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_0215dabc, s32 *, 0x1C) != 0) {
        func_0203732c(arg0, func_02037024);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020373e4(arg0);
        return;
    }
    func_02037024(arg1);
}
