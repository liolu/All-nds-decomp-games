#include "m2c.h"

M2C_UNK func_0205e6a8(s32);                         /* extern */
extern M2C_UNK data_020a7508;

void func_0202ed7c(void *arg0) {
    func_0205e6a8(arg0 + 0x24);
    *((M2C_UNK *) ((s8 *) &data_020a7508 + (M2C_FIELD(arg0, s32 *, 0x30) * 4))) = 0;
}
