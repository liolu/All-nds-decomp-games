#include "m2c.h"

M2C_UNK func_02004104(void *);                      /* extern */
M2C_UNK func_020042d8(void *);                      /* extern */
M2C_UNK func_0206c1c0(s32);                         /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */

void *func_0206bd64(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r4 != 0) {
        func_0206c1c0(temp_r4);
        func_020934a8(temp_r4);
    }
    func_020042d8(arg0 + 0x10);
    func_02004104(arg0 + 0x14);
    func_0208acbc(arg0 + 4);
    return arg0;
}
