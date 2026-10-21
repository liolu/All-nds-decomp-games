#include "m2c.h"

s32 func_0208f7b4();                                /* extern */
void *func_02090a40();                              /* extern */
s32 func_020bbc80(s32);                             /* extern */
s32 func_020be42c(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020bf718(s32, s32, u8, M2C_UNK *, M2C_UNK *, void *); /* extern */
M2C_UNK func_020a7550(s32, s32, u16, s32);          /* extern */
extern M2C_UNK func_020905d8;
extern M2C_UNK func_020905dc;

s32 func_0208b630(void *arg0) {
    s32 temp_r0;
    s32 var_r6;
    void *temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_r4 = func_02090a40();
        func_020a7550(M2C_FIELD(temp_r4, s32 *, 0xE4), func_020be42c(M2C_FIELD(arg0, s32 *, 4), 0, 0),
                      M2C_FIELD(arg0, u16 *, 2), M2C_FIELD(arg0, s32 *, 8));
        if (func_0208f7b4() != 0) {
            return 2;
        }
    }
    var_r6 = 0;
loop_4:
    temp_r0 = func_020bf718(func_020bbc80(*M2C_FIELD(func_02090a40(), s32 **, 4)), M2C_FIELD(arg0, s32 *, 8),
                            M2C_FIELD(arg0, u8 *, 0), &func_020905d8, &func_020905dc, arg0);
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (temp_r0 != 3) {
        return temp_r0;
    }
    var_r6 += 1;
    if (var_r6 >= 5) {
        return temp_r0;
    }
    goto loop_4;
}
