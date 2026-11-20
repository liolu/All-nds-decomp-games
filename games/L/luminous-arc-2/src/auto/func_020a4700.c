#include "m2c.h"

M2C_UNK func_02058930(M2C_UNK);                     /* extern */
s32 func_02059794();                                /* extern */
extern M2C_UNK data_0217296c;

void func_020a4700(void *arg0) {
    if (M2C_FIELD(&data_0217296c, s32 *, 0xE80) != 0) {
        if (func_02059794() != 1) {
            return;
        }
        M2C_FIELD(&data_0217296c, s32 *, 0xE80) = 0;
        func_02058930(0xF);
        M2C_FIELD(arg0, s8 *, 0x77B) = 0xE;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x77B) = 0x20;
}
