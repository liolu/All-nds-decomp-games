#include "m2c.h"

M2C_UNK func_020536d8();                            /* extern */
M2C_UNK func_02056150(void *);                      /* extern */
M2C_UNK func_02056490(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */

void func_02056270(void *arg0) {
    func_0206fff0(M2C_FIELD(arg0, s32 *, 8));
    func_020536d8();
    M2C_FIELD(arg0, s8 *, 2) = (s8) M2C_FIELD(arg0, s8 *, 0);
    M2C_FIELD(arg0, s8 *, 3) = (s8) M2C_FIELD(arg0, s8 *, 1);
    if (M2C_FIELD(arg0, u16 *, 4) != 0) {
        func_02056150(arg0);
        if (M2C_FIELD(arg0, u16 *, 4) == 0) {
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
            return;
        }
        if ((s32) M2C_FIELD(arg0, s8 *, 0x10) <= 1) {
            return;
        }
        func_02056490(arg0, 1);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0)     = 0;
    M2C_FIELD(arg0, s8 *, 1)     = 0;
    M2C_FIELD(arg0, u16 *, 4)    = 0U;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s8 *, 0x10)  = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x18)  = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 3;
}
