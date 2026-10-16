#include "m2c.h"

M2C_UNK func_020b51e0(M2C_UNK);                     /* extern */
M2C_UNK func_020b5b88(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020b5bc0(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020b5be4();                            /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
M2C_UNK func_020b6c40(M2C_UNK);                     /* extern */
s32 func_020b8ea4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020b8ec8(M2C_UNK, s32 *, M2C_UNK);         /* extern */

s32 func_020beb44(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    s32 *temp_r8;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r8_2;

    sp0 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x114) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 2);
        if (func_020b8ea4(0xB, 1) == 0) {
            do {
                func_020b6c40(0x64);
            } while (func_020b8ea4(0xB, 1) == 0);
        }
        func_020beb44(arg0, NULL, 1);
    }
    func_020b5bc0(M2C_FIELD(arg0, s32 **, 0), 0x60);
    func_020b5be4();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)             = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 0x20);
    do {

    } while (func_020b8ec8(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r8 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_020b8ec8(0xB, temp_r8, 1) < 0);
    }
    temp_r8_2 = func_020b6bd0();
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20) {
        do {
            func_020b51e0(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20);
    }
    func_020b6be4(temp_r8_2);
    func_020b5b88(M2C_FIELD(arg0, s32 **, 0), 0x60);
    temp_r1 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r1 == 4) {
        temp_r0 = sp0 - 1;
        sp0     = temp_r0;
        if (temp_r0 > 0) {
            goto loop_6;
        }
    }
    if (temp_r1 == 0) {
        return 1;
    }
    return 0;
}
