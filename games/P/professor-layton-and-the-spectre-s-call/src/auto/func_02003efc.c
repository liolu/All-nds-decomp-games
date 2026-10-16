#include "m2c.h"

M2C_UNK func_02000fb4(s32, void *);                 /* extern */
M2C_UNK func_020047c8();                            /* extern */
extern M2C_UNK data_02031eac;

void func_02003efc(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_020047c8();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_02000fb4((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_02031eac + 0xC, arg0);
}
