#include "m2c.h"

s32 func_020536c8(s32);                             /* extern */
s32 func_020536d8(s32);                             /* extern */
s32 func_0205382c(s32);                             /* extern */
M2C_UNK func_0206505c(s32, void *);                 /* extern */
M2C_UNK func_02065dec(s32);                         /* extern */
M2C_UNK func_02072894(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b4f18(s32, s32, s32, s32);          /* extern */
M2C_UNK func_020b5064(s32, s32, s32);               /* extern */
s32 func_020b70cc(s32);                             /* extern */
M2C_UNK func_020b7588(s32);                         /* extern */
M2C_UNK func_020b8840(s32, s32);                    /* extern */

void func_0206a038(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r4 = func_0205382c(M2C_FIELD(arg0, s32 *, 0x2C));
    func_02072894(M2C_FIELD(arg0, s32 *, 0x1C), 0);
    if (temp_r4 != 0) {
        temp_r4_2 = func_020536d8(M2C_FIELD(arg0, s32 *, 0x2C));
        func_020b4f18(M2C_FIELD(arg0, s32 *, 0xB4), M2C_FIELD(arg0, s32 *, 0xB0), temp_r4_2,
                      func_020536c8(M2C_FIELD(arg0, s32 *, 0x2C)));
        func_020b8840(M2C_FIELD(arg0, s32 *, 0xB0), func_020b70cc(M2C_FIELD(arg0, s32 *, 0xB4)));
    }
    func_020b7588(M2C_FIELD(arg0, s32 *, 0xB0));
    func_020b5064(M2C_FIELD(arg0, s32 *, 0xB4), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xB0));
    func_0206505c(M2C_FIELD(arg0, s32 *, 0xA0), arg0);
    func_02065dec(M2C_FIELD(arg0, s32 *, 0xA0));
}
