#include "m2c.h"

M2C_UNK func_0202120c(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_0205f888(s32, s32);                    /* extern */

void func_0207277c(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x130), s32 *, 8) != 3) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA4) == 0) {
        return;
    }
    func_0205f888(M2C_FIELD(arg0, s32 *, 0x134), M2C_FIELD(arg0, s32 *, 0x74));
    var_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    if (var_r0 & 1) {
        var_r0 += 1;
    }
    func_0202120c(-1, M2C_FIELD(arg0, s32 *, 0xB0), var_r0 * 2);
}
