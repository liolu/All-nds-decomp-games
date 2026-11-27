#include "m2c.h"

M2C_UNK func_020d1e38(s32);                         /* extern */
M2C_UNK func_020d1f84();                            /* extern */
M2C_UNK func_020d21fc();                            /* extern */
M2C_UNK func_020d2230();                            /* extern */
M2C_UNK func_020d23b0(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020d2444(s32, void **, M2C_UNK);           /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_020a0bbc(void *);                      /* extern */

void func_020a283c(s32 arg0) {
    void *sp0;
    s32 temp_r0;
    s32 temp_r8;

    if (arg0 == 0) {
        return;
    }
    func_020d1e38(arg0 + 0x20);
    temp_r8 = _Z20DisableIRQInterruptsv();
    func_020d21fc();
    if (func_020d2444(arg0, &sp0, 0) != 0) {
        do {
            if (sp0 != NULL) {
                temp_r0 = M2C_FIELD(sp0, s32 *, 8);
                if (temp_r0 != 0) {
                    func_020d23b0(temp_r0, -0xB, 0);
                }
                func_020a0bbc(sp0);
            }
        } while (func_020d2444(arg0, &sp0, 0) != 0);
    }
    func_020d2230();
    func_020d1f84();
    _Z20SetIRQInterruptStatei(temp_r8);
}
