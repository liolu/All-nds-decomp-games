#include "m2c.h"

M2C_UNK func_0209c2ec();                /* extern */
M2C_UNK func_0209c2f0();                /* extern */
M2C_UNK func_0209cd68();               /* extern */
M2C_UNK func_0209cf00();                      /* extern */

void *func_0209cdfc(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 sp4;
    s32 sp0;

    func_0209c2f0();
    func_0209c2f0(arg0 + 4, arg2);
    func_0209c2ec(arg0 + 8, 0);
    func_0209cd68(arg0 + 0xC, NULL);
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 0x14) = arg4;
    if (arg3 > arg4) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg4;
        M2C_FIELD(arg0, s32 *, 0x14) = arg3;
    }
    if ((arg3 < 0) || (arg3 > 0x2D) || (arg4 < 0) || (arg4 > 0x2D)) {
        M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0);
        func_0209cd68(&sp4, M2C_FIELD(arg0, void **, 0) + 8);
        M2C_FIELD(arg0, s32 *, 0xC) = sp4;
    } else {
        M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0);
        func_0209cd68(&sp0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = sp0;
        func_0209cf00(arg0);
    }
    return arg0;
}
