#include "m2c.h"

M2C_UNK func_0200509c(void *);                      /* extern */
M2C_UNK func_020058a0(void *);                      /* extern */
M2C_UNK func_02005924(void *);                      /* extern */

void func_02081078(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1000) != 0xFF) {
        return;
    }
    func_020058a0(arg0 + 0x1BF8);
    M2C_FIELD(arg0, s32 *, 0x1C10) = 1;
    func_02005924(arg0 + 0x1BF8);
    if (M2C_FIELD(arg0, s32 *, 0x1BA4) == 0) {
        return;
    }
    func_0200509c(arg0 + 0x1B38);
}
