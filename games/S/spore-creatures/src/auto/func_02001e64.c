#include "m2c.h"

M2C_UNK func_02001af0(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_020d1c68;

void func_02001e64(M2C_UNK arg0, s32 arg1) {
    func_02001af0(arg0, *((M2C_UNK *) ((s8 *) &data_020d1c68 + (arg1 * 4))));
}
