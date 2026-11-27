#include "m2c.h"

M2C_UNK func_020144e4(void *);                      /* extern */
s32 func_0203f9f0(s32, M2C_UNK);                    /* extern */

void func_02014498(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_0203f9f0(M2C_FIELD(arg0, s32 *, 0x6C), 0x67);
    switch (temp_r0) {                              /* irregular */
        case 1:
            M2C_FIELD(arg0, s32 *, 0x68) = 1;
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x68) = 0;
            break;
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) == 3) {
        return;
    }
    func_020144e4(arg0);
}
