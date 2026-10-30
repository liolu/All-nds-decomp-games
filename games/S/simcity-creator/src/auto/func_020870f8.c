#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_02086f98(void *);                      /* extern */
M2C_UNK func_0208982c(s32);                         /* extern */
M2C_UNK func_02089838();                            /* extern */
M2C_UNK func_0208e5a4(void *);                      /* extern */

void func_020870f8(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_02089838();
        temp_r4 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_r4 != 0) {
            func_0208982c(temp_r4);
            func_0203491c(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    func_0208e5a4(arg0 + 0xC);
    func_0208e5a4(arg0 + 0x20);
    func_02086f98(arg0 + 0x34);
}
