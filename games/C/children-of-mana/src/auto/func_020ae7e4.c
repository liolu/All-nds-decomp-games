/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_02010220();                            /* extern */
M2C_UNK func_02016e60(s32);                         /* extern */
M2C_UNK func_0202a7bc(s32);                         /* extern */
M2C_UNK func_02032bcc();                            /* extern */
M2C_UNK func_0203fe68();                            /* extern */
M2C_UNK func_0204bd20();                            /* extern */
M2C_UNK func_0204bddc(s32);                         /* extern */
M2C_UNK func_0208b860();                            /* extern */
M2C_UNK func_02097954();                            /* extern */
void *func_020aac90();                              /* extern */
M2C_UNK func_020abd4c(s32);                         /* extern */
M2C_UNK func_020bf210();                            /* extern */
M2C_UNK func_020bf254();                            /* extern */
M2C_UNK func_020bf580(M2C_UNK);                     /* extern */
M2C_UNK func_020c87d4(s32, M2C_UNK);                /* extern */
s32 func_020c87ec();                                /* extern */
M2C_UNK func_020d6c3c(s32);                         /* extern */

void func_020ae7e4(void *arg0) {
    s32 temp_r5;
    s32 var_r5;
    s32 var_r5_2;
    void **temp_r0;
    void **temp_r0_2;

    func_0203fe68();
    func_02016e60(M2C_FIELD(arg0, s32 *, 0x28));
    var_r5 = 0;
    do {
        temp_r0 = M2C_FIELD((arg0 + (var_r5 * 4)), void ***, 0x23C);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x23C)(temp_r0);
        }
        var_r5 += 1;
    } while (var_r5 < 9);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x1D4);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_020d6c3c(temp_r5);
            func_0200f2c4(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x1D4) = 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xE0);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0xE0) = NULL;
    }
    func_02032bcc();
    var_r5_2 = 0;
    do {
        if (M2C_FIELD((arg0 + (var_r5_2 * 4)), s32 *, 0xC0) != 0) {
            func_02097954();
        }
        var_r5_2 += 1;
    } while (var_r5_2 < 4);
    func_0208b860();
    if (M2C_FIELD(arg0, s32 *, 0xD0) != 0) {
        func_0204bd20();
        func_0204bddc(M2C_FIELD(arg0, s32 *, 0xD0));
    }
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    func_020bf580(2);
    func_020bf254();
    func_020bf580(1);
    func_020bf254();
    func_020bf580(2);
    func_020bf210();
    func_020bf580(1);
    func_020bf210();
    func_020c87d4(func_020c87ec(), 0);
    if (M2C_FIELD(func_020aac90(), s8 *, 0x413) == 2) {
        func_020abd4c(M2C_FIELD(arg0, s32 *, 0x24));
    } else if ((M2C_FIELD(func_020aac90(), s8 *, 0x413) == 0) || (M2C_FIELD(func_020aac90(), s8 *, 0x413) == 3)) {
        func_0202a7bc(M2C_FIELD(arg0, s32 *, 0x20));
    }
    func_02010220();
}
