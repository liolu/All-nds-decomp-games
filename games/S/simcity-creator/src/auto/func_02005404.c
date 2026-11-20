#include "m2c.h"
M2C_UNK func_02004e20(void *);
M2C_UNK func_02005534(s32, void *);
s32 func_020066e0();
M2C_UNK func_020066f4(s32);
extern M2C_UNK data_020d0c64;
void func_02005404(void *arg0) {
    s32 temp = func_020066e0();
    s32 d    = M2C_FIELD(&data_020d0c64, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 8) == d) {
        s32 n                       = M2C_FIELD(arg0, s32 *, 0xC) - 1;
        M2C_FIELD(arg0, s32 *, 0xC) = n;
        if (n == 0) {
            func_02005534(d, arg0);
            M2C_FIELD(arg0, s32 *, 8) = 0;
            func_02004e20(arg0);
        }
    }
    func_020066f4(temp);
}