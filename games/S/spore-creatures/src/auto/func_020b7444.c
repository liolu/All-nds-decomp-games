#include "m2c.h"

M2C_UNK func_01ffdcfc(s32, M2C_UNK, s32, s32);      /* extern */
M2C_UNK func_020b4570(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_020b7288(s32);                         /* extern */
M2C_UNK func_020b736c(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b73f0(s32, M2C_UNK, u32, M2C_UNK);  /* extern */
extern M2C_UNK data_020f1cf4;
extern M2C_UNK func_020b74fc;

void func_020b7444(s32 arg0, M2C_UNK arg1, u32 arg2, M2C_UNK (*arg3)(s32), s32 arg4) {
    if (arg2 == 0) {
        if (arg3 == NULL) {
            return;
        }
        arg3(arg4);
        return;
    }
    do {

    } while (M2C_FIELD(&data_020f1cf4, volatile s32 *, 0) != 0);
    M2C_FIELD(&data_020f1cf4, volatile s32 *, 0)      = 1;
    M2C_FIELD(&data_020f1cf4, volatile s32 *, 4)      = arg0;
    M2C_FIELD(&data_020f1cf4, M2C_UNK(**)(s32), 0x10) = arg3;
    M2C_FIELD(&data_020f1cf4, volatile s32 *, 0x14)   = arg4;
    func_020b736c(arg0, 0x38000000);
    func_020b73f0(arg0, arg1, arg2, 0);
    func_020b7288(arg0);
    func_020b4570(arg0, &func_020b74fc, 0);
    func_01ffdcfc(arg0, arg1, 0x04000400, -0x03C00000 | (arg2 >> 2));
}
