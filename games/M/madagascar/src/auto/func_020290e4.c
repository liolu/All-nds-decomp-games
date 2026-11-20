/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028d4c(void *, s32);                 /* extern */
M2C_UNK func_02028e34(void *);                      /* extern */
M2C_UNK func_0202bb14(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202bdd4(s32, M2C_UNK *);              /* extern */
void *func_0202be38();                              /* extern */
M2C_UNK func_0202be48();                            /* extern */
s32 func_0202cb08();                                /* extern */
extern s8 data_020d027c;
extern M2C_UNK func_020291d0;
extern M2C_UNK func_020291ec;

void *func_020290e4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x14)  = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x28) = arg4;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x3A) = 0;
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
    data_020d027c                = 0;
    func_0202be48();
    M2C_FIELD(arg0, s32 *, 0xC) = func_0202cb08();
    func_0202bdd4(M2C_FIELD(arg0, s32 *, 0xC), &func_020291ec);
    func_0202bb14(func_0202be38(), 0);
    M2C_FIELD(func_0202be38(), M2C_UNK **, 0x570) = &func_020291d0;
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
    } else {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = 1;
    temp_r0                   = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_02028e34(arg0);
            break;
        case 1:
            func_02028d4c(arg0, arg2);
            break;
    }
    return arg0;
}
