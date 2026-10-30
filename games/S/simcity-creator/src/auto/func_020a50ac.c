#include "m2c.h"

M2C_UNK func_02002e98(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020031b0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020032d0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020034b0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020035d0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02090dac(s32);                         /* extern */
s32 func_02091a10(s32);                             /* extern */
s32 func_02091a28(s32);                             /* extern */
M2C_UNK func_02095404(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209574c(s32);                         /* extern */
M2C_UNK func_02095820(s32, M2C_UNK);                /* extern */
M2C_UNK func_020a522c();                            /* extern */
M2C_UNK func_020a6a88(void *);                      /* extern */
M2C_UNK func_020a6d2c(void *);                      /* extern */
M2C_UNK func_020a6f20(void *);                      /* extern */
M2C_UNK func_020a713c(void *);                      /* extern */
M2C_UNK func_020a73cc(void *);                      /* extern */
M2C_UNK func_020a747c(void *);                      /* extern */
M2C_UNK func_020a7514(void *);                      /* extern */
M2C_UNK func_020a75ac(void *);                      /* extern */
M2C_UNK func_020a7644(void *);                      /* extern */
M2C_UNK func_020a76dc(void *);                      /* extern */
M2C_UNK func_020ab010(void *);                      /* extern */
M2C_UNK func_020b448c(s32, M2C_UNK);                /* extern */

void func_020a50ac(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_020a522c();
    func_020ab010(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) != 6) {
        func_020a6a88(arg0);
        func_020a6d2c(arg0);
    }
    func_020a7644(arg0);
    func_020a76dc(arg0);
    func_020a73cc(arg0);
    func_020a713c(arg0);
    func_020a747c(arg0);
    func_020a7514(arg0);
    func_020a75ac(arg0);
    func_020a6f20(arg0);
    func_02095820(M2C_FIELD(arg0, s32 *, 0x20088), 0x80);
    func_0209574c(M2C_FIELD(arg0, s32 *, 0x20088));
    func_02095404(M2C_FIELD(arg0, s32 *, 0x20088), 0);
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_02090dac(M2C_FIELD(arg0, s32 *, 0x20084));
        temp_r0 = func_02091a10(M2C_FIELD(arg0, s32 *, 0x20084));
        func_020055c4(temp_r0, 0x6000);
        func_020034b0(temp_r0, 0, 0x6000);
        temp_r0_2 = func_02091a28(M2C_FIELD(arg0, s32 *, 0x20084));
        func_020055c4(temp_r0_2, 0x800);
        func_020031b0(temp_r0_2, 0, 0x800);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        func_02002e98(M2C_FIELD(arg0, s32 *, 0x27204), 0, 0x200);
        func_020035d0(M2C_FIELD(arg0, s32 *, 0x27200), 0, 0x6000);
        func_020032d0(M2C_FIELD(arg0, s32 *, 0x27208), 0, 0x800);
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    func_020b448c(M2C_FIELD(arg0, s32 *, 0x2008C), 1);
    func_020b448c(M2C_FIELD(arg0, s32 *, 0x20090), 1);
}
