#include "m2c.h"

M2C_UNK func_0206f92c(s32, void *);                 /* extern */
M2C_UNK func_0206e5f0();                            /* extern */
extern M2C_UNK data_02091a78;

void func_0206d148(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0206e5f0();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_0206f92c((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_02091a78 + 0xC, arg0);
}
