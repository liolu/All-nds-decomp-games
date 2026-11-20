#include "m2c.h"
M2C_UNK func_02005130(void *);
M2C_UNK func_02005a54(s32, void *);
s32 func_02006be0();
M2C_UNK func_02006bf4(s32);
extern M2C_UNK data_02147904;
void func_02005924(void *arg0) {
    s32 temp = func_02006be0();
    s32 d    = M2C_FIELD(&data_02147904, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 8) == d) {
        s32 n                       = M2C_FIELD(arg0, s32 *, 0xC) - 1;
        M2C_FIELD(arg0, s32 *, 0xC) = n;
        if (n == 0) {
            func_02005a54(d, arg0);
            M2C_FIELD(arg0, s32 *, 8) = 0;
            func_02005130(arg0);
        }
    }
    func_02006bf4(temp);
}