#include "m2c.h"

M2C_UNK func_0202e968(void *);                      /* extern */
M2C_UNK func_02030944(void *);                      /* extern */
M2C_UNK func_02037504(M2C_UNK *);                   /* extern */
M2C_UNK func_02037588(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0215cb90;
extern M2C_UNK data_0215d408;

void func_02030bb0(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_02037504(&data_0215d408);
    if (M2C_FIELD(&data_0215cb90, s32 *, 4) != 0) {
        func_02037504(M2C_FIELD(&data_0215cb90, s32 *, 4) + 0x4C8);
    }
    func_02030944(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_0202e968(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_02037588(&data_0215d408);
    if (M2C_FIELD(&data_0215cb90, s32 *, 4) == 0) {
        return;
    }
    func_02037588(M2C_FIELD(&data_0215cb90, s32 *, 4) + 0x4C8);
}
