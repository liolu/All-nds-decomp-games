#include "m2c.h"

M2C_UNK func_0208617c(s32, M2C_UNK, s32);           /* extern */

void func_0209dab4(void *arg0) {
    func_0208617c(M2C_FIELD(arg0, s32 *, 4), 0, (((u32) M2C_FIELD(arg0, u32 *, 8) >> 5) + 1) * 4);
}
