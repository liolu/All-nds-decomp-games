/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201c810(M2C_UNK);
void func_0201c81c(M2C_UNK, M2C_UNK);

void func_0201c78c(s32 arg0) {
    s32 temp_r1;
    s32 temp_r4;
    s32 var_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x114);
    if (temp_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (temp_r1 - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x114) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x114) = 0;
        var_r1                        = M2C_FIELD(arg0, s32 *, 0x110);
    } else {
        temp_r4 = func_0201c810(arg0);
        var_r1 = temp_r4 + ((s32) (M2C_FIELD(arg0, s32 *, 0x110) - func_0201c810(arg0)) / (s32) M2C_FIELD(arg0, s32 *, 0x114));
    }
    func_0201c81c(arg0, var_r1);
}
