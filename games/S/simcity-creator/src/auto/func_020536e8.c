#include "m2c.h"

M2C_UNK func_0200675c();                         /* extern */
s32 func_0200c608();       /* extern */
M2C_UNK func_0201c5dc();                         /* extern */
s32 func_0201c658();                             /* extern */
s32 func_0205393c();                         /* extern */
M2C_UNK func_020b1090();                         /* extern */
s32 func_020b1200();                             /* extern */

void func_020536e8(void **arg0, s32 arg1) {
    s32 var_r0;

    do {
    loop_1:
        func_0200675c();
        func_0201c5dc(M2C_FIELD(*arg0, s32 *, 0xBB5C));
        func_020b1090(M2C_FIELD(*arg0, s32 *, 0xBB58));
        if (func_020b1200(M2C_FIELD(*arg0, s32 *, 0xBB58)) != 0) {
            goto loop_1;
        }
    } while (arg1 & func_0201c658(M2C_FIELD(*arg0, s32 *, 0xBB5C)));
loop_4:
    var_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (var_r0 != 0) {
        var_r0 = func_0205393c(arg0);
        if (var_r0 != 0) {
            var_r0 = func_0200c608(0xC, 0, 0);
        }
    }
    func_0200675c(var_r0);
    func_0201c5dc(M2C_FIELD(*arg0, s32 *, 0xBB5C));
    func_020b1090(M2C_FIELD(*arg0, s32 *, 0xBB58));
    if (func_020b1200(M2C_FIELD(*arg0, s32 *, 0xBB58)) != 0) {
        return;
    }
    if (arg1 & func_0201c658(M2C_FIELD(*arg0, s32 *, 0xBB5C))) {
        return;
    }
    goto loop_4;
}
