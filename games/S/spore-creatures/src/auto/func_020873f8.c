#include "m2c.h"

M2C_UNK func_02087490(void *);                      /* extern */
M2C_UNK func_0208a308(void *);                      /* extern */
M2C_UNK func_020b5a00(M2C_UNK *);                   /* extern */
M2C_UNK func_020b597c(M2C_UNK *);                   /* extern */
extern s32 data_020e5b64;
extern M2C_UNK data_020e61dc;

void func_020873f8(void *arg0) {
    func_020b597c(&data_020e61dc);
    if (data_020e5b64 != 0) {
        func_020b597c(data_020e5b64 + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_0208a308(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x16C)(arg0);
    }
    func_02087490(arg0);
    func_020b5a00(&data_020e61dc);
    if (data_020e5b64 == 0) {
        return;
    }
    func_020b5a00(data_020e5b64 + 0x4C8);
}
