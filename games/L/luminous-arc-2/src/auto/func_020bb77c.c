#include "m2c.h"

M2C_UNK func_020baf54(void *, M2C_UNK);             /* extern */
M2C_UNK func_020bb7cc();                            /* extern */
M2C_UNK func_020bd67c();                            /* extern */
M2C_UNK func_020bd9bc(void *);                      /* extern */
M2C_UNK func_020be04c(void *);                      /* extern */

void func_020bb77c(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC) >= 7) {
            return;
        }
        func_020bb7cc(arg0);
        func_020bd9bc(arg0);
        func_020baf54(arg0, 0);
        func_020be04c(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 6;
    func_020bd67c(arg0);
}
