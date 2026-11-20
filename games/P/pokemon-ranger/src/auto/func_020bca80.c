/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc154(s32, void *);                 /* extern */
M2C_UNK func_020be784();                            /* extern */
extern M2C_UNK data_020f54b0;

void func_020bca80(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_020be784();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020bc154((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_020f54b0 + 0xC, arg0);
}
