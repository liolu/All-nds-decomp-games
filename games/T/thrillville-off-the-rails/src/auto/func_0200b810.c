#include "m2c.h"

s32 func_0200caa8(M2C_UNK, void *);                 /* extern */
extern M2C_UNK func_0200cc68;

void func_0200b810(void *arg0, M2C_UNK arg1) {
    s16 var_r1;

    M2C_FIELD(arg0, u16 *, 8) = (u16) (func_0200caa8(arg1, arg0) - 1);
    if (M2C_FIELD(arg0, u16 *, 8) != 0) {
        var_r1 = 2;
    } else {
        var_r1 = 3;
    }
    M2C_FIELD(arg0, s16 *, 0xA)    = var_r1;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_0200cc68;
}
