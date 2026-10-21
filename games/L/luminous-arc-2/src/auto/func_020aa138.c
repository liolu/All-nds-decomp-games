#include "m2c.h"

s32 func_02021c68(s32, s32);                        /* extern */
M2C_UNK func_020aa0b4(void *, M2C_UNK, s32);        /* extern */
s32 func_020aa418(M2C_UNK, s32, s32, s32, s32, M2C_UNK *); /* extern */

void func_020aa138(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK sp8;

    func_020aa0b4(arg0, arg1,
                  func_02021c68(func_020aa418(arg1, M2C_FIELD(arg0, volatile s32 *, 0x14), M2C_FIELD(arg0, volatile s32 *, 0),
                                              M2C_FIELD(arg0, volatile s32 *, 8), arg2, &sp8) -
                                    M2C_FIELD(arg0, volatile s32 *, 0x14),
                                M2C_FIELD(arg0, volatile s32 *, 8)));
}
