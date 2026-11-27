#include "m2c.h"

M2C_UNK func_020673d0();                            /* extern */

void func_0200f574(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x64) = -1;
    M2C_FIELD(arg0, s16 *, 0x66) = -1;
    M2C_FIELD(arg0, s16 *, 0x68) = -1;
    M2C_FIELD(arg0, s16 *, 0x6C) = -1;
    if (M2C_FIELD(arg0, s8 *, 0x6E) == -1) {
        return;
    }
    func_020673d0();
    M2C_FIELD(arg0, s8 *, 0x6E) = -1;
}
