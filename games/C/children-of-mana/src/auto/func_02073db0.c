/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020645f0(s32, void *);                 /* extern */
M2C_UNK func_02075a84();                            /* extern */
extern M2C_UNK data_021236f8;

void func_02073db0(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_02075a84();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020645f0((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_021236f8 + 0xC, arg0);
}
