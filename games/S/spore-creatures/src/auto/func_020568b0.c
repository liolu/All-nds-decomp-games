#include "m2c.h"

M2C_UNK func_02056924();                            /* extern */
M2C_UNK func_020a334c(void *);                      /* extern */

void func_020568b0(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x14) == 0xFFFF) {
        return;
    }
    func_02056924(arg0);
    func_020a334c(arg0 + 4);
}
