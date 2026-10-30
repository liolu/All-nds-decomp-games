#include "m2c.h"

M2C_UNK func_02006e64(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0200ca4c(void *);                      /* extern */
M2C_UNK func_0200ca7c(void *);                      /* extern */
extern M2C_UNK func_02052ba4;
extern M2C_UNK func_02052bb4;

void func_020535c4(void *arg0) {
    void *temp_r3;

    func_02006e64(0, arg0 + 0xBB70, 0xC);
    func_02006e64(0, arg0 + 0xBB7C, 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0xBB70) = &func_02052ba4;
    temp_r3                             = arg0 + 0x14;
    M2C_FIELD(arg0, void **, 0xBB74)    = temp_r3;
    M2C_FIELD(arg0, M2C_UNK **, 0xBB7C) = &func_02052bb4;
    M2C_FIELD(arg0, void **, 0xBB80)    = temp_r3;
    func_0200ca4c(arg0 + 0xBB70);
    func_0200ca7c(arg0 + 0xBB7C);
}
