#include "m2c.h"

M2C_UNK func_0208dc40(s32, M2C_UNK, s32);           /* extern */

void func_0208c7c0(void *arg0, s32 arg1, s32 arg2) {
    func_0208dc40(M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x20), 0xE,
                  (arg2 * M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x14)) + 0xA);
}
