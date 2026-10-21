#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);

extern void *data_0215088c;

void func_02012cd0(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_02006be0();
    M2C_FIELD(data_0215088c, s32 *, 0x14E4) = arg0;
    func_02006bf4(temp_r0);
}
