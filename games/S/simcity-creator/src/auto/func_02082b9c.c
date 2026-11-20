#include "m2c.h"

s32 func_0200c608(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0200e7ec(s32);                             /* extern */
M2C_UNK func_0205369c(s32);                         /* extern */
s32 func_0205393c(s32);                             /* extern */
M2C_UNK func_02053958(s32);                         /* extern */
M2C_UNK func_02082ad4();                            /* extern */
M2C_UNK func_020ae428();                            /* extern */
M2C_UNK func_020b4d74();                            /* extern */
extern M2C_UNK data_020dda3c;

void func_02082b9c(void) {
    s32 var_r0;

    var_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (var_r0 != 0) {
        var_r0 = func_0205393c(M2C_FIELD(&data_020dda3c, s32 *, 8));
        if (var_r0 != 0) {
            var_r0 = func_0200c608(0xC, 0, 0);
        }
    }
    if (func_0200e7ec(var_r0) != 0) {
        func_02053958(M2C_FIELD(&data_020dda3c, s32 *, 8));
        func_020b4d74();
    }
    func_0205369c(M2C_FIELD(&data_020dda3c, s32 *, 8));
    func_020ae428();
    func_02082ad4();
}
