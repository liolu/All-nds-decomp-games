#include "m2c.h"

M2C_UNK func_020d1e7c(M2C_UNK);                     /* extern */
M2C_UNK _Z24InvalidateDataCacheRangePKvj(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020d2894(s32 *, M2C_UNK);              /* extern */
M2C_UNK _Z16DrainWriteBufferv();                            /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_020d3aa8(M2C_UNK);                     /* extern */
s32 func_020d66a0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020d66c4(M2C_UNK, s32 *, M2C_UNK);         /* extern */

s32 func_020dd950(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    s32 *temp_r8;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r8_2;

    sp0 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x114) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 2);
        if (func_020d66a0(0xB, 1) == 0) {
            do {
                func_020d3aa8(0x64);
            } while (func_020d66a0(0xB, 1) == 0);
        }
        func_020dd950(arg0, NULL, 1);
    }
    func_020d2894(M2C_FIELD(arg0, s32 **, 0), 0x60);
    _Z16DrainWriteBufferv();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)             = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 0x20);
    do {

    } while (func_020d66c4(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r8 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_020d66c4(0xB, temp_r8, 1) < 0);
    }
    temp_r8_2 = _Z20DisableIRQInterruptsv();
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20) {
        do {
            func_020d1e7c(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20);
    }
    _Z20SetIRQInterruptStatei(temp_r8_2);
    _Z24InvalidateDataCacheRangePKvj(M2C_FIELD(arg0, s32 **, 0), 0x60);
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
