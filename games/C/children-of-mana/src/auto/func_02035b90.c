/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011224(M2C_UNK);                     /* extern */
s32 func_020114e4();                                /* extern */
M2C_UNK func_02013de8();                            /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
M2C_UNK func_02035a10();                            /* extern */
M2C_UNK func_02077390(void *);                      /* extern */
M2C_UNK func_020774c8(void *);                      /* extern */

void func_02035b90(void *arg0) {
    s32 temp_r4;
    s32 var_r5;
    void **temp_r0;
    void *var_r4;

    func_02035a10();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x38);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x38) = NULL;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r4 != 0) {
        func_02013e98(func_020114e4(), temp_r4);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    func_020114e4();
    func_02013de8();
    func_02011224(1);
    var_r4 = arg0 + 0x3C;
    var_r5 = 0;
    do {
        func_02077390(var_r4);
        func_020774c8(var_r4);
        var_r5 += 1;
        var_r4 += 0x40;
    } while (var_r5 < 3);
    *(u16 *) 0x04000304 |= 0x8000;
}
