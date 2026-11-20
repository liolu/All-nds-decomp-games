#include "m2c.h"

M2C_UNK func_02025d94();                            /* extern */
M2C_UNK func_02025f6c();                            /* extern */
M2C_UNK func_02026134();                            /* extern */
M2C_UNK func_020262d4();                            /* extern */
M2C_UNK func_02026478(void *);                      /* extern */

void func_02024060(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        func_02025d94(arg0);
    } else if (M2C_FIELD(arg0, s32 *, 0xB8) != 0) {
        func_02025f6c(arg0);
    } else if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        func_02026134(arg0);
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    } else if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        func_020262d4(arg0);
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x90) == 0) {
        return;
    }
    func_02026478(arg0);
}
