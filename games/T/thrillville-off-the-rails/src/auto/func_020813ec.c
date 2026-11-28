#include "m2c.h"

M2C_UNK func_02081484(void *);                      /* extern */
M2C_UNK func_02082918(void *);                      /* extern */
M2C_UNK func_02022cc4(M2C_UNK *);                   /* extern */
M2C_UNK func_02022d34(M2C_UNK *);                   /* extern */
extern s32 data_020fa9c0;
extern M2C_UNK data_020fb448;

void func_020813ec(void *arg0) {
    func_02022d34(&data_020fb448);
    if (data_020fa9c0 != 0) {
        func_02022d34(data_020fa9c0 + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_02082918(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x16C)(arg0);
    }
    func_02081484(arg0);
    func_02022cc4(&data_020fb448);
    if (data_020fa9c0 == 0) {
        return;
    }
    func_02022cc4(data_020fa9c0 + 0x4C8);
}
