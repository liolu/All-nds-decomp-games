#include "m2c.h"

M2C_UNK func_02005bc4(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_02023050(M2C_UNK, u8);                     /* extern */
M2C_UNK func_02023084(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
M2C_UNK func_020622a4(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_020622fc(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_02062370(M2C_UNK *, M2C_UNK *, s32);       /* extern */
s32 func_02071c48(s32);                             /* extern */
void *func_0207441c(s32, u16);                      /* extern */
s32 func_020b132c();                                /* extern */
void *func_020b8388(s32, M2C_UNK);                  /* extern */

void func_0206655c(void *arg0) {
    u8 spC[256];
    u8 sp0[12];
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r4;

    func_02061c28(sp0);
    temp_r4                         = func_020b8388(M2C_FIELD(arg0, s32 *, 8), 0x17);
    M2C_FIELD(arg0, void **, 0x45C) = func_0207441c(func_02071c48(M2C_FIELD(arg0, s32 *, 0)), M2C_FIELD(temp_r4, u16 *, 2));
    func_02023084(spC, func_020b132c());
    temp_r0 = func_02062370(sp0, spC, func_02023050(0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x45C), u8 *, 0xF)));
    func_020622fc(sp0, temp_r0, 0x1400);
    if (temp_r0 != 0) {
        func_02005bc4(0, -1, temp_r0);
    }
    temp_r0_2 = func_02062370(sp0, spC, func_02023050(5, M2C_FIELD(M2C_FIELD(arg0, void **, 0x45C), u8 *, 0xC)));
    func_020622a4(sp0, temp_r0_2, 0x20000);
    if (temp_r0_2 != 0) {
        func_02005bc4(0, -1, temp_r0_2);
    }
    func_02061c34(sp0);
}
