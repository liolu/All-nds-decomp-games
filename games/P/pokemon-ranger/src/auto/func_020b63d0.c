#include "m2c.h"

M2C_UNK func_020b567c(s32, s32);                    /* extern */
s32 func_020b64b4();                                /* extern */
extern s32 data_020f5004;

void func_020b63d0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    if (func_020b64b4() == 0) {
        func_020b567c(data_020f5004, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~8);
}
