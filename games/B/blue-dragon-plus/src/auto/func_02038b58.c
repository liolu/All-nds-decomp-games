#include "engine.h"
#include "m2c.h"

void func_020389b4(M2C_UNK);
M2C_UNK func_02038e10(void);
void func_02038e24(M2C_UNK);

void func_02038b58(s32 arg0) {
    s32 temp_r0;

    temp_r0                      = func_02038e10();
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        func_02038e24(temp_r0);
        return;
    }
    func_020389b4(arg0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_02038e24(temp_r0);
}
