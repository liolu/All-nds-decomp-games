#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */
M2C_UNK func_0206b0ec();                            /* extern */
M2C_UNK func_0206b0fc(void *);                      /* extern */
M2C_UNK func_0206b138(void *);                      /* extern */
M2C_UNK func_0206b204(void *);                      /* extern */
M2C_UNK func_0206b254(void *);                      /* extern */
M2C_UNK func_0206b2ac(void *);                      /* extern */
M2C_UNK func_0206b2fc(void *);                      /* extern */
M2C_UNK func_0206b464(void *);                      /* extern */
M2C_UNK func_0206b4b4(void *);                      /* extern */
M2C_UNK func_0206b510(void *);                      /* extern */
M2C_UNK func_0206b7d8(void *);                      /* extern */
s32 func_0206bbe0(s32);                             /* extern */
s32 func_0206bbe8(s32);                             /* extern */
M2C_UNK func_0206bd44(s32);                         /* extern */
s32 func_0206bee8(s32, M2C_UNK);                    /* extern */
s32 func_0206bf2c();                                /* extern */
M2C_UNK func_020b1898(s32, s32, M2C_UNK);           /* extern */

void func_02069428(void *arg0, s32 arg1) {
    s32 temp_r5;
    s32 var_r0;

    func_0206b0ec();
    func_0206b0fc(arg0);
    func_0206b204(arg0);
    func_0206b138(arg0);
    func_0206bd44(M2C_FIELD(arg0, s32 *, 4));
    func_0206b2ac(arg0);
    func_0206b464(arg0);
    func_0206b510(arg0);
    func_0206b4b4(arg0);
    func_0206b2fc(arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = func_0206bbe0(M2C_FIELD(arg0, s32 *, 4));
    func_0206b7d8(arg0);
    func_0206b254(arg0);
    M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    var_r0                       = func_020348ec(0x84);
    if (var_r0 != 0) {
        var_r0 = func_0206bf2c();
    }
    M2C_FIELD(arg0, s32 *, 0x34) = var_r0;
    *(s32 *) 0x04000000          = (*(s32 *) 0x04000000 & ~0x1F00) | 0xF00;
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x48) = -1;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 6;
    M2C_FIELD(arg0, s32 *, 0x64) = 4;
    M2C_FIELD(arg0, s8 *, 0x68)  = 0;
    M2C_FIELD(arg0, s8 *, 0xBD)  = 0;
    M2C_FIELD(arg0, s8 *, 0xBC)  = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s8 *, 0x9B)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9C)  = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s16 *, 0xD8) = 0;
    func_02006ee8(arg0 + 0x69, 0, 0x32);
    temp_r5 = func_0206bbe8(M2C_FIELD(arg0, s32 *, 4));
    func_020b1898(temp_r5, func_0206bee8(M2C_FIELD(arg0, s32 *, 4), 0), 0x800);
    M2C_FIELD(arg0, s8 *, 0x9D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9E)  = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
}
