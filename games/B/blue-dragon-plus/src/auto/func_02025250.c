#include "m2c.h"

M2C_UNK func_02026ca4(M2C_UNK, void *);             /* extern */
extern M2C_UNK data_0207bd28;

void func_02025250(void *arg0, M2C_UNK arg1) {
    func_02026ca4(arg1, arg0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((s32 *) &data_0207bd28)[M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 7)];
}
