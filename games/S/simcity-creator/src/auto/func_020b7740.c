#include "m2c.h"

void *func_0204622c(s32);                           /* extern */
void *func_02046274();                              /* extern */
void *func_02046960(s32);                           /* extern */
M2C_UNK func_020738f4(s32, M2C_UNK, M2C_UNK, s32 *); /* extern */
s32 func_0207394c(s32);                             /* extern */
M2C_UNK func_020b383c(M2C_UNK);                     /* extern */
M2C_UNK func_020b3908(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_020b3928(M2C_UNK, M2C_UNK, void *);    /* extern */

void func_020b7740(void *arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;
    u16 temp_r0_2;

    func_020b383c(arg1);
    if (M2C_FIELD(arg0, s32 *, 0xB3C) != 0) {
        func_020b3928(arg1, 1, func_02046274());
        func_020b3928(arg1, 0, func_0204622c(M2C_FIELD(arg0, s32 *, 0xB3C)));
        func_020b3928(arg1, 2, func_02046960(M2C_FIELD(arg0, s32 *, 0xB3C)));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB40);
    if (temp_r0 == 0) {
        return;
    }
    func_020738f4(temp_r0, 0, 0, &sp0);
    func_020b3908(arg1, 0x35, sp0);
    func_020b3908(arg1, 0x33, func_0207394c(M2C_FIELD(arg0, s32 *, 0xB40)));
    func_020b3908(arg1, 0x34, 0x186A0 - func_0207394c(M2C_FIELD(arg0, s32 *, 0xB40)));
    if (M2C_FIELD(arg0, u16 *, 0xA36) == 7) {
        temp_r0_2 = M2C_FIELD(arg0, u16 *, 0xA38);
        if ((temp_r0_2 != 0xC8) && (temp_r0_2 != 0xF0)) {

        } else {
            func_020b3908(arg1, 0x34, 0xC350 - func_0207394c(M2C_FIELD(arg0, s32 *, 0xB40)));
        }
    }
    func_020b3928(arg1, 0x1F, arg0 + 0xAA0);
}
