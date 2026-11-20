#include "m2c.h"

M2C_UNK func_02006c50(s32);                         /* extern */
s32 func_0200d384(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0200da74(M2C_UNK);                         /* extern */
s32 func_0200da94();                                /* extern */

void func_0200dc60(void) {
    func_02006c50(0x360000);
    if (func_0200da94() == 1) {
        return;
    }
    if (func_0200d384(2, 0) != 0) {
        do {
            func_02006c50(0xA3A47);
        } while (func_0200d384(2, 0) != 0);
    }
    if (func_0200da74(1) != 0) {
        return;
    }
    do {
        func_02006c50(0xA);
    } while (func_0200da74(1) == 0);
}
