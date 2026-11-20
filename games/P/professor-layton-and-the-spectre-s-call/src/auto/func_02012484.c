#include "engine.h"
#include "m2c.h"

void func_020123f4(void);
M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);
void func_020176e4(void);

extern M2C_UNK data_020348d0;

void func_02012484(void) {
    s32 temp_r4;

    temp_r4 = func_0201732c();
    if (M2C_FIELD(M2C_FIELD(&data_020348d0, void **, 0x10), s32 *, 0x1320) == 0) {
        func_020176e4();
    }
    func_020123f4();
    func_02017340(temp_r4);
}
