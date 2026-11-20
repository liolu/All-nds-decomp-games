#include "m2c.h"

M2C_UNK func_01ff81b4(s32, M2C_UNK, s32, s32);      /* extern */
M2C_UNK func_020365a0(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0203942c(s32);                         /* extern */
M2C_UNK func_02039510(s32, M2C_UNK);                /* extern */
M2C_UNK func_02039594(s32, M2C_UNK, u32, M2C_UNK);  /* extern */
extern M2C_UNK data_0215de60;
extern M2C_UNK func_020398a4;

void func_020397ec(s32 arg0, M2C_UNK arg1, u32 arg2, M2C_UNK (*arg3)(s32), s32 arg4) {
    if (arg2 == 0) {
        if (arg3 == NULL) {
            return;
        }
        arg3(arg4);
        return;
    }
    do {

    } while (M2C_FIELD(&data_0215de60, volatile s32 *, 0) != 0);
    M2C_FIELD(&data_0215de60, volatile s32 *, 0)      = 1;
    M2C_FIELD(&data_0215de60, volatile s32 *, 4)      = arg0;
    M2C_FIELD(&data_0215de60, M2C_UNK(**)(s32), 0x10) = arg3;
    M2C_FIELD(&data_0215de60, volatile s32 *, 0x14)   = arg4;
    func_02039510(arg0, 0x38000000);
    func_02039594(arg0, arg1, arg2, 0);
    func_0203942c(arg0);
    func_020365a0(arg0, &func_020398a4, 0);
    func_01ff81b4(arg0, arg1, 0x04000400, -0x03C00000 | (arg2 >> 2));
}
