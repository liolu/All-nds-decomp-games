/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02062aa8(s32, void *);                 /* extern */
M2C_UNK func_02065160();                            /* extern */
extern M2C_UNK data_02182f18;

void func_020639f0(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_02065160();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_02062aa8((M2C_FIELD(arg0, s32 *, 0x10) * 0x1C) + (s32) &data_02182f18 + 0xC, arg0);
}
