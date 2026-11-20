#include "m2c.h"

s32 func_0201b5e0(void *, M2C_UNK *);               /* extern */
M2C_UNK func_0206c088();                            /* extern */
M2C_UNK func_0206c108(s32, u8, s32);                /* extern */
s32 func_0206c688(M2C_UNK, M2C_UNK, s32, M2C_UNK);  /* extern */
u8 func_0206c808(M2C_UNK, u8);                      /* extern */
extern M2C_UNK data_02119428;
extern M2C_UNK data_0211bd36;

void func_0206c730(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, u8 arg4, s32 arg5) {
    s32 temp_r4;

    arg4 = func_0206c808(2, arg4);
    if (func_0201b5e0((M2C_UNK *) ((s8 *) &data_0211bd36 + (arg2 * 3)), &data_02119428) == 0) {
        return;
    }
    temp_r4 = func_0206c688(arg0, arg1, arg2, arg3);
    func_0206c088();
    func_0206c108(temp_r4, arg4, arg5);
}
