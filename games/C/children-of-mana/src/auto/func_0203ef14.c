/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200ffe8(s16);                         /* extern */

void func_0203ef14(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r1 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r1, s32 *, 4) == 0) {
        return;
    }
    func_0200ffe8(M2C_FIELD(temp_r1, s16 *, 0x16));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x80), s32 *, 4)   = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x80), s32 *, 0xC) = 0;
}
