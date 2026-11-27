#include "m2c.h"
M2C_UNK func_020b5230(void *);
M2C_UNK func_020b5b30(s32, void *);
s32 func_020b6bd0();
M2C_UNK func_020b6be4(s32);
extern M2C_UNK data_020f1974;
void func_020b5a00(void *arg0) {
    s32 temp = func_020b6bd0();
    s32 d    = M2C_FIELD(&data_020f1974, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 8) == d) {
        s32 n                       = M2C_FIELD(arg0, s32 *, 0xC) - 1;
        M2C_FIELD(arg0, s32 *, 0xC) = n;
        if (n == 0) {
            func_020b5b30(d, arg0);
            M2C_FIELD(arg0, s32 *, 8) = 0;
            func_020b5230(arg0);
        }
    }
    func_020b6be4(temp);
}