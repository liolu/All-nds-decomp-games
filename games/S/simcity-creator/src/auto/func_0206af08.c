#include "m2c.h"

M2C_UNK func_02022a08(M2C_UNK *);                   /* extern */
M2C_UNK func_02022a24(M2C_UNK *);                   /* extern */
M2C_UNK func_02022f1c(M2C_UNK *);                   /* extern */
M2C_UNK func_02022f30(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02053808(s32);                         /* extern */
s32 func_0205382c(s32);                             /* extern */
M2C_UNK func_02069630(void *);                      /* extern */
M2C_UNK func_0206a928(void *);                      /* extern */
M2C_UNK func_02072894(s32, M2C_UNK);                /* extern */
s32 func_02073360(s32, M2C_UNK);                    /* extern */
s32 func_02073b08(s32);                             /* extern */
M2C_UNK func_020ab4ec();                            /* extern */
M2C_UNK func_020b7510(s32);                         /* extern */
s32 func_020b76e4(s32);                             /* extern */
M2C_UNK func_020b83d0(s32, M2C_UNK);                /* extern */

void func_0206af08(void *arg0) {
    u8 sp0[84];
    s32 temp_r4;

    func_02022a08(sp0);
    func_02053808(M2C_FIELD(arg0, s32 *, 0x2C));
    temp_r4 = func_0205382c(M2C_FIELD(arg0, s32 *, 0x2C));
    func_02073360(M2C_FIELD(arg0, s32 *, 0x1C), 0);
    func_020ab4ec();
    func_020ab4ec();
    func_02069630(arg0);
    if (temp_r4 != 0) {
        func_02022f30(sp0, *M2C_FIELD(arg0, s32 **, 0xB8));
        func_020b7510(M2C_FIELD(arg0, s32 *, 0xB0));
        func_02022f1c(sp0);
    }
    if ((M2C_FIELD(arg0, u8 *, 0xBC) != 0) && (func_020b76e4(M2C_FIELD(arg0, s32 *, 0xB0)) != 0)) {
        func_020b83d0(M2C_FIELD(arg0, s32 *, 0xB0), 1);
    }
    if ((func_020b76e4(M2C_FIELD(arg0, s32 *, 0xB0)) != 0) || (func_02073b08(M2C_FIELD(arg0, s32 *, 0x1C)) != 0)) {
        func_02072894(M2C_FIELD(arg0, s32 *, 0x1C), 0);
    }
    func_0206a928(arg0);
    M2C_FIELD(arg0, s32 *, 0x48) = func_02073360(M2C_FIELD(arg0, s32 *, 0x1C), 1);
    func_02022a24(sp0);
}
