/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

s32 func_0203a6cc(M2C_UNK);                         /* extern */
M2C_UNK func_0204dad0(s32, void *);                 /* extern */
s32 func_0204dbec(s32, M2C_UNK *, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_0207bbf0;

void func_0202d950(void *arg0) {
    s32 var_r0;
    s32 var_r2;
    void *temp_r1;

    var_r0 = func_0203a6cc(0x30);
    if (var_r0 != 0) {
        var_r0 = func_0204dbec(var_r0, &data_0207bbf0, M2C_FIELD(arg0, s32 *, 4) - 0x20, M2C_FIELD(arg0, s32 *, 8) - 0x20,
                               0x40, 0x40, 2, 0x3E7);
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = var_r0;
    func_0204dad0(M2C_FIELD(arg0, s32 *, 0x8C), arg0 + 0x4C);
    var_r2                       = 1;
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    do {
        temp_r1                         = arg0 + (var_r2 * 8);
        M2C_FIELD(temp_r1, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x4C);
        var_r2 += 1;
        M2C_FIELD(temp_r1, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    } while (var_r2 < 6);
}
