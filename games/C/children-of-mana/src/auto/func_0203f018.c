/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200ffe8(s16);                         /* extern */

void func_0203f018(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r0 == NULL) {
        return;
    }
    func_0200ffe8(M2C_FIELD(temp_r0, s16 *, 0x14));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x80), s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x80), s32 *, 8) = 0;
    M2C_FIELD(arg0, void **, 0x80)                      = NULL;
}
