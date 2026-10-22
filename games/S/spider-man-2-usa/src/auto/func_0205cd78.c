/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0205add8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0205aef0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0205b248(void);
void func_0205b274(M2C_UNK);
void func_0205b304(M2C_UNK);
void func_0205c1c8(M2C_UNK);
void func_0205c1e8(M2C_UNK);
void func_0205c204(M2C_UNK);

void func_0205cd78(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r4;
    s32 var_r2;
    s32 var_r5;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r1 >= 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        var_r2 = 1 << temp_r1;
    } else {
        var_r2 = 0;
    }
    func_0205aef0(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), var_r2, 0);
    if (var_r5 != 0) {
        temp_r4 = func_0205b248();
        func_0205b304(1);
        func_0205b274(temp_r4);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 != 0) {
        func_0205c1e8(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0_2 != 0) {
        func_0205c204(temp_r0_2);
    }
    if (var_r5 != 0) {
        func_0205c1c8(M2C_FIELD(arg0, s32 *, 0x10));
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 1) {
        func_0205add8(0, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
