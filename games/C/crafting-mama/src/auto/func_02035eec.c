#include "m2c.h"

M2C_UNK func_02028fb4(void *);                      /* extern */

void func_02035eec(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        func_02028fb4(arg0 + 0x38);
    }
    if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
        func_02028fb4(arg0 + 0x84);
    }
    if (M2C_FIELD(arg0, s32 *, 0x88) == 0) {
        return;
    }
    func_02028fb4(arg0 + 0x88);
}
