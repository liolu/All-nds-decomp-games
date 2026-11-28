#include "m2c.h"

M2C_UNK func_020d1860();                            /* extern */
extern M2C_UNK data_02103b5c;

void func_020d1834(void *arg0) {
    func_020d1860();
    *((M2C_UNK *) ((s8 *) &data_02103b5c + (M2C_FIELD(arg0, s32 *, 0) * 0x18))) = M2C_FIELD(arg0, s32 *, 4);
}
