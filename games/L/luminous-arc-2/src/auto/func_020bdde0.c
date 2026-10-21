#include "m2c.h"

M2C_UNK func_020aa020(s32);                         /* extern */
M2C_UNK func_020aa520(s32);                         /* extern */
M2C_UNK func_020aa89c(s32);                         /* extern */
M2C_UNK func_020aadb8();                            /* extern */
M2C_UNK func_020ab30c(void *);                      /* extern */

void func_020bdde0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        return;
    }
    func_020aa89c(M2C_FIELD(arg0, s32 *, 0));
    func_020aa520(M2C_FIELD(arg0, s32 *, 0xC));
    func_020aa020(M2C_FIELD(arg0, s32 *, 0x10));
    func_020ab30c(arg0);
    func_020aadb8();
}
