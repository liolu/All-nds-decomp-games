/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6418(M2C_UNK);                     /* extern */
M2C_UNK func_020c6fb0(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020c6fe8(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020c700c();                            /* extern */
s32 func_020c8070();                                /* extern */
M2C_UNK func_020c8084(s32);                         /* extern */
M2C_UNK func_020c80e0(M2C_UNK);                     /* extern */
s32 func_020ca0e8(M2C_UNK, s32 *, M2C_UNK);         /* extern */
s32 func_020ca19c(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020d0624(void *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r10;
    s32 temp_r0;
    s32 temp_r10_2;
    s32 var_r4;

    var_r4 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0xE0) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0xE0) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xE0) | 2);
        if (func_020ca19c(0xB, 1) == 0) {
            do {
                func_020c80e0(0x64);
            } while (func_020ca19c(0xB, 1) == 0);
        }
        func_020d0624(arg0, NULL, 1);
    }
    func_020c6fe8(M2C_FIELD(arg0, s32 **, 0), 0x40);
    func_020c700c();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)            = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0xE0) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xE0) | 0x20);
    do {

    } while (func_020ca0e8(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r10 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_020ca0e8(0xB, temp_r10, 1) < 0);
    }
    temp_r10_2 = func_020c8070();
    if (M2C_FIELD(arg0, volatile s32 *, 0xE0) & 0x20) {
        do {
            func_020c6418(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0xE0) & 0x20);
    }
    func_020c8084(temp_r10_2);
    func_020c6fb0(M2C_FIELD(arg0, s32 **, 0), 0x40);
    temp_r0 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r0 == 4) {
        var_r4 -= 1;
        if (var_r4 > 0) {
            goto loop_6;
        }
    }
    if (temp_r0 == 0) {
        return 1;
    }
    return 0;
}
