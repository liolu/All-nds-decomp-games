#include "engine.h"
#include "m2c.h"

void func_0201527c(M2C_UNK);
M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);

s32 func_0200702c(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0x100) {
        temp_r4 = func_0201732c();
        if (!(M2C_FIELD(arg0, s32 *, 0xC) & 8)) {
            do {
                func_0201527c(arg0 + 0x18);
            } while (!(M2C_FIELD(arg0, s32 *, 0xC) & 8));
        }
        func_02017340(temp_r4);
        var_r1                      = M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~8);
    }
    return var_r1;
}
