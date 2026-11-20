#include "m2c.h"

M2C_UNK func_0202e9e4(void *);                      /* extern */
M2C_UNK func_020309dc(void *);                      /* extern */
M2C_UNK func_02037504(M2C_UNK *);                   /* extern */
M2C_UNK func_02037588(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0215cb90;
extern M2C_UNK data_0215d408;

void func_02030944(void *arg0) {
    func_02037504(&data_0215d408);
    if (M2C_FIELD(&data_0215cb90, s32 *, 4) != 0) {
        func_02037504(M2C_FIELD(&data_0215cb90, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_0202e9e4(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x170)(arg0);
    }
    func_020309dc(arg0);
    func_02037588(&data_0215d408);
    if (M2C_FIELD(&data_0215cb90, s32 *, 4) == 0) {
        return;
    }
    func_02037588(M2C_FIELD(&data_0215cb90, s32 *, 4) + 0x4C8);
}
