#include "m2c.h"

M2C_UNK func_0208571c();                            /* extern */
extern void *data_02170354;

void func_020859f0(M2C_UNK arg0, M2C_UNK arg1) {
    if (M2C_FIELD(data_02170354, s32 *, 0x28) != 4) {
        func_0208571c();
    }
    M2C_FIELD(data_02170354, M2C_UNK(**)(M2C_UNK, M2C_UNK, s32), 0x78)(arg0, arg1, M2C_FIELD(data_02170354, s32 *, 0x7C));
}
