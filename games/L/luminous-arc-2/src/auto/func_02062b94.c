#include "m2c.h"

M2C_UNK func_0202b298(M2C_UNK *, u16, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0210e044;
extern M2C_UNK data_0210e070;

void func_02062b94(s32 arg0, M2C_UNK arg1) {
    if (arg0 & 1) {
        func_0202b298(&data_0210e044, *(u16 *) 0x04000008, arg1, 1);
    }
    if (!(arg0 & 2)) {
        return;
    }
    func_0202b298(&data_0210e070, *(u16 *) 0x04001008 | 0x80000000, arg1, 1);
}
