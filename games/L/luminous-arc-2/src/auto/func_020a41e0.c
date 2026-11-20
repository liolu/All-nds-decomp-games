#include "m2c.h"

s32 func_02084fc4(M2C_UNK, M2C_UNK *, void *, M2C_UNK *, void *, M2C_UNK *, void *); /* extern */
M2C_UNK func_020a4b24(void *);                      /* extern */
extern M2C_UNK func_020a4c54;
extern M2C_UNK func_020a4ccc;
extern M2C_UNK func_020a4cd0;

void func_020a41e0(void *arg0) {
    if (func_02084fc4(0, &func_020a4c54, arg0, &func_020a4ccc, arg0, &func_020a4cd0, arg0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
        return;
    }
    func_020a4b24(arg0);
    M2C_FIELD(arg0, u8 *, 0x77B) = 0x27U;
}
