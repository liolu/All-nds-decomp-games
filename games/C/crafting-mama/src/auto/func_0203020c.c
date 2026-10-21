#include "engine.h"
#include "m2c.h"

void func_02019f88(void);
void func_0201fd44(void);
M2C_UNK func_0201fdb8(M2C_UNK);
void func_0201fe4c(M2C_UNK);

extern s8 data_020a8a6c;

void func_0203020c(void) {
    u8 sp0[8];

    func_0201fd44();
    if (func_0201fdb8((s32) sp0) == 0) {
        func_02019f88();
    } else {
        func_0201fe4c((s32) sp0);
    }
    data_020a8a6c = 0;
}
