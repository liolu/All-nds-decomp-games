#include "m2c.h"

M2C_UNK func_02063f80(M2C_UNK);                     /* extern */
M2C_UNK func_ov001_02109984(M2C_UNK, s32);          /* extern */
s32 func_ov001_0210998c();                          /* extern */
M2C_UNK func_ov001_02109a88(M2C_UNK);               /* extern */
M2C_UNK func_ov001_02109cac(M2C_UNK);               /* extern */

void func_02063ebc(M2C_UNK arg0) {
    if (func_ov001_0210998c() != 0) {
        func_ov001_02109cac(arg0);
        return;
    }
    func_ov001_02109984(arg0, 0x59535050);
    func_ov001_02109a88(arg0);
    func_ov001_02109cac(arg0);
    func_02063f80(arg0);
}
