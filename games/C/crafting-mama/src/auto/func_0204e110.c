/* compiler: 1.2/sp3  */
#include "engine.h"
#include "m2c.h"

void func_0204dbc8(M2C_UNK, M2C_UNK);
M2C_UNK func_0204dbf4(M2C_UNK, M2C_UNK);
void func_0204dfb8(M2C_UNK, M2C_UNK);

void func_0204e110(s32 arg0, s32 arg1) {
    M2C_UNK sp0;
    s32 temp_r5;

    temp_r5 = arg1 - 0x10;
    func_0204dbc8((s32) &sp0, temp_r5);
    func_0204dbf4(arg0 + 0x2C, temp_r5);
    func_0204dfb8(arg0 + 0x24, (s32) &sp0);
}
