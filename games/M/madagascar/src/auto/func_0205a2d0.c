/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020522cc(s32, void *);                 /* extern */
M2C_UNK func_0205bdcc();                            /* extern */
extern M2C_UNK data_020da078;

void func_0205a2d0(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0205bdcc();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020522cc((M2C_FIELD(arg0, s32 *, 0x10) * 0x1C) + (s32) &data_020da078 + 0xC, arg0);
}
