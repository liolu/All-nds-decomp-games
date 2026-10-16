/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207a260(s32, void *);                 /* extern */
M2C_UNK func_02077768();                            /* extern */
extern M2C_UNK data_020eac38;

void func_02075474(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_02077768();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_0207a260((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_020eac38 + 0xC, arg0);
}
