#include "m2c.h"

u32 func_0201b47c(s32);                             /* extern */
s32 func_0201b6f4(s32, s32, u32);                   /* extern */
M2C_UNK func_020a8890(void *);                      /* extern */
M2C_UNK func_020a8fc8(void *, s32);                 /* extern */
extern s32 data_0212d94c;
extern s32 data_02173c20;

void func_020a8088(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r5 > 0) {
        temp_r6 = data_0212d94c;
        if ((u32) temp_r5 > func_0201b47c(temp_r6)) {
            temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x7C);
            temp_r7   = data_0212d94c;
            if (func_0201b6f4(temp_r5_2, temp_r7, func_0201b47c(temp_r7)) == 0) {
                func_020a8fc8(arg0, temp_r5_2 + func_0201b47c(temp_r6));
                M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 5, data_02173c20,
                                                                               M2C_FIELD(arg0, s32 *, 0x494));
            }
        }
    }
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 4, data_02173c20, M2C_FIELD(arg0, s32 *, 0x494));
    func_020a8890(arg0);
}
