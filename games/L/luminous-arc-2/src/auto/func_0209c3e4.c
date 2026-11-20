#include "m2c.h"

M2C_UNK func_0200509c(s32);                         /* extern */
M2C_UNK func_020051e8();                            /* extern */
M2C_UNK func_0200546c();                            /* extern */
M2C_UNK func_020054a0();                            /* extern */
M2C_UNK func_02005638(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020056cc(s32, void **, M2C_UNK);           /* extern */
s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_0209a9f0(void *);                      /* extern */

void func_0209c3e4(s32 arg0) {
    void *sp0;
    s32 temp_r0;
    s32 temp_r8;

    if (arg0 == 0) {
        return;
    }
    func_0200509c(arg0 + 0x20);
    temp_r8 = func_02006be0();
    func_0200546c();
    if (func_020056cc(arg0, &sp0, 0) != 0) {
        do {
            if (sp0 != NULL) {
                temp_r0 = M2C_FIELD(sp0, s32 *, 8);
                if (temp_r0 != 0) {
                    func_02005638(temp_r0, -0xB, 0);
                }
                func_0209a9f0(sp0);
            }
        } while (func_020056cc(arg0, &sp0, 0) != 0);
    }
    func_020054a0();
    func_020051e8();
    func_02006bf4(temp_r8);
}
