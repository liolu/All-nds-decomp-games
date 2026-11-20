#include "m2c.h"

s32 func_02046324();                                /* extern */
M2C_UNK func_020537ec();                            /* extern */
void **func_020538ec();                             /* extern */
M2C_UNK func_02061010(s32, s32);                    /* extern */
M2C_UNK func_020617e0(s32, s32, s32, s32);          /* extern */
M2C_UNK func_0206b2fc(void *);                      /* extern */
M2C_UNK func_0206b328();                            /* extern */
s32 func_0206b768(void *, s32);                     /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */
M2C_UNK func_02073644(s32, M2C_UNK);                /* extern */
s32 func_02073650(s32);                             /* extern */

void func_0206b358(void *arg0) {
    s32 sp8;
    M2C_UNK sp4;
    M2C_UNK sp0;
    s32 temp_r4;
    void **temp_r0;

    func_0206b328();
    func_0206b2fc(arg0);
    func_0206fff0(M2C_FIELD(arg0, s32 *, 0x1C));
    temp_r0 = func_020538ec();
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32 *, M2C_UNK *, M2C_UNK *), 0x74)(temp_r0, &sp8, &sp4, &sp0);
    M2C_FIELD(arg0, s32 *, 0x50) = func_0206b768(arg0, sp8);
    M2C_FIELD(arg0, s32 *, 0x54) = -1;
    temp_r4                      = func_02073650(M2C_FIELD(arg0, s32 *, 0x1C));
    func_0206fff0(M2C_FIELD(arg0, s32 *, 0x1C));
    func_020537ec();
    func_020617e0(M2C_FIELD(arg0, s32 *, 0x28), temp_r4, M2C_FIELD(arg0, s32 *, 0x50), func_02046324());
    func_02061010(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
    func_02073644(M2C_FIELD(arg0, s32 *, 0x1C), 1);
}
