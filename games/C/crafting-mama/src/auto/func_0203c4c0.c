#include "m2c.h"

M2C_UNK func_02047c64(s32, s32);                    /* extern */
M2C_UNK func_0205e6a8(void *);                      /* extern */

void func_0203c4c0(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_02047c64(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x30));
    func_0205e6a8(arg0 + 0x30);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
