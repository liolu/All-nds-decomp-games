#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);

extern void *data_020348e0;

void func_0200e0b4(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_0201732c();
    M2C_FIELD(data_020348e0, s32 *, 0x14E4) = arg0;
    func_02017340(temp_r0);
}
