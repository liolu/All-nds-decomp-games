#include "engine.h"
#include "m2c.h"

M2C_UNK func_02019d04(void);
void func_02019d18(M2C_UNK);

extern void *data_02093fe0;

void func_0201140c(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_02019d04();
    M2C_FIELD(data_02093fe0, s32 *, 0x14E4) = arg0;
    func_02019d18(temp_r0);
}
