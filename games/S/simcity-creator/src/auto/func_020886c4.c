#include "m2c.h"

M2C_UNK func_0206f7c4(s32, M2C_UNK *);              /* extern */
s32 func_0207039c(s32, u16, u16);                   /* extern */
M2C_UNK func_02088768(s32 *, u16, u16);             /* extern */
extern M2C_UNK data_020ceb9b;
extern M2C_UNK data_020ceb9c;
extern M2C_UNK data_020ceb9d;

void func_020886c4(s32 *arg0) {
    u16 var_r6;
    u16 var_r7;

    func_0206f7c4(((s8 *) arg0 + 0x50BC), &data_020ceb9b);
    func_0206f7c4(((s8 *) arg0 + 0x58C0), &data_020ceb9c);
    func_0206f7c4(((s8 *) arg0 + 0x60C4), &data_020ceb9d);
    var_r6 = 0;
    do {
        var_r7 = 0;
    loop_2:
        if (func_0207039c(*arg0, var_r6, var_r7) == 0) {
            func_02088768(arg0, var_r6, var_r7);
        }
        var_r7 += 1;
        if ((u32) var_r7 < 0x80U) {
            goto loop_2;
        }
        var_r6 += 1;
    } while ((u32) var_r6 < 0x80U);
}
