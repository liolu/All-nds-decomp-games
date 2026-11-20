#include "m2c.h"

M2C_UNK func_0200f274(M2C_UNK *);                   /* extern */
M2C_UNK func_02044410(s32);                         /* extern */
M2C_UNK func_020447c4();                            /* extern */
M2C_UNK func_02044ddc(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_02044e04;

s32 func_02045de0(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x45C) != 0) {
        return 0;
    }
    func_020447c4();
    func_0200f274(&func_02044e04);
    if (M2C_FIELD(arg0, s32 *, 0x610) == 0) {
        var_r0 = 0x800211;
    } else {
        var_r0 = 0x80027B;
    }
    func_02044410(var_r0);
    func_02044ddc(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x474) = 0;
    M2C_FIELD(arg0, s32 *, 0x600) = 0;
    M2C_FIELD(arg0, s32 *, 0x60C) = 0;
    return 1;
}
