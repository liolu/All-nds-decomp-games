#include "m2c.h"

M2C_UNK func_02014050(void *, s32, M2C_UNK *);      /* extern */
extern M2C_UNK data_020ccd70;

s32 func_020633c8(s32 arg0, void *arg1) {
    func_02014050(arg1 + 6, M2C_FIELD(M2C_FIELD(arg1, void **, 0x108), s32 *, 0x84), &data_020ccd70);
    return 0;
}
