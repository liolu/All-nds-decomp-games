#include "m2c.h"

M2C_UNK func_0200ce30(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020eb0d4;

void func_0200cd78(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_020eb0d4, s32 *, 0) = arg0;
    M2C_FIELD(&data_020eb0d4, s32 *, 4) = arg1;
    func_0200ce30(&data_020eb0d4);
}
