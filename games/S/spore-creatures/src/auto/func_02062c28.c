#include "m2c.h"

M2C_UNK func_020630a0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02063188();                            /* extern */
M2C_UNK func_02063aac();                            /* extern */
M2C_UNK func_02063f80();                            /* extern */
s32 func_ov001_0210077c();                          /* extern */
M2C_UNK func_ov001_02100788(M2C_UNK *, M2C_UNK *);  /* extern */
s32 func_ov001_02100ed4(M2C_UNK, M2C_UNK *, s32, M2C_UNK *, s32, M2C_UNK *, s32); /* extern */
M2C_UNK func_ov001_02102478(M2C_UNK *, M2C_UNK);    /* extern */
s32 func_ov001_02109a70();                          /* extern */
M2C_UNK func_ov001_02109a88();                      /* extern */
extern M2C_UNK func_020627a4;
extern M2C_UNK func_020627b8;
extern M2C_UNK func_020627f0;
extern M2C_UNK func_020627f4;

void func_02062c28(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp1C[12];
    u8 spC[16];

    if (arg1 == 0) {
        func_020630a0(arg0, 5);
        if (func_ov001_0210077c() != 2) {
            func_ov001_0210077c();
        }
        func_ov001_02100788(spC, sp1C);
        func_02063aac();
        if (func_ov001_02109a70() != 0) {
            func_02063aac();
            func_ov001_02109a88();
            func_02063aac();
            func_02063f80();
        }
        if (func_ov001_02100ed4(0, &func_020627a4, arg3, &func_020627b8, arg3, &func_020627f0, arg3) == 0) {
            return;
        }
        func_ov001_02102478(&func_020627f4, 0);
        return;
    }
    func_02063188();
    func_020630a0(arg0, 0xE);
}
