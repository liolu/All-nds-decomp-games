#include "m2c.h"

M2C_UNK func_020031b0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020034b0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02024264(void *);                      /* extern */
M2C_UNK func_02024634(void *);                      /* extern */
M2C_UNK func_020247b0(void *);                      /* extern */
M2C_UNK func_0202492c();                            /* extern */
M2C_UNK func_02024b9c(void *);                      /* extern */
M2C_UNK func_02024c74(void *);                      /* extern */
M2C_UNK func_02024d44(void *);                      /* extern */
M2C_UNK func_02024dcc(void *);                      /* extern */
M2C_UNK func_02024e28(void *);                      /* extern */
M2C_UNK func_02090dac(s32);                         /* extern */
s32 func_02091a10(s32);                             /* extern */
s32 func_02091a28(s32);                             /* extern */
M2C_UNK func_02095404(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209574c(s32);                         /* extern */
M2C_UNK func_02095820(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b448c(s32, M2C_UNK);                /* extern */

void func_020235b8(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (M2C_FIELD(arg0, s32 *, 4) == 1) {
        return;
    }
    func_0202492c(arg0);
    func_02024d44(arg0);
    func_02024dcc(arg0);
    func_02024e28(arg0);
    func_02024b9c(arg0);
    func_02024c74(arg0);
    func_02024634(arg0);
    func_020247b0(arg0);
    func_02024264(arg0);
    if (M2C_FIELD(arg0, s32 *, 0xE4) != 0) {
        func_02090dac(M2C_FIELD(arg0, s32 *, 0x62E4));
        temp_r0 = func_02091a10(M2C_FIELD(arg0, s32 *, 0x62E4));
        func_020055c4(temp_r0, 0x8000);
        func_020034b0(temp_r0, 0, 0x8000);
        temp_r0_2 = func_02091a28(M2C_FIELD(arg0, s32 *, 0x62E4));
        func_020055c4(temp_r0_2, 0x800);
        func_020031b0(temp_r0_2, 0, 0x800);
        M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    }
    func_02095820(M2C_FIELD(arg0, s32 *, 0x62E8), 0x80);
    func_0209574c(M2C_FIELD(arg0, s32 *, 0x62E8));
    func_02095404(M2C_FIELD(arg0, s32 *, 0x62E8), 0);
    func_020b448c(M2C_FIELD(arg0, s32 *, 0x62F8), 1);
}
