#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_020685a0();                                /* extern */
M2C_UNK func_020686f0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020690c8(s32, M2C_UNK, s32, u8, s32, s32); /* extern */
M2C_UNK func_02069130(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02069168(s32, M2C_UNK);                /* extern */
M2C_UNK func_02069234(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02069250(s32, M2C_UNK, u8, u8);        /* extern */
s32 func_0206bbe0(s32);                             /* extern */
s32 func_020726b8(s32, M2C_UNK);                    /* extern */
s32 func_020b132c();                                /* extern */
void *func_020b8388(s32, M2C_UNK);                  /* extern */

s32 func_020662cc(void *arg0) {
    s32 temp_r4;
    s32 var_r0;
    s8 temp_r1;
    void *temp_r0;

    var_r0 = func_020348ec(0x284);
    if (var_r0 != 0) {
        var_r0 = func_020685a0();
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0;
    func_020686f0(M2C_FIELD(arg0, s32 *, 0xC), func_0206bbe0(M2C_FIELD(arg0, s32 *, 4)), 2);
    temp_r4 = func_020b132c();
    temp_r0 = func_020b8388(M2C_FIELD(arg0, s32 *, 8), 0xE);
    if (M2C_FIELD(temp_r0, s8 *, 1) == 0) {
        M2C_FIELD(temp_r0, s8 *, 1) = (s8) (func_020726b8(M2C_FIELD(arg0, s32 *, 0), 2) + 1);
    }
    func_020690c8(M2C_FIELD(arg0, s32 *, 0xC), 0, M2C_FIELD(temp_r0, s8 *, 1) - 1, (u8) (temp_r4 - 1), 0x32, 0x1E);
    temp_r1 = M2C_FIELD(temp_r0, s8 *, 3);
    if (temp_r1 != 0) {
        func_02069250(M2C_FIELD(arg0, s32 *, 0xC), 0, (u8) temp_r1, M2C_FIELD(temp_r0, u8 *, 0));
    }
    func_02069130(M2C_FIELD(arg0, s32 *, 0xC), 0, 0, 2);
    func_02069168(M2C_FIELD(arg0, s32 *, 0xC), 0);
    func_02069234(M2C_FIELD(arg0, s32 *, 0xC), 0, 1);
    M2C_FIELD(arg0, s8 *, 0x1E) = -1;
    return 1;
}
