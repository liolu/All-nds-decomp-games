#include "m2c.h"

s32 func_0200c608(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0200e7ec(s32);                             /* extern */
M2C_UNK func_0205369c(s32);                         /* extern */
s32 func_0205393c(s32);                             /* extern */
M2C_UNK func_02053958(s32);                         /* extern */
M2C_UNK func_020ae428();                            /* extern */
M2C_UNK func_020af078();                            /* extern */
M2C_UNK func_020b4d74();                            /* extern */
extern M2C_UNK data_02162de0;

void func_020af448(void) {
    s32 var_r0;

    var_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (var_r0 != 0) {
        var_r0 = func_0205393c(M2C_FIELD(&data_02162de0, s32 *, 0x10));
        if (var_r0 != 0) {
            var_r0 = func_0200c608(0xC, 0, 0);
        }
    }
    if (func_0200e7ec(var_r0) != 0) {
        func_02053958(M2C_FIELD(&data_02162de0, s32 *, 0x10));
        func_020b4d74();
    }
    func_0205369c(M2C_FIELD(&data_02162de0, s32 *, 0x10));
    func_020ae428();
    func_020af078();
}
