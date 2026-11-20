#include "m2c.h"

M2C_UNK func_0208571c(M2C_UNK);                     /* extern */
M2C_UNK func_020873fc();                            /* extern */
extern void *data_02170354;

void func_02085990(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r3)(s32, s32, s32);

    if (arg0 == 0) {
        M2C_FIELD(data_02170354, s32 *, 0x64) = arg1;
        func_0208571c(3);
        func_020873fc();
    } else {
        func_0208571c(0);
    }
    temp_r3 = M2C_FIELD(data_02170354, M2C_UNK(**)(s32, s32, s32), 0x70);
    if (temp_r3 == NULL) {
        return;
    }
    temp_r3(arg0, arg1, M2C_FIELD(data_02170354, s32 *, 0x74));
}
