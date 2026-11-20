#include "m2c.h"

M2C_UNK func_0205684c(M2C_UNK, void *);             /* extern */
extern M2C_UNK data_02082334;

void func_0205546c(void *arg0, M2C_UNK arg1) {
    func_0205684c(arg1, arg0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((s32 *) &data_02082334)[M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 7)];
}
