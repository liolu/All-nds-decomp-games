#include "m2c.h"

M2C_UNK func_020370b8(M2C_UNK);                     /* extern */
M2C_UNK func_02037710(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_02037748(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_0203776c();                            /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
M2C_UNK func_02038e80(M2C_UNK);                     /* extern */
s32 func_0203b3f4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0203b418(M2C_UNK, s32 *, M2C_UNK);         /* extern */

s32 func_020418cc(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    s32 *temp_r8;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r8_2;

    sp0 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x114) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 2);
        if (func_0203b3f4(0xB, 1) == 0) {
            do {
                func_02038e80(0x64);
            } while (func_0203b3f4(0xB, 1) == 0);
        }
        func_020418cc(arg0, NULL, 1);
    }
    func_02037748(M2C_FIELD(arg0, s32 **, 0), 0x60);
    func_0203776c();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)             = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 0x20);
    do {

    } while (func_0203b418(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r8 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_0203b418(0xB, temp_r8, 1) < 0);
    }
    temp_r8_2 = func_02038e10();
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20) {
        do {
            func_020370b8(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20);
    }
    func_02038e24(temp_r8_2);
    func_02037710(M2C_FIELD(arg0, s32 **, 0), 0x60);
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
