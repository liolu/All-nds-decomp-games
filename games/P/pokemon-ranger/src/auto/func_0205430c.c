#include "m2c.h"

M2C_UNK func_0201c970(s32, s32);                    /* extern */
s32 func_02055b0c(s16);                             /* extern */
M2C_UNK func_02065bc8(s32, s32);                    /* extern */
extern s32 data_020f18bc;
extern s32 data_020f458c;

void func_0205430c(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s8 *, 0x41) = 1;
    func_0201c970(data_020f18bc, M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_r4                     = data_020f458c;
    func_02065bc8(temp_r4, func_02055b0c(M2C_FIELD(arg0, s16 *, 0x46)));
}
