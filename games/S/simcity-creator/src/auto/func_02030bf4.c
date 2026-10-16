#include "m2c.h"

M2C_UNK func_02028e84(s32, void *);                 /* extern */
M2C_UNK func_02032090();                            /* extern */
extern M2C_UNK data_020d9564;

void func_02030bf4(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_02032090();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_02028e84((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_020d9564 + 0xC, arg0);
}
