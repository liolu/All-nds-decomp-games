#include "m2c.h"

void *func_01ff80bc();                              /* extern */
M2C_UNK func_020388b0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203e88c(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_020d5b48;

void func_02038848(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    if (arg2 != -1) {
        func_0203e88c(func_01ff80bc() + 0x24, (M2C_UNK *) ((s8 *) &data_020d5b48 + (arg2 * 0x10)));
    } else if (M2C_FIELD(func_01ff80bc(), u8 *, 0xF1) == 0) {
        func_0203e88c(func_01ff80bc() + 0x24, &data_020d5b48);
    }
    func_020388b0(arg0, arg1);
}
