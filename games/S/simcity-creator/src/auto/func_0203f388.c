#include "m2c.h"

s32 func_0201c650();                                /* extern */
s32 func_020b1200();                                /* extern */
M2C_UNK func_ov015_02171914(M2C_UNK);               /* extern */
M2C_UNK func_ov015_02171924(M2C_UNK);               /* extern */

void func_0203f388(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x74) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 5) {
        return;
    }
    func_ov015_02171914(arg1);
    if (func_020b1200() == 0) {
        func_ov015_02171924(arg1);
        if (func_0201c650() == 0) {
            return;
        }
    }
    M2C_FIELD(arg0, s32 *, 4) = 0x1E;
}
