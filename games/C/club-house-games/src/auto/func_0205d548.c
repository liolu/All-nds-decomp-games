#include "m2c.h"

M2C_UNK func_0205d49c(M2C_UNK *, void *);
M2C_UNK func_0205d50c();
M2C_UNK func_0205d648(void *);
extern s32 data_02263ec0;
extern M2C_UNK data_022643b0;

void func_0205d548(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0205d50c(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    func_0205d49c(&data_022643b0, arg0);
    if (data_02263ec0 != 0) {
        func_0205d49c(data_02263ec0 + 0x4E0, arg0);
    }
    func_0205d648(arg0);
}
