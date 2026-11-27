/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0201c4c4(s32, s32);                    /* extern */
M2C_UNK func_02036dd8(s32, M2C_UNK);                /* extern */
M2C_UNK func_020384c8(s32, s32);                    /* extern */
M2C_UNK func_020384dc(s32, s32);                    /* extern */
M2C_UNK func_02044708(s32, s32);                    /* extern */
s32 func_0204b578(s32, s32);                        /* extern */
M2C_UNK func_0204c574(s32, s32);                    /* extern */
M2C_UNK func_0204c9d0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0204e9e0(s32);                         /* extern */
s32 func_0204ef54(s32, s32);                        /* extern */
M2C_UNK func_0204f0d4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0204f0dc(s32, M2C_UNK);                /* extern */
M2C_UNK func_0204f0e4(s32, s32);                    /* extern */
s32 func_020b593c(s32, s32, void *, void *);        /* extern */
s32 func_020e0f18();                                /* extern */

void func_02097a28(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r1;

    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = arg3;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    func_0201c4c4(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x20));
    func_02044708(M2C_FIELD(arg0, s32 *, 8), arg2);
    if (arg8 == 0) {
        return;
    }
    var_r0 = func_0200f270(0x78, 0);
    if (var_r0 != 0) {
        var_r0 = func_0204b578(var_r0, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0;
    func_020384dc(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
    var_r0_2 = func_0200f270(0x1F64, 0);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020e0f18();
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0_2;
    func_020384c8(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10));
    func_0204f0dc(M2C_FIELD(arg0, s32 *, 0x10), 0x3C);
    func_0204f0d4(M2C_FIELD(arg0, s32 *, 0x10), 0xD);
    func_0204f0e4(M2C_FIELD(arg0, s32 *, 0x10), 0x2710);
    if (arg2 == arg3) {
        var_r0_3 = func_0200f270(0x10, 0);
        if (var_r0_3 != 0) {
            if (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg0, s32 *, 0)) {
                var_r1 = arg4;
            } else {
                var_r1 = 0;
            }
            var_r0_3 = func_020b593c(var_r0_3, var_r1, arg0, arg0 + 0x1C);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = var_r0_3;
        var_r0_4                     = func_0200f270(0x230, 0);
        if (var_r0_4 != 0) {
            var_r0_4 = func_0204ef54(var_r0_4, M2C_FIELD(arg0, s32 *, 0x18));
        }
        M2C_FIELD(arg0, s32 *, 0x14) = var_r0_4;
        func_0204c9d0(M2C_FIELD(arg0, s32 *, 0x14), 0x80, 0x60);
        func_0204c574(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 8));
        func_0204e9e0(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x24) = arg5;
        M2C_FIELD(arg0, s32 *, 0x28) = arg6;
        M2C_FIELD(arg0, s32 *, 0x2C) = arg4;
        return;
    }
    func_02036dd8(M2C_FIELD(arg0, s32 *, 8), 1);
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}
