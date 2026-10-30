#include "m2c.h"

M2C_UNK func_02069ca4(void *);                      /* extern */
M2C_UNK func_0206a038(void *);                      /* extern */
M2C_UNK func_0206a298(void *);                      /* extern */
M2C_UNK func_0206a4ec(void *);                      /* extern */
M2C_UNK func_0206a6fc(void *);                      /* extern */
s32 func_0206bbe0(s32);                             /* extern */
M2C_UNK func_02072894(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b2b84();                            /* extern */
M2C_UNK func_020b2bdc(s32);                         /* extern */
M2C_UNK func_020b3024(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b7110(s32, s32);                    /* extern */
M2C_UNK func_020b7164(s32, s32, s32);               /* extern */

void func_0206a928(void *arg0) {
    s32 temp_r4;
    u32 temp_r0;

    temp_r4 = func_0206bbe0(M2C_FIELD(arg0, s32 *, 4));
    func_020b2b84();
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x58);
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_02069ca4(arg0);
            break;
        case 1:
            func_0206a038(arg0);
            break;
        case 2:
            func_0206a298(arg0);
            break;
        case 3:
            func_0206a4ec(arg0);
            break;
        case 4:
            func_02072894(M2C_FIELD(arg0, s32 *, 0x1C), 0);
            break;
        case 5:
            func_0206a6fc(arg0);
            break;
    }
    func_020b7110(M2C_FIELD(arg0, s32 *, 0xB4), M2C_FIELD(arg0, s32 *, 0xB0));
    func_020b7164(M2C_FIELD(arg0, s32 *, 0xB4), temp_r4, M2C_FIELD(arg0, s32 *, 0xB0));
    func_020b2bdc(temp_r4);
    func_020b3024(temp_r4, 0x1F);
}
