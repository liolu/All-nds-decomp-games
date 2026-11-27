/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02099214();                            /* extern */
void **func_0209c9d0(void *, s32);                  /* extern */
M2C_UNK func_020ce4b8(s32, s32);                    /* extern */

void func_020a55e4(void *arg0) {
    s32 var_r4;
    void **temp_r0;

    func_02099214();
    var_r4 = 0x65;
    do {
        temp_r0 = func_0209c9d0(arg0, var_r4);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0xF0)(temp_r0, M2C_FIELD(arg0, s32 *, 0x6C));
        var_r4 += 1;
    } while (var_r4 <= 0x66);
    func_020ce4b8(M2C_FIELD(arg0, s32 *, 0x19C), M2C_FIELD(arg0, s32 *, 0x6C));
}
