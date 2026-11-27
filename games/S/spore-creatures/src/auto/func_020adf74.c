#include "m2c.h"

M2C_UNK func_020ae100();                            /* extern */
M2C_UNK func_020ae388(void *);                      /* extern */

void func_020adf74(void *arg0) {
    func_020ae100();
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_020ae388(arg0 + 0x14);
}
