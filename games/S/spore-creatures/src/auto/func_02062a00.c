#include "m2c.h"

M2C_UNK func_020630a0(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_02063aac();                            /* extern */
M2C_UNK func_02063ebc();                            /* extern */
M2C_UNK func_ov001_02100344(M2C_UNK *, M2C_UNK *);  /* extern */
s32 func_ov001_02109564(s32);                       /* extern */
extern M2C_UNK func_0206273c;
extern M2C_UNK func_0206277c;

s32 func_02062a00(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_ov001_02109564(*M2C_FIELD(arg0, s32 **, 4));
    func_02063aac();
    func_02063ebc();
    func_ov001_02100344(&func_0206273c, &func_0206277c);
    func_020630a0(M2C_FIELD(arg0, s32 **, 4), 0);
    if (temp_r4 != 3) {
        return 1;
    }
    return 0;
}
