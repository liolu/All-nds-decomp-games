#include "m2c.h"

M2C_UNK func_020aa020();                            /* extern */
M2C_UNK func_020ab30c();                      /* extern */

void func_020bb828(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        func_020ab30c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        func_020ab30c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        func_020ab30c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        func_020aa020();
    }
    if (M2C_FIELD(arg0, s32 *, 0x60) != 0) {
        func_020aa020();
    }
    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        func_020aa020();
    }
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        func_020aa020();
    }
    func_020ab30c(arg0);
}
