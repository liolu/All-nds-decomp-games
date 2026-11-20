#include "m2c.h"

M2C_UNK func_020873f8(void *);                      /* extern */
M2C_UNK func_0208a0ec(void *);                      /* extern */
M2C_UNK func_020b5a00(M2C_UNK *);                   /* extern */
M2C_UNK func_020b597c(M2C_UNK *);                   /* extern */
extern s32 data_020e5b64;
extern M2C_UNK data_020e61dc;

void func_020876dc(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_020b597c(&data_020e61dc);
    if (data_020e5b64 != 0) {
        func_020b597c(data_020e5b64 + 0x4C8);
    }
    func_020873f8(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_0208a0ec(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_020b5a00(&data_020e61dc);
    if (data_020e5b64 == 0) {
        return;
    }
    func_020b5a00(data_020e5b64 + 0x4C8);
}
