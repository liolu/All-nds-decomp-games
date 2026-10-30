#include "m2c.h"

M2C_UNK func_0208fd38(s32, s32, s32, s32);          /* extern */

void func_020906f4(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) != arg1) {
        M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        M2C_FIELD(arg0, s32 *, 8)    = arg1;
    }
    func_0208fd38(M2C_FIELD(arg0, s32 *, 0x38), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x10),
                  M2C_FIELD(arg0, s32 *, 8));
}
