#include "m2c.h"

M2C_UNK func_0206aff0(s32);                         /* extern */
s32 func_0206b9cc(s32);                             /* extern */
s32 func_0206f1f0();                                /* extern */
M2C_UNK func_02090654(s32);                         /* extern */

void func_0206df60(void *arg0) {
    s32 temp_r0;

    if (func_0206f1f0() == 0) {
        func_0206aff0(M2C_FIELD(arg0, s32 *, 0xC));
    }
    func_02090654(M2C_FIELD(arg0, s32 *, 0x10));
    temp_r0 = func_0206b9cc(M2C_FIELD(arg0, s32 *, 0xC));
    switch (temp_r0) {                              /* irregular */
        case 1:
            M2C_FIELD((void *) 0x05000000, u16 *, 0)     = 0U;
            M2C_FIELD((void *) 0x05000000, u16 *, 0x400) = (u16) M2C_FIELD(arg0, u16 *, 0xB78);
            return;
        case 0:
            M2C_FIELD((void *) 0x05000000, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 0xB78);
            *(u16 *) 0x05000400                      = M2C_FIELD(arg0, u16 *, 0xB78);
            return;
    }
}
